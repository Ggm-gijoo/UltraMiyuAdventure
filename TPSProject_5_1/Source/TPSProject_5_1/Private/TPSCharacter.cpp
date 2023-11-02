// Fill out your copyright notice in the Description page of Project Settings.


#include "TPSCharacter.h"
#include <GameFramework/SpringArmComponent.h>
#include <Camera/CameraComponent.h>
#include "C:/Program Files/Unreal/UE_5.1/Engine/Plugins/EnhancedInput/Source/EnhancedInput/Public/EnhancedInputSubsystems.h"
#include "C:/Program Files/Unreal/UE_5.1/Engine/Plugins/EnhancedInput/Source/EnhancedInput/Public/EnhancedInputComponent.h"
#include "Bullet.h"
#include <Blueprint/UserWidget.h>
#include <Kismet/GameplayStatics.h>
#include <Components/CapsuleComponent.h>
#include "EnemyFSM.h"
#include <GameFramework/CharacterMovementComponent.h>
#include "CharacterAnim.h"
#include "Materials/Material.h"
#include "Math/UnrealMathUtility.h"
#include "Enemy.h"

// Sets default values
ATPSCharacter::ATPSCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// 스켈레탈메시 데이터 로드
	ConstructorHelpers::FObjectFinder<USkeletalMesh> TempMesh(TEXT("/Script/Engine.SkeletalMesh'/Game/Characters/blue-archivekasumizawa-miyu/Miyu_Akey_Rigging_shoes.Miyu_Akey_Rigging_shoes'"));

	if (TempMesh.Succeeded())
	{
		GetMesh()->SetSkeletalMesh(TempMesh.Object);
		GetMesh()->SetRelativeLocationAndRotation(FVector(0, 0, -90), FRotator(0, -90, 0));
	}

	// 카메라의 부모 컴포넌트 생성
	springArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComp"));
	if (springArmComp)
	{
		springArmComp->SetupAttachment(RootComponent);
		springArmComp->SetRelativeLocation(FVector(0, 70, 90));
		springArmComp->TargetArmLength = 400;
	}

	// 카메라 컴포넌트
	tpsCamComp = CreateDefaultSubobject<UCameraComponent>(TEXT("TPSCamComp"));
	if (tpsCamComp)
	{
		tpsCamComp->SetupAttachment(springArmComp);
	}

	// 2단 점프
	JumpMaxCount = 2;

	// 총 스켈레탈 메시 컴포넌트 등록
	gunMeshComp = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("GunMeshComp")); //"GunMeshComp"라는 이름의 서브오브젝트를 생성
	if (gunMeshComp)
	{
		gunMeshComp->SetupAttachment(GetMesh(), TEXT("Hand_LSocket")); //GunMeshComp를 "hand_rSocket"에 어태치

		// 스켈레탈 메시 데이터 로드
		ConstructorHelpers::FObjectFinder<USkeletalMesh> TempGunMesh(TEXT("/Script/Engine.SkeletalMesh'/Game/FPWeapon/Mesh/SK_FPGun.SK_FPGun'"));//경로를 찾아와서 붙이는 것 같다.

		if (TempGunMesh.Succeeded())
			{
				gunMeshComp->SetSkeletalMesh(TempGunMesh.Object);
				gunMeshComp->SetRelativeLocation(FVector(-17,  10, -6));
				gunMeshComp->SetRelativeRotation(FRotator(0, 90, 0));
				gunMeshComp->SetRelativeScale3D(FVector(0.03f));
		}
	}

	// 스나이퍼 건 컴포넌트 등록
	sniperGunComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SniperGunComp"));
	if (sniperGunComp)
	{
		sniperGunComp->SetupAttachment(GetMesh(), TEXT("Hand_LSocket"));

		ConstructorHelpers::FObjectFinder<UStaticMesh> TempSniper(TEXT("/Script/Engine.StaticMesh'/Game/k28-sword/source/k28sword.k28sword'"));
		if (TempSniper.Succeeded())
		{
			sniperGunComp->SetStaticMesh(TempSniper.Object);
			sniperGunComp->SetRelativeLocation(FVector(63, -18, -60));
			sniperGunComp->SetRelativeRotation(FRotator(-25, 105, 111));
			sniperGunComp->SetRelativeScale3D(FVector(0.02f));
		}
	}

	swordCapsuleComp = CreateDefaultSubobject<UCapsuleComponent>(TEXT("SwordCapsuleComp"));
	if (swordCapsuleComp)
	{
		swordCapsuleComp->SetupAttachment(sniperGunComp);
	}

	dashEffect = LoadObject<UNiagaraSystem>(nullptr,TEXT("/Script/Niagara.NiagaraSystem'/Game/BlinkAndDashVFX/VFX_Niagara/NS_Dash_Mana.NS_Dash_Mana'"));

	ConstructorHelpers::FObjectFinder<UMaterial> TempDashMat(TEXT("/Script/Engine.Material'/Game/Material/MeshGlow.MeshGlow'"));
	if (TempDashMat.Succeeded())
	{
		dashMat = TempDashMat.Object;
	}

	for (int i = 0; i < GetMesh()->GetNumMaterials(); i++)
	{
		normMat[i] = GetMesh()->GetMaterial(i);
	}

	// 초기 속도 설정
	GetCharacterMovement()->MaxWalkSpeed = walkSpeed * 5;

	// 총알 사운드 가져오기
	ConstructorHelpers::FObjectFinder<USoundBase> tempSound(TEXT("/Script/Engine.SoundWave'/Game/SniperGun/Rifle.Rifle'"));

	if (tempSound.Succeeded())
	{
		bulletSound = tempSound.Object;
	}
}

