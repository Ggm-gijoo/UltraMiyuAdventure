// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "CharacterAnim.generated.h"

/**
 * 
 */
UCLASS()
class UCharacterAnim : public UAnimInstance
{
	GENERATED_BODY()
	
public:
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

public:
	// 공격 애니메이션 몽타주 재생 함수
	void PlayAttackAnim();
	void PlayHitAnim();

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category=PlayerAnim)
	float speed = 0;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = PlayerAnim)
	float direction = 0;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = PlayerAnim)
	bool isInAir = false;

	// 재생할 공격 애니메이션 몽타주
	UPROPERTY(EditDefaultsOnly, Category=PlayerAnim)
	class UAnimMontage* attackAnimMontage;
	UPROPERTY(EditDefaultsOnly, Category = PlayerAnim)
	class UAnimMontage* hitAnimMontage;
};
