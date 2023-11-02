// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "NiagaraFunctionLibrary.h"
#include "NiagaraComponent.h"
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "C:/Program Files/Unreal/UE_5.1/Engine/Plugins/EnhancedInput/Source/EnhancedInput/Public/InputActionValue.h"
#include "TPSCharacter.generated.h"

UCLASS()
class ATPSCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ATPSCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:
	void MoveForward(const FInputActionValue& Value);
	void MoveRight(const FInputActionValue& Value);
	void TurnPitch(const FInputActionValue& Value);
	void TurnYaw(const FInputActionValue& Value);
	void InputFire(const FInputActionValue& Value);
	// 달리기 이벤트 처리 함수
	void InputRun(const FInputActionValue& Value);
	void OnHitEvent();
	void OnGameOver();

public:
	UFUNCTION()
		virtual void OnCapsuleOverlapBegin(UPrimitiveComponent* overlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION()
		virtual void OnCapsuleOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

public:
	bool bNowDash = false;
	bool isRun = false;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = FSM)
	bool isAttack = false;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = FSM)
	bool isCanAttack = false;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = FSM)
	int hp = 5;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = FSM)
	float stamina = 100;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = FSM)
	int score = 0;
	// 걷기 속도
	float walkSpeed = 750;
	// 달리기 속도
	float runSpeed = 1500;

	float dashTimer = 0.0f;
	float enemySpawnTimer = 0.0f;

	int round = 0;

#pragma region /* Component*/
public:
	UPROPERTY(VisibleAnywhere, Category = Camera)
	class USpringArmComponent* springArmComp;

	UPROPERTY(VisibleAnywhere, Category = Camera)
	class UCameraComponent* tpsCamComp;

	UPROPERTY(VisibleAnywhere, Category = GunMesh)
	class USkeletalMeshComponent* gunMeshComp;

	UPROPERTY(VisibleAnywhere, Category = GunMesh)
	class UStaticMeshComponent* sniperGunComp;

	UPROPERTY(VisibleAnywhere, Category = GunMesh)
	class UCapsuleComponent* swordCapsuleComp;

	UPROPERTY(EditAnywhere, Category = BodyMesh)
	class UMaterial* dashMat;

	UPROPERTY(EditAnywhere, Category = BodyMesh)
	class UMaterialInterface* normMat[10];

	UPROPERTY(EditAnywhere, Category = Effect)
	TObjectPtr<UNiagaraSystem> dashEffect;
#pragma endregion

public:
	UPROPERTY(EditDefaultsOnly, Category = BulletFactory)
	TSubclassOf<class ABullet> bulletFactory;

	UPROPERTY(EditDefaultsOnly, Category = Enemy)
	TSubclassOf<class AEnemy> enemyFactory;

	UPROPERTY(EditDefaultsOnly, Category = SniperUI)
	TSubclassOf<class UUserWidget> sniperUIFactory;

	UPROPERTY(EditAnywhere, Category = BulletEffect)
	class UParticleSystem* bulletEffectFactory;

	UPROPERTY(EditDefaultsOnly, Category = CrosshairUI)
	TSubclassOf<class UUserWidget> crosshairUIFactory;

	UPROPERTY(EditDefaultsOnly, Category = CameraShake)
	TSubclassOf<class UCameraShakeBase> cameraShake;

	UPROPERTY(EditDefaultsOnly, Category = Sound)
	class USoundBase* bulletSound;

public:
	// 스나이퍼 UI 위젯 인스턴스
	class UUserWidget* sniperUI;

	// 크로스헤어 UI 위젯 인스턴스
	class UUserWidget* crosshairUI;

#pragma region Input
protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta = (AllowPrivateAccess = "true"))
	class UInputMappingContext* tpsMappingContext;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* moveForwardAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* moveRightAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* turnPitchAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* turnYawAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* jumpAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* fireAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* grenadeGunAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* sniperGunAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* sniperZoominAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* runAction;
#pragma endregion
};
