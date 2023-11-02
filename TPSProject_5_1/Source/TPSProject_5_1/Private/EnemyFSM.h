// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "C:/Program Files/Unreal/UE_5.1/Engine/Plugins/EnhancedInput/Source/EnhancedInput/Public/InputActionValue.h"
#include "EnemyFSM.generated.h"


// ����� ���� ����
UENUM(BlueprintType)
enum class EEnemyState : uint8
{
	Idle,
	Move,
	Attack,
	Damage,
	Die,
};

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class UEnemyFSM : public UActorComponent
{
	GENERATED_BODY()

	class UEnemyAnim* anim;
public:	
	// Sets default values for this component's properties
	UEnemyFSM();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

public:
	// ������
	void IdleState();
	// �̵�����
	void MoveState();
	// ���ݻ���
	void AttackState();
	// �ǰݻ���
	void DamageState();
	// ��������
	void DieState();

public:
	// �ǰ� �̺�Ʈ ó�� �Լ�
	void OnDamageProcess();
public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=FSM)
	EEnemyState mState = EEnemyState::Idle;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = FSM)
	bool isDieAnimEnded = false;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = FSM)
	bool isAttack = false;
	// ��� ���� ���� ����
	// ���ð�
	UPROPERTY(EditDefaultsOnly, Category=FSM)
	float idleDelayTime = 2.0f;


	// �̵� ���� ���� ����
	// ���
	UPROPERTY(VisibleAnywhere, Category = FSM)
	class ATPSCharacter* target;

	// ���� ����
	class AEnemy* me;

	// ���� ���� ���� ����
	// ���� ����
	UPROPERTY(EditAnywhere, Category=FSM)
	float attackRange = 150.0f;

	// ���� ��� �ð�
	UPROPERTY(EditAnywhere, Category = FSM)
	float attackDelayTime = 2.0f;

	// �ǰ� ���� ���� ����
	// ü��
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category=FSM)
	int hp = 3;

	// �ǰ� ��� �ð�
	UPROPERTY(EditAnywhere, Category=FSM)
	float damageDelayTime = 2.0f;

	// ���� ���� ���� ����
	// �Ʒ��� �������� �ӵ�
	UPROPERTY(EditAnywhere, Category=FSM)
	float dieSpeed = 50.0f;

	// ����ð�
	float currentTime = 0.0f;

	UPROPERTY(EditAnywhere, Category = BodyMesh)
	class UMaterialInterface* normMat;

	UPROPERTY(EditAnywhere, Category = BodyMesh)
	class UMaterial* hitMat;

	UPROPERTY(VisibleAnywhere, Category = GunMesh)
	class UCapsuleComponent* attackCapsuleComp;

	UPROPERTY(EditDefaultsOnly, Category = CameraShake)
	TSubclassOf<class UCameraShakeBase> cameraShake;
};
