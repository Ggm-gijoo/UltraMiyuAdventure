// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TPSCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef TPSPROJECT_5_1_TPSCharacter_generated_h
#error "TPSCharacter.generated.h already included, missing '#pragma once' in TPSCharacter.h"
#endif
#define TPSPROJECT_5_1_TPSCharacter_generated_h

#define FID_Users_USER_Documents_Unreal_Projects_TPSProject_5_1_Source_TPSProject_5_1_Private_TPSCharacter_h_15_SPARSE_DATA
#define FID_Users_USER_Documents_Unreal_Projects_TPSProject_5_1_Source_TPSProject_5_1_Private_TPSCharacter_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnCapsuleOverlapEnd); \
	DECLARE_FUNCTION(execOnCapsuleOverlapBegin);


#define FID_Users_USER_Documents_Unreal_Projects_TPSProject_5_1_Source_TPSProject_5_1_Private_TPSCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnCapsuleOverlapEnd); \
	DECLARE_FUNCTION(execOnCapsuleOverlapBegin);


#define FID_Users_USER_Documents_Unreal_Projects_TPSProject_5_1_Source_TPSProject_5_1_Private_TPSCharacter_h_15_ACCESSORS
#define FID_Users_USER_Documents_Unreal_Projects_TPSProject_5_1_Source_TPSProject_5_1_Private_TPSCharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATPSCharacter(); \
	friend struct Z_Construct_UClass_ATPSCharacter_Statics; \
public: \
	DECLARE_CLASS(ATPSCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TPSProject_5_1"), NO_API) \
	DECLARE_SERIALIZER(ATPSCharacter)


#define FID_Users_USER_Documents_Unreal_Projects_TPSProject_5_1_Source_TPSProject_5_1_Private_TPSCharacter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesATPSCharacter(); \
	friend struct Z_Construct_UClass_ATPSCharacter_Statics; \
public: \
	DECLARE_CLASS(ATPSCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TPSProject_5_1"), NO_API) \
	DECLARE_SERIALIZER(ATPSCharacter)


#define FID_Users_USER_Documents_Unreal_Projects_TPSProject_5_1_Source_TPSProject_5_1_Private_TPSCharacter_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATPSCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATPSCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATPSCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATPSCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATPSCharacter(ATPSCharacter&&); \
	NO_API ATPSCharacter(const ATPSCharacter&); \
public: \
	NO_API virtual ~ATPSCharacter();


#define FID_Users_USER_Documents_Unreal_Projects_TPSProject_5_1_Source_TPSProject_5_1_Private_TPSCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATPSCharacter(ATPSCharacter&&); \
	NO_API ATPSCharacter(const ATPSCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATPSCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATPSCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATPSCharacter) \
	NO_API virtual ~ATPSCharacter();


#define FID_Users_USER_Documents_Unreal_Projects_TPSProject_5_1_Source_TPSProject_5_1_Private_TPSCharacter_h_12_PROLOG
#define FID_Users_USER_Documents_Unreal_Projects_TPSProject_5_1_Source_TPSProject_5_1_Private_TPSCharacter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_USER_Documents_Unreal_Projects_TPSProject_5_1_Source_TPSProject_5_1_Private_TPSCharacter_h_15_SPARSE_DATA \
	FID_Users_USER_Documents_Unreal_Projects_TPSProject_5_1_Source_TPSProject_5_1_Private_TPSCharacter_h_15_RPC_WRAPPERS \
	FID_Users_USER_Documents_Unreal_Projects_TPSProject_5_1_Source_TPSProject_5_1_Private_TPSCharacter_h_15_ACCESSORS \
	FID_Users_USER_Documents_Unreal_Projects_TPSProject_5_1_Source_TPSProject_5_1_Private_TPSCharacter_h_15_INCLASS \
	FID_Users_USER_Documents_Unreal_Projects_TPSProject_5_1_Source_TPSProject_5_1_Private_TPSCharacter_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_USER_Documents_Unreal_Projects_TPSProject_5_1_Source_TPSProject_5_1_Private_TPSCharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_USER_Documents_Unreal_Projects_TPSProject_5_1_Source_TPSProject_5_1_Private_TPSCharacter_h_15_SPARSE_DATA \
	FID_Users_USER_Documents_Unreal_Projects_TPSProject_5_1_Source_TPSProject_5_1_Private_TPSCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_USER_Documents_Unreal_Projects_TPSProject_5_1_Source_TPSProject_5_1_Private_TPSCharacter_h_15_ACCESSORS \
	FID_Users_USER_Documents_Unreal_Projects_TPSProject_5_1_Source_TPSProject_5_1_Private_TPSCharacter_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_USER_Documents_Unreal_Projects_TPSProject_5_1_Source_TPSProject_5_1_Private_TPSCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TPSPROJECT_5_1_API UClass* StaticClass<class ATPSCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_USER_Documents_Unreal_Projects_TPSProject_5_1_Source_TPSProject_5_1_Private_TPSCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
