// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPSProject_5_1/TPSProject_5_1GameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTPSProject_5_1GameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	TPSPROJECT_5_1_API UClass* Z_Construct_UClass_ATPSProject_5_1GameModeBase();
	TPSPROJECT_5_1_API UClass* Z_Construct_UClass_ATPSProject_5_1GameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TPSProject_5_1();
// End Cross Module References
	void ATPSProject_5_1GameModeBase::StaticRegisterNativesATPSProject_5_1GameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATPSProject_5_1GameModeBase);
	UClass* Z_Construct_UClass_ATPSProject_5_1GameModeBase_NoRegister()
	{
		return ATPSProject_5_1GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ATPSProject_5_1GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATPSProject_5_1GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TPSProject_5_1,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSProject_5_1GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TPSProject_5_1GameModeBase.h" },
		{ "ModuleRelativePath", "TPSProject_5_1GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATPSProject_5_1GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATPSProject_5_1GameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATPSProject_5_1GameModeBase_Statics::ClassParams = {
		&ATPSProject_5_1GameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATPSProject_5_1GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATPSProject_5_1GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATPSProject_5_1GameModeBase()
	{
		if (!Z_Registration_Info_UClass_ATPSProject_5_1GameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATPSProject_5_1GameModeBase.OuterSingleton, Z_Construct_UClass_ATPSProject_5_1GameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATPSProject_5_1GameModeBase.OuterSingleton;
	}
	template<> TPSPROJECT_5_1_API UClass* StaticClass<ATPSProject_5_1GameModeBase>()
	{
		return ATPSProject_5_1GameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATPSProject_5_1GameModeBase);
	ATPSProject_5_1GameModeBase::~ATPSProject_5_1GameModeBase() {}
	struct Z_CompiledInDeferFile_FID_Users_USER_Documents_Unreal_Projects_TPSProject_5_1_Source_TPSProject_5_1_TPSProject_5_1GameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_USER_Documents_Unreal_Projects_TPSProject_5_1_Source_TPSProject_5_1_TPSProject_5_1GameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATPSProject_5_1GameModeBase, ATPSProject_5_1GameModeBase::StaticClass, TEXT("ATPSProject_5_1GameModeBase"), &Z_Registration_Info_UClass_ATPSProject_5_1GameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATPSProject_5_1GameModeBase), 1241580156U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_USER_Documents_Unreal_Projects_TPSProject_5_1_Source_TPSProject_5_1_TPSProject_5_1GameModeBase_h_3036183850(TEXT("/Script/TPSProject_5_1"),
		Z_CompiledInDeferFile_FID_Users_USER_Documents_Unreal_Projects_TPSProject_5_1_Source_TPSProject_5_1_TPSProject_5_1GameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_USER_Documents_Unreal_Projects_TPSProject_5_1_Source_TPSProject_5_1_TPSProject_5_1GameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
