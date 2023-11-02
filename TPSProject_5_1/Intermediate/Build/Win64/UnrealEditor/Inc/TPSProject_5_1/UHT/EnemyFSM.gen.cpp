// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPSProject_5_1/Private/EnemyFSM.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyFSM() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	TPSPROJECT_5_1_API UClass* Z_Construct_UClass_ATPSCharacter_NoRegister();
	TPSPROJECT_5_1_API UClass* Z_Construct_UClass_UEnemyFSM();
	TPSPROJECT_5_1_API UClass* Z_Construct_UClass_UEnemyFSM_NoRegister();
	TPSPROJECT_5_1_API UEnum* Z_Construct_UEnum_TPSProject_5_1_EEnemyState();
	UPackage* Z_Construct_UPackage__Script_TPSProject_5_1();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEnemyState;
	static UEnum* EEnemyState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEnemyState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEnemyState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TPSProject_5_1_EEnemyState, Z_Construct_UPackage__Script_TPSProject_5_1(), TEXT("EEnemyState"));
		}
		return Z_Registration_Info_UEnum_EEnemyState.OuterSingleton;
	}
	template<> TPSPROJECT_5_1_API UEnum* StaticEnum<EEnemyState>()
	{
		return EEnemyState_StaticEnum();
	}
	struct Z_Construct_UEnum_TPSProject_5_1_EEnemyState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TPSProject_5_1_EEnemyState_Statics::Enumerators[] = {
		{ "EEnemyState::Idle", (int64)EEnemyState::Idle },
		{ "EEnemyState::Move", (int64)EEnemyState::Move },
		{ "EEnemyState::Attack", (int64)EEnemyState::Attack },
		{ "EEnemyState::Damage", (int64)EEnemyState::Damage },
		{ "EEnemyState::Die", (int64)EEnemyState::Die },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TPSProject_5_1_EEnemyState_Statics::Enum_MetaDataParams[] = {
		{ "Attack.Name", "EEnemyState::Attack" },
		{ "BlueprintType", "true" },
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "Damage.Name", "EEnemyState::Damage" },
		{ "Die.Name", "EEnemyState::Die" },
		{ "Idle.Name", "EEnemyState::Idle" },
		{ "ModuleRelativePath", "Private/EnemyFSM.h" },
		{ "Move.Name", "EEnemyState::Move" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TPSProject_5_1_EEnemyState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TPSProject_5_1,
		nullptr,
		"EEnemyState",
		"EEnemyState",
		Z_Construct_UEnum_TPSProject_5_1_EEnemyState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TPSProject_5_1_EEnemyState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_TPSProject_5_1_EEnemyState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_TPSProject_5_1_EEnemyState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_TPSProject_5_1_EEnemyState()
	{
		if (!Z_Registration_Info_UEnum_EEnemyState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEnemyState.InnerSingleton, Z_Construct_UEnum_TPSProject_5_1_EEnemyState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEnemyState.InnerSingleton;
	}
	void UEnemyFSM::StaticRegisterNativesUEnemyFSM()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnemyFSM);
	UClass* Z_Construct_UClass_UEnemyFSM_NoRegister()
	{
		return UEnemyFSM::StaticClass();
	}
	struct Z_Construct_UClass_UEnemyFSM_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_mState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_mState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isDieAnimEnded_MetaData[];
#endif
		static void NewProp_isDieAnimEnded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isDieAnimEnded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isAttack_MetaData[];
#endif
		static void NewProp_isAttack_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isAttack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_idleDelayTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_idleDelayTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_target_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_target;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_attackRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_attackRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_attackDelayTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_attackDelayTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hp_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_hp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_damageDelayTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_damageDelayTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_dieSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_dieSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_normMat_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_normMat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hitMat_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_hitMat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_attackCapsuleComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_attackCapsuleComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cameraShake_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_cameraShake;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnemyFSM_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TPSProject_5_1,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyFSM_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "EnemyFSM.h" },
		{ "ModuleRelativePath", "Private/EnemyFSM.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEnemyFSM_Statics::NewProp_mState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyFSM_Statics::NewProp_mState_MetaData[] = {
		{ "Category", "FSM" },
		{ "ModuleRelativePath", "Private/EnemyFSM.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEnemyFSM_Statics::NewProp_mState = { "mState", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnemyFSM, mState), Z_Construct_UEnum_TPSProject_5_1_EEnemyState, METADATA_PARAMS(Z_Construct_UClass_UEnemyFSM_Statics::NewProp_mState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyFSM_Statics::NewProp_mState_MetaData)) }; // 841101264
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyFSM_Statics::NewProp_isDieAnimEnded_MetaData[] = {
		{ "Category", "FSM" },
		{ "ModuleRelativePath", "Private/EnemyFSM.h" },
	};
#endif
	void Z_Construct_UClass_UEnemyFSM_Statics::NewProp_isDieAnimEnded_SetBit(void* Obj)
	{
		((UEnemyFSM*)Obj)->isDieAnimEnded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnemyFSM_Statics::NewProp_isDieAnimEnded = { "isDieAnimEnded", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEnemyFSM), &Z_Construct_UClass_UEnemyFSM_Statics::NewProp_isDieAnimEnded_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEnemyFSM_Statics::NewProp_isDieAnimEnded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyFSM_Statics::NewProp_isDieAnimEnded_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyFSM_Statics::NewProp_isAttack_MetaData[] = {
		{ "Category", "FSM" },
		{ "ModuleRelativePath", "Private/EnemyFSM.h" },
	};
#endif
	void Z_Construct_UClass_UEnemyFSM_Statics::NewProp_isAttack_SetBit(void* Obj)
	{
		((UEnemyFSM*)Obj)->isAttack = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnemyFSM_Statics::NewProp_isAttack = { "isAttack", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEnemyFSM), &Z_Construct_UClass_UEnemyFSM_Statics::NewProp_isAttack_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEnemyFSM_Statics::NewProp_isAttack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyFSM_Statics::NewProp_isAttack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyFSM_Statics::NewProp_idleDelayTime_MetaData[] = {
		{ "Category", "FSM" },
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xb0\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "Private/EnemyFSM.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xb0\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemyFSM_Statics::NewProp_idleDelayTime = { "idleDelayTime", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnemyFSM, idleDelayTime), METADATA_PARAMS(Z_Construct_UClass_UEnemyFSM_Statics::NewProp_idleDelayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyFSM_Statics::NewProp_idleDelayTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyFSM_Statics::NewProp_target_MetaData[] = {
		{ "Category", "FSM" },
		{ "Comment", "// \xef\xbf\xbd\xcc\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "Private/EnemyFSM.h" },
		{ "ToolTip", "\xef\xbf\xbd\xcc\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemyFSM_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnemyFSM, target), Z_Construct_UClass_ATPSCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemyFSM_Statics::NewProp_target_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyFSM_Statics::NewProp_target_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyFSM_Statics::NewProp_attackRange_MetaData[] = {
		{ "Category", "FSM" },
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "Private/EnemyFSM.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemyFSM_Statics::NewProp_attackRange = { "attackRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnemyFSM, attackRange), METADATA_PARAMS(Z_Construct_UClass_UEnemyFSM_Statics::NewProp_attackRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyFSM_Statics::NewProp_attackRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyFSM_Statics::NewProp_attackDelayTime_MetaData[] = {
		{ "Category", "FSM" },
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc3\xb0\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "Private/EnemyFSM.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc3\xb0\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemyFSM_Statics::NewProp_attackDelayTime = { "attackDelayTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnemyFSM, attackDelayTime), METADATA_PARAMS(Z_Construct_UClass_UEnemyFSM_Statics::NewProp_attackDelayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyFSM_Statics::NewProp_attackDelayTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyFSM_Statics::NewProp_hp_MetaData[] = {
		{ "Category", "FSM" },
		{ "Comment", "// \xef\xbf\xbd\xc7\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n// \xc3\xbc\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "Private/EnemyFSM.h" },
		{ "ToolTip", "\xef\xbf\xbd\xc7\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n\xc3\xbc\xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UEnemyFSM_Statics::NewProp_hp = { "hp", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnemyFSM, hp), METADATA_PARAMS(Z_Construct_UClass_UEnemyFSM_Statics::NewProp_hp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyFSM_Statics::NewProp_hp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyFSM_Statics::NewProp_damageDelayTime_MetaData[] = {
		{ "Category", "FSM" },
		{ "Comment", "// \xef\xbf\xbd\xc7\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc3\xb0\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "Private/EnemyFSM.h" },
		{ "ToolTip", "\xef\xbf\xbd\xc7\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc3\xb0\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemyFSM_Statics::NewProp_damageDelayTime = { "damageDelayTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnemyFSM, damageDelayTime), METADATA_PARAMS(Z_Construct_UClass_UEnemyFSM_Statics::NewProp_damageDelayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyFSM_Statics::NewProp_damageDelayTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyFSM_Statics::NewProp_dieSpeed_MetaData[] = {
		{ "Category", "FSM" },
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n// \xef\xbf\xbd\xc6\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd3\xb5\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "Private/EnemyFSM.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n\xef\xbf\xbd\xc6\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd3\xb5\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemyFSM_Statics::NewProp_dieSpeed = { "dieSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnemyFSM, dieSpeed), METADATA_PARAMS(Z_Construct_UClass_UEnemyFSM_Statics::NewProp_dieSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyFSM_Statics::NewProp_dieSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyFSM_Statics::NewProp_normMat_MetaData[] = {
		{ "Category", "BodyMesh" },
		{ "ModuleRelativePath", "Private/EnemyFSM.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemyFSM_Statics::NewProp_normMat = { "normMat", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnemyFSM, normMat), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemyFSM_Statics::NewProp_normMat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyFSM_Statics::NewProp_normMat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyFSM_Statics::NewProp_hitMat_MetaData[] = {
		{ "Category", "BodyMesh" },
		{ "ModuleRelativePath", "Private/EnemyFSM.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemyFSM_Statics::NewProp_hitMat = { "hitMat", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnemyFSM, hitMat), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemyFSM_Statics::NewProp_hitMat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyFSM_Statics::NewProp_hitMat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyFSM_Statics::NewProp_attackCapsuleComp_MetaData[] = {
		{ "Category", "GunMesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/EnemyFSM.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemyFSM_Statics::NewProp_attackCapsuleComp = { "attackCapsuleComp", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnemyFSM, attackCapsuleComp), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemyFSM_Statics::NewProp_attackCapsuleComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyFSM_Statics::NewProp_attackCapsuleComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyFSM_Statics::NewProp_cameraShake_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "ModuleRelativePath", "Private/EnemyFSM.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEnemyFSM_Statics::NewProp_cameraShake = { "cameraShake", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnemyFSM, cameraShake), Z_Construct_UClass_UClass, Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemyFSM_Statics::NewProp_cameraShake_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyFSM_Statics::NewProp_cameraShake_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnemyFSM_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyFSM_Statics::NewProp_mState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyFSM_Statics::NewProp_mState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyFSM_Statics::NewProp_isDieAnimEnded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyFSM_Statics::NewProp_isAttack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyFSM_Statics::NewProp_idleDelayTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyFSM_Statics::NewProp_target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyFSM_Statics::NewProp_attackRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyFSM_Statics::NewProp_attackDelayTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyFSM_Statics::NewProp_hp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyFSM_Statics::NewProp_damageDelayTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyFSM_Statics::NewProp_dieSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyFSM_Statics::NewProp_normMat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyFSM_Statics::NewProp_hitMat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyFSM_Statics::NewProp_attackCapsuleComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyFSM_Statics::NewProp_cameraShake,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnemyFSM_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemyFSM>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnemyFSM_Statics::ClassParams = {
		&UEnemyFSM::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEnemyFSM_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyFSM_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UEnemyFSM_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyFSM_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnemyFSM()
	{
		if (!Z_Registration_Info_UClass_UEnemyFSM.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnemyFSM.OuterSingleton, Z_Construct_UClass_UEnemyFSM_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnemyFSM.OuterSingleton;
	}
	template<> TPSPROJECT_5_1_API UClass* StaticClass<UEnemyFSM>()
	{
		return UEnemyFSM::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyFSM);
	UEnemyFSM::~UEnemyFSM() {}
	struct Z_CompiledInDeferFile_FID_Users_USER_Documents_Unreal_Projects_TPSProject_5_1_Source_TPSProject_5_1_Private_EnemyFSM_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_USER_Documents_Unreal_Projects_TPSProject_5_1_Source_TPSProject_5_1_Private_EnemyFSM_h_Statics::EnumInfo[] = {
		{ EEnemyState_StaticEnum, TEXT("EEnemyState"), &Z_Registration_Info_UEnum_EEnemyState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 841101264U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_USER_Documents_Unreal_Projects_TPSProject_5_1_Source_TPSProject_5_1_Private_EnemyFSM_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnemyFSM, UEnemyFSM::StaticClass, TEXT("UEnemyFSM"), &Z_Registration_Info_UClass_UEnemyFSM, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnemyFSM), 881391957U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_USER_Documents_Unreal_Projects_TPSProject_5_1_Source_TPSProject_5_1_Private_EnemyFSM_h_2014307351(TEXT("/Script/TPSProject_5_1"),
		Z_CompiledInDeferFile_FID_Users_USER_Documents_Unreal_Projects_TPSProject_5_1_Source_TPSProject_5_1_Private_EnemyFSM_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_USER_Documents_Unreal_Projects_TPSProject_5_1_Source_TPSProject_5_1_Private_EnemyFSM_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_USER_Documents_Unreal_Projects_TPSProject_5_1_Source_TPSProject_5_1_Private_EnemyFSM_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_USER_Documents_Unreal_Projects_TPSProject_5_1_Source_TPSProject_5_1_Private_EnemyFSM_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
