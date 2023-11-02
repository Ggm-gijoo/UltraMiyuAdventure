// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPSProject_5_1/Private/CharacterAnim.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterAnim() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	TPSPROJECT_5_1_API UClass* Z_Construct_UClass_UCharacterAnim();
	TPSPROJECT_5_1_API UClass* Z_Construct_UClass_UCharacterAnim_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TPSProject_5_1();
// End Cross Module References
	void UCharacterAnim::StaticRegisterNativesUCharacterAnim()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharacterAnim);
	UClass* Z_Construct_UClass_UCharacterAnim_NoRegister()
	{
		return UCharacterAnim::StaticClass();
	}
	struct Z_Construct_UClass_UCharacterAnim_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_direction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_direction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isInAir_MetaData[];
#endif
		static void NewProp_isInAir_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isInAir;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_attackAnimMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_attackAnimMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hitAnimMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_hitAnimMontage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCharacterAnim_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_TPSProject_5_1,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterAnim_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "CharacterAnim.h" },
		{ "ModuleRelativePath", "Private/CharacterAnim.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterAnim_Statics::NewProp_speed_MetaData[] = {
		{ "Category", "PlayerAnim" },
		{ "ModuleRelativePath", "Private/CharacterAnim.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterAnim_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCharacterAnim, speed), METADATA_PARAMS(Z_Construct_UClass_UCharacterAnim_Statics::NewProp_speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnim_Statics::NewProp_speed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterAnim_Statics::NewProp_direction_MetaData[] = {
		{ "Category", "PlayerAnim" },
		{ "ModuleRelativePath", "Private/CharacterAnim.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterAnim_Statics::NewProp_direction = { "direction", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCharacterAnim, direction), METADATA_PARAMS(Z_Construct_UClass_UCharacterAnim_Statics::NewProp_direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnim_Statics::NewProp_direction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterAnim_Statics::NewProp_isInAir_MetaData[] = {
		{ "Category", "PlayerAnim" },
		{ "ModuleRelativePath", "Private/CharacterAnim.h" },
	};
#endif
	void Z_Construct_UClass_UCharacterAnim_Statics::NewProp_isInAir_SetBit(void* Obj)
	{
		((UCharacterAnim*)Obj)->isInAir = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterAnim_Statics::NewProp_isInAir = { "isInAir", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCharacterAnim), &Z_Construct_UClass_UCharacterAnim_Statics::NewProp_isInAir_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCharacterAnim_Statics::NewProp_isInAir_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnim_Statics::NewProp_isInAir_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterAnim_Statics::NewProp_attackAnimMontage_MetaData[] = {
		{ "Category", "PlayerAnim" },
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xb4\xcf\xb8\xef\xbf\xbd\xef\xbf\xbd\xcc\xbc\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc5\xb8\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "Private/CharacterAnim.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xb4\xcf\xb8\xef\xbf\xbd\xef\xbf\xbd\xcc\xbc\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc5\xb8\xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterAnim_Statics::NewProp_attackAnimMontage = { "attackAnimMontage", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCharacterAnim, attackAnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterAnim_Statics::NewProp_attackAnimMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnim_Statics::NewProp_attackAnimMontage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterAnim_Statics::NewProp_hitAnimMontage_MetaData[] = {
		{ "Category", "PlayerAnim" },
		{ "ModuleRelativePath", "Private/CharacterAnim.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterAnim_Statics::NewProp_hitAnimMontage = { "hitAnimMontage", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCharacterAnim, hitAnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterAnim_Statics::NewProp_hitAnimMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnim_Statics::NewProp_hitAnimMontage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterAnim_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnim_Statics::NewProp_speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnim_Statics::NewProp_direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnim_Statics::NewProp_isInAir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnim_Statics::NewProp_attackAnimMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnim_Statics::NewProp_hitAnimMontage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCharacterAnim_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterAnim>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterAnim_Statics::ClassParams = {
		&UCharacterAnim::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCharacterAnim_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnim_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UCharacterAnim_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnim_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCharacterAnim()
	{
		if (!Z_Registration_Info_UClass_UCharacterAnim.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterAnim.OuterSingleton, Z_Construct_UClass_UCharacterAnim_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCharacterAnim.OuterSingleton;
	}
	template<> TPSPROJECT_5_1_API UClass* StaticClass<UCharacterAnim>()
	{
		return UCharacterAnim::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterAnim);
	UCharacterAnim::~UCharacterAnim() {}
	struct Z_CompiledInDeferFile_FID_Users_USER_Documents_Unreal_Projects_TPSProject_5_1_Source_TPSProject_5_1_Private_CharacterAnim_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_USER_Documents_Unreal_Projects_TPSProject_5_1_Source_TPSProject_5_1_Private_CharacterAnim_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterAnim, UCharacterAnim::StaticClass, TEXT("UCharacterAnim"), &Z_Registration_Info_UClass_UCharacterAnim, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterAnim), 2088536798U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_USER_Documents_Unreal_Projects_TPSProject_5_1_Source_TPSProject_5_1_Private_CharacterAnim_h_2062400580(TEXT("/Script/TPSProject_5_1"),
		Z_CompiledInDeferFile_FID_Users_USER_Documents_Unreal_Projects_TPSProject_5_1_Source_TPSProject_5_1_Private_CharacterAnim_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_USER_Documents_Unreal_Projects_TPSProject_5_1_Source_TPSProject_5_1_Private_CharacterAnim_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