// Called when the game starts or when spawned
void ATPSCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	// 스나이퍼 UI 위젯 인스턴스 생성
	sniperUI = CreateWidget(GetWorld(), sniperUIFactory);

	// 크로스헤어 UI 위젯 인스턴스 생성
	crosshairUI = CreateWidget(GetWorld(), crosshairUIFactory);

	// 크로스헤어 UI 등록
	crosshairUI->AddToViewport();

	swordCapsuleComp->OnComponentBeginOverlap.AddDynamic(this, &ATPSCharacter::OnCapsuleOverlapBegin);
	swordCapsuleComp->OnComponentEndOverlap.AddDynamic(this, &ATPSCharacter::OnCapsuleOverlapEnd);

	// 기본으로 스나이퍼건을 사용하도록 설정

	isCanAttack = true;

	auto movement = GetCharacterMovement();
	if (movement != nullptr)
		movement->MaxWalkSpeed = walkSpeed;
}

// Called every frame
void ATPSCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	enemySpawnTimer += GetWorld()->DeltaTimeSeconds;
	if (enemySpawnTimer >= 15.0f + round * 1.5f)
	{
		UE_LOG(LogTemp, Log, TEXT("SpawnEnemy"));
		enemySpawnTimer = 0.0f;
		round++;

		for (int i = 0; i < round + 5; i++)
		{
			FName path = TEXT("/Script/Engine.Blueprint'/Game/TPSContent/Blueprints/BP_Enemy.BP_Enemy'");
			UBlueprint* ObjectToSpawn =
				Cast<UBlueprint>(StaticLoadObject(UBlueprint::StaticClass(), NULL, *path.ToString()));
			FActorSpawnParameters spawnParams;
			FRotator rotator;
			FVector spawnLocation = FVector::ZeroVector;

			AActor* enemyClone = GetWorld()->SpawnActor<AActor>(ObjectToSpawn->GeneratedClass, spawnLocation, rotator, spawnParams);
			enemyClone->SetActorLocation(FVector(FMath::RandRange(-4500, 4500), FMath::RandRange(-4500, 4500), 87.999998f));
		}
	}

	if (isRun && !bNowDash)
	{
		dashTimer += GetWorld()->DeltaRealTimeSeconds;

		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		if (dashTimer > .3f)
		{
			bNowDash = true;
			GetWorldSettings()->SetTimeDilation(0.01f);
			CustomTimeDilation = 100.f;

			auto controller = GetWorld()->GetFirstPlayerController();
			if (controller)
				controller->PlayerCameraManager->CustomTimeDilation = 100.f;
		}
	}
	if (isRun)
	{
		stamina-= 0.2f;
		if (stamina <= 0)
		{
			isRun = false;
			for(int i = 0; i < GetMesh()->GetNumMaterials(); i++)
				GetMesh()->SetMaterial(i, normMat[i]);

			CustomTimeDilation = 1.f;

			auto controller = GetWorld()->GetFirstPlayerController();
			if (controller)
				controller->PlayerCameraManager->CustomTimeDilation = 1.f;
			GetWorldSettings()->SetTimeDilation(1.f);

			auto movement = GetCharacterMovement();
			if (movement == nullptr)
				return;

			dashTimer = 0.0f;
			bNowDash = false;
			movement->MaxWalkSpeed = walkSpeed;
		}
	}
	if (!isRun && stamina < 100)
	{
		stamina += 0.5f;
	}
}

// Called to bind functionality to input
void ATPSCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	APlayerController* PlayerController = Cast<APlayerController>(Controller);

	if (PlayerController)
	{
		UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer());
		if (Subsystem)
		{
			Subsystem->AddMappingContext(tpsMappingContext, 0);
		}
	}

	// 인풋 액션 바인딩
	UEnhancedInputComponent* EnhancedInputComp = CastChecked<UEnhancedInputComponent>(PlayerInputComponent);
	if (EnhancedInputComp)
	{
		// MoveForward
		EnhancedInputComp->BindAction(moveForwardAction, ETriggerEvent::Triggered, this, &ATPSCharacter::MoveForward);

		// MoveRight
		EnhancedInputComp->BindAction(moveRightAction, ETriggerEvent::Triggered, this, &ATPSCharacter::MoveRight);

		// TurnPitch
		EnhancedInputComp->BindAction(turnPitchAction, ETriggerEvent::Triggered, this, &ATPSCharacter::TurnPitch);

		// TurnYaw
		EnhancedInputComp->BindAction(turnYawAction, ETriggerEvent::Triggered, this, &ATPSCharacter::TurnYaw);

		// Jump
		EnhancedInputComp->BindAction(jumpAction, ETriggerEvent::Triggered, this, &ACharacter::Jump);
		EnhancedInputComp->BindAction(jumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);

		// InputFire
		EnhancedInputComp->BindAction(fireAction, ETriggerEvent::Triggered, this, &ATPSCharacter::InputFire);

		// RunAction
		EnhancedInputComp->BindAction(runAction, ETriggerEvent::Triggered, this, &ATPSCharacter::InputRun);


	}
}

