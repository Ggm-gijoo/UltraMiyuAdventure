// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPSProject_5_1/Private/TPSCharacter.h"
#include "Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTPSCharacter() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	TPSPROJECT_5_1_API UClass* Z_Construct_UClass_ABullet_NoRegister();
	TPSPROJECT_5_1_API UClass* Z_Construct_UClass_AEnemy_NoRegister();
	TPSPROJECT_5_1_API UClass* Z_Construct_UClass_ATPSCharacter();
	TPSPROJECT_5_1_API UClass* Z_Construct_UClass_ATPSCharacter_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TPSProject_5_1();
// End Cross Module References
	DEFINE_FUNCTION(ATPSCharacter::execOnCapsuleOverlapEnd)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCapsuleOverlapEnd(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATPSCharacter::execOnCapsuleOverlapBegin)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_overlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCapsuleOverlapBegin(Z_Param_overlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void ATPSCharacter::StaticRegisterNativesATPSCharacter()
	{
		UClass* Class = ATPSCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCapsuleOverlapBegin", &ATPSCharacter::execOnCapsuleOverlapBegin },
			{ "OnCapsuleOverlapEnd", &ATPSCharacter::execOnCapsuleOverlapEnd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATPSCharacter_OnCapsuleOverlapBegin_Statics
	{
		struct TPSCharacter_eventOnCapsuleOverlapBegin_Parms
		{
			UPrimitiveComponent* overlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_overlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_overlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATPSCharacter_OnCapsuleOverlapBegin_Statics::NewProp_overlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATPSCharacter_OnCapsuleOverlapBegin_Statics::NewProp_overlappedComponent = { "overlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TPSCharacter_eventOnCapsuleOverlapBegin_Parms, overlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATPSCharacter_OnCapsuleOverlapBegin_Statics::NewProp_overlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATPSCharacter_OnCapsuleOverlapBegin_Statics::NewProp_overlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATPSCharacter_OnCapsuleOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TPSCharacter_eventOnCapsuleOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATPSCharacter_OnCapsuleOverlapBegin_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATPSCharacter_OnCapsuleOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TPSCharacter_eventOnCapsuleOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATPSCharacter_OnCapsuleOverlapBegin_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATPSCharacter_OnCapsuleOverlapBegin_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATPSCharacter_OnCapsuleOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TPSCharacter_eventOnCapsuleOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ATPSCharacter_OnCapsuleOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((TPSCharacter_eventOnCapsuleOverlapBegin_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATPSCharacter_OnCapsuleOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TPSCharacter_eventOnCapsuleOverlapBegin_Parms), &Z_Construct_UFunction_ATPSCharacter_OnCapsuleOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATPSCharacter_OnCapsuleOverlapBegin_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATPSCharacter_OnCapsuleOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TPSCharacter_eventOnCapsuleOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ATPSCharacter_OnCapsuleOverlapBegin_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATPSCharacter_OnCapsuleOverlapBegin_Statics::NewProp_SweepResult_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATPSCharacter_OnCapsuleOverlapBegin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATPSCharacter_OnCapsuleOverlapBegin_Statics::NewProp_overlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATPSCharacter_OnCapsuleOverlapBegin_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATPSCharacter_OnCapsuleOverlapBegin_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATPSCharacter_OnCapsuleOverlapBegin_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATPSCharacter_OnCapsuleOverlapBegin_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATPSCharacter_OnCapsuleOverlapBegin_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATPSCharacter_OnCapsuleOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/TPSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATPSCharacter_OnCapsuleOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATPSCharacter, nullptr, "OnCapsuleOverlapBegin", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATPSCharacter_OnCapsuleOverlapBegin_Statics::TPSCharacter_eventOnCapsuleOverlapBegin_Parms), Z_Construct_UFunction_ATPSCharacter_OnCapsuleOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATPSCharacter_OnCapsuleOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATPSCharacter_OnCapsuleOverlapBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATPSCharacter_OnCapsuleOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATPSCharacter_OnCapsuleOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATPSCharacter_OnCapsuleOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATPSCharacter_OnCapsuleOverlapEnd_Statics
	{
		struct TPSCharacter_eventOnCapsuleOverlapEnd_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATPSCharacter_OnCapsuleOverlapEnd_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATPSCharacter_OnCapsuleOverlapEnd_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TPSCharacter_eventOnCapsuleOverlapEnd_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATPSCharacter_OnCapsuleOverlapEnd_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATPSCharacter_OnCapsuleOverlapEnd_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATPSCharacter_OnCapsuleOverlapEnd_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TPSCharacter_eventOnCapsuleOverlapEnd_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATPSCharacter_OnCapsuleOverlapEnd_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATPSCharacter_OnCapsuleOverlapEnd_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TPSCharacter_eventOnCapsuleOverlapEnd_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATPSCharacter_OnCapsuleOverlapEnd_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATPSCharacter_OnCapsuleOverlapEnd_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATPSCharacter_OnCapsuleOverlapEnd_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TPSCharacter_eventOnCapsuleOverlapEnd_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATPSCharacter_OnCapsuleOverlapEnd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATPSCharacter_OnCapsuleOverlapEnd_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATPSCharacter_OnCapsuleOverlapEnd_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATPSCharacter_OnCapsuleOverlapEnd_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATPSCharacter_OnCapsuleOverlapEnd_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATPSCharacter_OnCapsuleOverlapEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/TPSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATPSCharacter_OnCapsuleOverlapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATPSCharacter, nullptr, "OnCapsuleOverlapEnd", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATPSCharacter_OnCapsuleOverlapEnd_Statics::TPSCharacter_eventOnCapsuleOverlapEnd_Parms), Z_Construct_UFunction_ATPSCharacter_OnCapsuleOverlapEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATPSCharacter_OnCapsuleOverlapEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATPSCharacter_OnCapsuleOverlapEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATPSCharacter_OnCapsuleOverlapEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATPSCharacter_OnCapsuleOverlapEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATPSCharacter_OnCapsuleOverlapEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATPSCharacter);
	UClass* Z_Construct_UClass_ATPSCharacter_NoRegister()
	{
		return ATPSCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ATPSCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isAttack_MetaData[];
#endif
		static void NewProp_isAttack_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isAttack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isCanAttack_MetaData[];
#endif
		static void NewProp_isCanAttack_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isCanAttack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hp_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_hp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_stamina_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_stamina;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_score_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_score;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_springArmComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_springArmComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_tpsCamComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_tpsCamComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_gunMeshComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_gunMeshComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sniperGunComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_sniperGunComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_swordCapsuleComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_swordCapsuleComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_dashMat_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_dashMat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_normMat_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_normMat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_dashEffect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_dashEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bulletFactory_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_bulletFactory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_enemyFactory_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_enemyFactory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sniperUIFactory_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_sniperUIFactory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bulletEffectFactory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_bulletEffectFactory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_crosshairUIFactory_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_crosshairUIFactory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cameraShake_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_cameraShake;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bulletSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_bulletSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_tpsMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_tpsMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_moveForwardAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_moveForwardAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_moveRightAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_moveRightAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_turnPitchAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_turnPitchAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_turnYawAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_turnYawAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_jumpAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_jumpAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fireAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_fireAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_grenadeGunAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_grenadeGunAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sniperGunAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_sniperGunAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sniperZoominAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_sniperZoominAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_runAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_runAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATPSCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_TPSProject_5_1,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATPSCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATPSCharacter_OnCapsuleOverlapBegin, "OnCapsuleOverlapBegin" }, // 2594255006
		{ &Z_Construct_UFunction_ATPSCharacter_OnCapsuleOverlapEnd, "OnCapsuleOverlapEnd" }, // 3664409737
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TPSCharacter.h" },
		{ "ModuleRelativePath", "Private/TPSCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSCharacter_Statics::NewProp_isAttack_MetaData[] = {
		{ "Category", "FSM" },
		{ "ModuleRelativePath", "Private/TPSCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ATPSCharacter_Statics::NewProp_isAttack_SetBit(void* Obj)
	{
		((ATPSCharacter*)Obj)->isAttack = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATPSCharacter_Statics::NewProp_isAttack = { "isAttack", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ATPSCharacter), &Z_Construct_UClass_ATPSCharacter_Statics::NewProp_isAttack_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_isAttack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_isAttack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSCharacter_Statics::NewProp_isCanAttack_MetaData[] = {
		{ "Category", "FSM" },
		{ "ModuleRelativePath", "Private/TPSCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ATPSCharacter_Statics::NewProp_isCanAttack_SetBit(void* Obj)
	{
		((ATPSCharacter*)Obj)->isCanAttack = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATPSCharacter_Statics::NewProp_isCanAttack = { "isCanAttack", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ATPSCharacter), &Z_Construct_UClass_ATPSCharacter_Statics::NewProp_isCanAttack_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_isCanAttack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_isCanAttack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSCharacter_Statics::NewProp_hp_MetaData[] = {
		{ "Category", "FSM" },
		{ "ModuleRelativePath", "Private/TPSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ATPSCharacter_Statics::NewProp_hp = { "hp", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATPSCharacter, hp), METADATA_PARAMS(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_hp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_hp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSCharacter_Statics::NewProp_stamina_MetaData[] = {
		{ "Category", "FSM" },
		{ "ModuleRelativePath", "Private/TPSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATPSCharacter_Statics::NewProp_stamina = { "stamina", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATPSCharacter, stamina), METADATA_PARAMS(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_stamina_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_stamina_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSCharacter_Statics::NewProp_score_MetaData[] = {
		{ "Category", "FSM" },
		{ "ModuleRelativePath", "Private/TPSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ATPSCharacter_Statics::NewProp_score = { "score", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATPSCharacter, score), METADATA_PARAMS(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_score_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_score_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSCharacter_Statics::NewProp_springArmComp_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/TPSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATPSCharacter_Statics::NewProp_springArmComp = { "springArmComp", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATPSCharacter, springArmComp), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_springArmComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_springArmComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSCharacter_Statics::NewProp_tpsCamComp_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/TPSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATPSCharacter_Statics::NewProp_tpsCamComp = { "tpsCamComp", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATPSCharacter, tpsCamComp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_tpsCamComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_tpsCamComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSCharacter_Statics::NewProp_gunMeshComp_MetaData[] = {
		{ "Category", "GunMesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/TPSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATPSCharacter_Statics::NewProp_gunMeshComp = { "gunMeshComp", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATPSCharacter, gunMeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_gunMeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_gunMeshComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSCharacter_Statics::NewProp_sniperGunComp_MetaData[] = {
		{ "Category", "GunMesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/TPSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATPSCharacter_Statics::NewProp_sniperGunComp = { "sniperGunComp", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATPSCharacter, sniperGunComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_sniperGunComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_sniperGunComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSCharacter_Statics::NewProp_swordCapsuleComp_MetaData[] = {
		{ "Category", "GunMesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/TPSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATPSCharacter_Statics::NewProp_swordCapsuleComp = { "swordCapsuleComp", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATPSCharacter, swordCapsuleComp), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_swordCapsuleComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_swordCapsuleComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSCharacter_Statics::NewProp_dashMat_MetaData[] = {
		{ "Category", "BodyMesh" },
		{ "ModuleRelativePath", "Private/TPSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATPSCharacter_Statics::NewProp_dashMat = { "dashMat", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATPSCharacter, dashMat), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_dashMat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_dashMat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSCharacter_Statics::NewProp_normMat_MetaData[] = {
		{ "Category", "BodyMesh" },
		{ "ModuleRelativePath", "Private/TPSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATPSCharacter_Statics::NewProp_normMat = { "normMat", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(normMat, ATPSCharacter), nullptr, nullptr, STRUCT_OFFSET(ATPSCharacter, normMat), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_normMat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_normMat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSCharacter_Statics::NewProp_dashEffect_MetaData[] = {
		{ "Category", "Effect" },
		{ "ModuleRelativePath", "Private/TPSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ATPSCharacter_Statics::NewProp_dashEffect = { "dashEffect", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATPSCharacter, dashEffect), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_dashEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_dashEffect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSCharacter_Statics::NewProp_bulletFactory_MetaData[] = {
		{ "Category", "BulletFactory" },
		{ "ModuleRelativePath", "Private/TPSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATPSCharacter_Statics::NewProp_bulletFactory = { "bulletFactory", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATPSCharacter, bulletFactory), Z_Construct_UClass_UClass, Z_Construct_UClass_ABullet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_bulletFactory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_bulletFactory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSCharacter_Statics::NewProp_enemyFactory_MetaData[] = {
		{ "Category", "Enemy" },
		{ "ModuleRelativePath", "Private/TPSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATPSCharacter_Statics::NewProp_enemyFactory = { "enemyFactory", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATPSCharacter, enemyFactory), Z_Construct_UClass_UClass, Z_Construct_UClass_AEnemy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_enemyFactory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_enemyFactory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSCharacter_Statics::NewProp_sniperUIFactory_MetaData[] = {
		{ "Category", "SniperUI" },
		{ "ModuleRelativePath", "Private/TPSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATPSCharacter_Statics::NewProp_sniperUIFactory = { "sniperUIFactory", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATPSCharacter, sniperUIFactory), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_sniperUIFactory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_sniperUIFactory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSCharacter_Statics::NewProp_bulletEffectFactory_MetaData[] = {
		{ "Category", "BulletEffect" },
		{ "ModuleRelativePath", "Private/TPSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATPSCharacter_Statics::NewProp_bulletEffectFactory = { "bulletEffectFactory", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATPSCharacter, bulletEffectFactory), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_bulletEffectFactory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_bulletEffectFactory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSCharacter_Statics::NewProp_crosshairUIFactory_MetaData[] = {
		{ "Category", "CrosshairUI" },
		{ "ModuleRelativePath", "Private/TPSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATPSCharacter_Statics::NewProp_crosshairUIFactory = { "crosshairUIFactory", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATPSCharacter, crosshairUIFactory), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_crosshairUIFactory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_crosshairUIFactory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSCharacter_Statics::NewProp_cameraShake_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "ModuleRelativePath", "Private/TPSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATPSCharacter_Statics::NewProp_cameraShake = { "cameraShake", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATPSCharacter, cameraShake), Z_Construct_UClass_UClass, Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_cameraShake_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_cameraShake_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSCharacter_Statics::NewProp_bulletSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Private/TPSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATPSCharacter_Statics::NewProp_bulletSound = { "bulletSound", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATPSCharacter, bulletSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_bulletSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_bulletSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSCharacter_Statics::NewProp_tpsMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Private/TPSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATPSCharacter_Statics::NewProp_tpsMappingContext = { "tpsMappingContext", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATPSCharacter, tpsMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_tpsMappingContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_tpsMappingContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSCharacter_Statics::NewProp_moveForwardAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Private/TPSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATPSCharacter_Statics::NewProp_moveForwardAction = { "moveForwardAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATPSCharacter, moveForwardAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_moveForwardAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_moveForwardAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSCharacter_Statics::NewProp_moveRightAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Private/TPSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATPSCharacter_Statics::NewProp_moveRightAction = { "moveRightAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATPSCharacter, moveRightAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_moveRightAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_moveRightAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSCharacter_Statics::NewProp_turnPitchAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Private/TPSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATPSCharacter_Statics::NewProp_turnPitchAction = { "turnPitchAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATPSCharacter, turnPitchAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_turnPitchAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_turnPitchAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSCharacter_Statics::NewProp_turnYawAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Private/TPSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATPSCharacter_Statics::NewProp_turnYawAction = { "turnYawAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATPSCharacter, turnYawAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_turnYawAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_turnYawAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSCharacter_Statics::NewProp_jumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Private/TPSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATPSCharacter_Statics::NewProp_jumpAction = { "jumpAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATPSCharacter, jumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_jumpAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_jumpAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSCharacter_Statics::NewProp_fireAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Private/TPSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATPSCharacter_Statics::NewProp_fireAction = { "fireAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATPSCharacter, fireAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_fireAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_fireAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSCharacter_Statics::NewProp_grenadeGunAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Private/TPSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATPSCharacter_Statics::NewProp_grenadeGunAction = { "grenadeGunAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATPSCharacter, grenadeGunAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_grenadeGunAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_grenadeGunAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSCharacter_Statics::NewProp_sniperGunAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Private/TPSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATPSCharacter_Statics::NewProp_sniperGunAction = { "sniperGunAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATPSCharacter, sniperGunAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_sniperGunAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_sniperGunAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSCharacter_Statics::NewProp_sniperZoominAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Private/TPSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATPSCharacter_Statics::NewProp_sniperZoominAction = { "sniperZoominAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATPSCharacter, sniperZoominAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_sniperZoominAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_sniperZoominAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSCharacter_Statics::NewProp_runAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Private/TPSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATPSCharacter_Statics::NewProp_runAction = { "runAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATPSCharacter, runAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_runAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATPSCharacter_Statics::NewProp_runAction_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATPSCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSCharacter_Statics::NewProp_isAttack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSCharacter_Statics::NewProp_isCanAttack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSCharacter_Statics::NewProp_hp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSCharacter_Statics::NewProp_stamina,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSCharacter_Statics::NewProp_score,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSCharacter_Statics::NewProp_springArmComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSCharacter_Statics::NewProp_tpsCamComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSCharacter_Statics::NewProp_gunMeshComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSCharacter_Statics::NewProp_sniperGunComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSCharacter_Statics::NewProp_swordCapsuleComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSCharacter_Statics::NewProp_dashMat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSCharacter_Statics::NewProp_normMat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSCharacter_Statics::NewProp_dashEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSCharacter_Statics::NewProp_bulletFactory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSCharacter_Statics::NewProp_enemyFactory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSCharacter_Statics::NewProp_sniperUIFactory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSCharacter_Statics::NewProp_bulletEffectFactory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSCharacter_Statics::NewProp_crosshairUIFactory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSCharacter_Statics::NewProp_cameraShake,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSCharacter_Statics::NewProp_bulletSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSCharacter_Statics::NewProp_tpsMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSCharacter_Statics::NewProp_moveForwardAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSCharacter_Statics::NewProp_moveRightAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSCharacter_Statics::NewProp_turnPitchAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSCharacter_Statics::NewProp_turnYawAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSCharacter_Statics::NewProp_jumpAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSCharacter_Statics::NewProp_fireAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSCharacter_Statics::NewProp_grenadeGunAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSCharacter_Statics::NewProp_sniperGunAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSCharacter_Statics::NewProp_sniperZoominAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSCharacter_Statics::NewProp_runAction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATPSCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATPSCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATPSCharacter_Statics::ClassParams = {
		&ATPSCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATPSCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATPSCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATPSCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATPSCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATPSCharacter()
	{
		if (!Z_Registration_Info_UClass_ATPSCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATPSCharacter.OuterSingleton, Z_Construct_UClass_ATPSCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATPSCharacter.OuterSingleton;
	}
	template<> TPSPROJECT_5_1_API UClass* StaticClass<ATPSCharacter>()
	{
		return ATPSCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATPSCharacter);
	ATPSCharacter::~ATPSCharacter() {}
	struct Z_CompiledInDeferFile_FID_Users_USER_Documents_Unreal_Projects_TPSProject_5_1_Source_TPSProject_5_1_Private_TPSCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_USER_Documents_Unreal_Projects_TPSProject_5_1_Source_TPSProject_5_1_Private_TPSCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATPSCharacter, ATPSCharacter::StaticClass, TEXT("ATPSCharacter"), &Z_Registration_Info_UClass_ATPSCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATPSCharacter), 3087561909U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_USER_Documents_Unreal_Projects_TPSProject_5_1_Source_TPSProject_5_1_Private_TPSCharacter_h_937294621(TEXT("/Script/TPSProject_5_1"),
		Z_CompiledInDeferFile_FID_Users_USER_Documents_Unreal_Projects_TPSProject_5_1_Source_TPSProject_5_1_Private_TPSCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_USER_Documents_Unreal_Projects_TPSProject_5_1_Source_TPSProject_5_1_Private_TPSCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
