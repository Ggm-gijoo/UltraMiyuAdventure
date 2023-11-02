// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyFSM.h"
#include "TPSCharacter.h"
#include "Enemy.h"
#include "Materials/Material.h"
#include "EnemyAnim.h"
#include <Kismet/GameplayStatics.h>
#include <Components/CapsuleComponent.h>

// Sets default values for this component's properties
UEnemyFSM::UEnemyFSM()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	ConstructorHelpers::FObjectFinder<UMaterial> TempHitMat(TEXT("/Script/Engine.Material'/Game/Material/MeshGlow.MeshGlow'"));
	if (TempHitMat.Succeeded())
	{
		hitMat = TempHitMat.Object;
	}
	// ...
}


// Called when the game starts
void UEnemyFSM::BeginPlay()
{
	Super::BeginPlay();

	// 월드에서 TPSCharacter 가져오기
	auto actor = UGameplayStatics::GetActorOfClass(GetWorld(), ATPSCharacter::StaticClass());
	target = Cast<ATPSCharacter>(actor);

	// 소유 객체 가져오기
	if(me == NULL)
		me = Cast<AEnemy>(GetOwner());

	anim = Cast<UEnemyAnim>(me->GetMesh()->GetAnimInstance());
}


// Called every frame
void UEnemyFSM::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	switch (mState)
	{
	case EEnemyState::Idle:
		IdleState();
		break;
	case EEnemyState::Move:
		MoveState();
		break;
	case EEnemyState::Attack:
		AttackState();
		break;
	case EEnemyState::Damage:
		DamageState();
		break;
	case EEnemyState::Die:
		DieState();
		break;
	default:
		break;
	}
}

void UEnemyFSM::IdleState()
{
	// 시간이 흐러
	currentTime += GetWorld()->DeltaTimeSeconds;
	// 경과시간이 대기 시간을 초과 했다면
	if (currentTime > idleDelayTime)
	{
		// 이동 상태로 전환 한다
		mState = EEnemyState::Move;
		currentTime = 0;
		if (anim)
			anim->animState = mState;

	}
}

void UEnemyFSM::MoveState()
{
	if (target == nullptr || me == nullptr)
		return;

	FVector dest = target->GetActorLocation();
	FVector dir = dest - me->GetActorLocation();

	me->AddMovementInput(dir.GetSafeNormal());
	if (dir.Size() < attackRange)
	{
		mState = EEnemyState::Attack;
		if (anim)
		{
			anim->animState = mState;
			// 공격 애니메이션 재생 활성화
			anim->bAttackPlay = true;
			currentTime = attackDelayTime;
		}
	}
}

void UEnemyFSM::AttackState()
{
	currentTime += GetWorld()->DeltaTimeSeconds;
	if (currentTime > attackDelayTime)
	{
		// 공격하기
		currentTime = 0;
		if (anim)
			anim->bAttackPlay = true;
		float distance = FVector::Distance(target->GetActorLocation(), me->GetActorLocation());
		if (distance <= 150.0f)
		{
			auto playerFSM = Cast<ATPSCharacter>(GetWorld()->GetFirstPlayerController()->GetPawn());
			if (playerFSM)
				playerFSM->OnHitEvent();
		}

	}
	float distance = FVector::Distance(target->GetActorLocation(), me->GetActorLocation());
	if (distance > attackRange)
	{
		mState = EEnemyState::Move;
		if (anim)
			anim->animState = mState;

	}
}

void UEnemyFSM::DamageState()
{
	currentTime += GetWorld()->DeltaTimeSeconds;
	if (currentTime > damageDelayTime)
	{
		mState = EEnemyState::Idle;
		currentTime = 0;
		if (anim)
			anim->animState = mState;

	}
}

void UEnemyFSM::DieState()
{
	if (!isDieAnimEnded) return;
	// 등속운동 공식 : P = P0 + vt
	FVector P0 = me->GetActorLocation();
	FVector vt = FVector::DownVector * dieSpeed * GetWorld()->DeltaTimeSeconds;
	FVector P = P0 + vt;
	me->SetActorLocation(P);

	if (P.Z < -200.0f)
	{
		me->Destroy();
	}
}

void UEnemyFSM::OnDamageProcess()
{
	// 체력 감소
	hp--;
	if (hp > 0)
	{
		mState = EEnemyState::Damage;
		currentTime = 0;
		// 피격 애니메이션 재생
		int32 index = FMath::RandRange(0, 1);
		FString sectionName = FString::Printf(TEXT("Damage%d"), index);
		UE_LOG(LogTemp, Log, TEXT("%s"), *sectionName);
		if (anim)
			anim->PlayDamageAnim(FName(*sectionName));
	}
	else
	{
		auto controller = GetWorld()->GetFirstPlayerController();
		if (controller)
			controller->PlayerCameraManager->StartCameraShake(cameraShake, 4.0f);
		FString sectionName = FString::Printf(TEXT("Die"));
		if (anim)
			anim->PlayDamageAnim(FName(*sectionName));
		mState = EEnemyState::Die;
		// 캡슐 충돌체 비활성화
		me->GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	}
	if (anim)
		anim->animState = mState;
}