void ATPSCharacter::MoveForward(const FInputActionValue& Value)
{
	float Movement = Value.Get<float>();
	if (Controller != nullptr)
	{
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		const FVector ForwardDir = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);

		AddMovementInput(ForwardDir, Movement);
	}
}

void ATPSCharacter::MoveRight(const FInputActionValue& Value)
{
	float Movement = Value.Get<float>();
	if (Controller != nullptr)
	{
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		const FVector RightDir = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		AddMovementInput(RightDir, Movement);
	}
}

void ATPSCharacter::TurnPitch(const FInputActionValue& Value)
{
	float Turn = -(Value.Get<float>());
	if (Controller != nullptr)
	{
		AddControllerPitchInput(Turn);
	}
}

void ATPSCharacter::TurnYaw(const FInputActionValue& Value)
{
	float Turn = Value.Get<float>();
	if (Controller != nullptr)
	{
		AddControllerYawInput(Turn);
	}
}

void ATPSCharacter::InputFire(const FInputActionValue& Value)
{
	if (!isCanAttack) return;
	// 총알 발사 사운드 재생
	UGameplayStatics::PlaySound2D(GetWorld(), bulletSound);

	// 카메라 셰이크 재생
	auto controller = GetWorld()->GetFirstPlayerController();
	if (controller)
		controller->PlayerCameraManager->StartCameraShake(cameraShake);
	
	// 공격할 애니메이션 재생
	auto anim = Cast<UCharacterAnim>(GetMesh()->GetAnimInstance());
	if (anim)
	{
		anim->PlayAttackAnim();
		isAttack = true;
		isCanAttack = false;
	}


}

void ATPSCharacter::OnCapsuleOverlapBegin(UPrimitiveComponent* overlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (!isAttack) return;
	UE_LOG(LogTemp, Log, TEXT("AttackBegin"));
	UE_LOG(LogTemp, Log, TEXT("Character Name :: %s"), *OtherActor->GetName());
	
	auto enemy = Cast<AEnemy>(OtherActor);
	if (enemy) {
		UE_LOG(LogTemp, Log, TEXT("Enemy Begin"));
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), bulletEffectFactory, enemy->GetActorLocation());
		enemy->fsm->OnDamageProcess();
		score += 200;
	}
}

void ATPSCharacter::OnCapsuleOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{

}

void ATPSCharacter::OnHitEvent()
{
	hp--;
	auto anim = Cast<UCharacterAnim>(GetMesh()->GetAnimInstance());
	if (anim)
	{
		isAttack = false;
		isCanAttack = true;
		anim->PlayHitAnim();
	}

	if (hp <= 0)
	{
		OnGameOver();
	}
}

void ATPSCharacter::OnGameOver()
{
	UGameplayStatics::SetGamePaused(GetWorld(), true);
	UGameplayStatics::GetPlayerController(GetWorld(), 0)->SetShowMouseCursor(true);
}

void ATPSCharacter::InputRun(const FInputActionValue& Value)
{
	auto movement = GetCharacterMovement();
	if (movement == nullptr)
		return;

	isRun = Value.Get<bool>();
	if (isRun)
	{
		UE_LOG(LogTemp, Log, TEXT("DashBegin"));
		if (stamina >= 10)
		{
			stamina -= 10;
			for (int i = 0; i < GetMesh()->GetNumMaterials(); i++)
			{
				GetMesh()->SetMaterial(i, dashMat);
			}
			auto controller = GetWorld()->GetFirstPlayerController();
			if (controller)
				controller->PlayerCameraManager->StartCameraShake(cameraShake);

			UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), dashEffect, ThisClass::GetActorLocation() - FVector(0, 10, 0), ThisClass::GetActorRotation());
			movement->MaxWalkSpeed = runSpeed;
			LaunchCharacter(GetActorForwardVector() * 5000, true, true);
		}
	
	}
	else
	{
		for (int i = 0; i < GetMesh()->GetNumMaterials(); i++)
			GetMesh()->SetMaterial(i, normMat[i]);

		CustomTimeDilation = 1.f;
		GetWorldSettings()->SetTimeDilation(1.f);

		dashTimer = 0.0f;
		bNowDash = false;
		movement->MaxWalkSpeed = walkSpeed;
	}

}

