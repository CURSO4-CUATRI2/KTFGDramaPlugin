// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "KTFGCharacters/KTFGRomanceCharacterBase.h"

#ifdef KTFGDRAMAPLUGIN_KTFGRomanceCharacterBase_generated_h
#error "KTFGRomanceCharacterBase.generated.h already included, missing '#pragma once' in KTFGRomanceCharacterBase.h"
#endif
#define KTFGDRAMAPLUGIN_KTFGRomanceCharacterBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UKTFGEmotionComponent;

// ********** Begin Class AKTFGRomanceCharacterBase ************************************************
#define FID_Users_Carla_Documents_K_TFG_DRAMA_KTFGDemo_Build_KTFGDramaPlugin_HostProject_Plugins_KTFGDramaPlugin_Source_KTFGDramaPlugin_Public_KTFGCharacters_KTFGRomanceCharacterBase_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execApplyPersonalityBaseLineToEmotions); \
	DECLARE_FUNCTION(execGetEmotionComponent);


KTFGDRAMAPLUGIN_API UClass* Z_Construct_UClass_AKTFGRomanceCharacterBase_NoRegister();

#define FID_Users_Carla_Documents_K_TFG_DRAMA_KTFGDemo_Build_KTFGDramaPlugin_HostProject_Plugins_KTFGDramaPlugin_Source_KTFGDramaPlugin_Public_KTFGCharacters_KTFGRomanceCharacterBase_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAKTFGRomanceCharacterBase(); \
	friend struct Z_Construct_UClass_AKTFGRomanceCharacterBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend KTFGDRAMAPLUGIN_API UClass* Z_Construct_UClass_AKTFGRomanceCharacterBase_NoRegister(); \
public: \
	DECLARE_CLASS2(AKTFGRomanceCharacterBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/KTFGDramaPlugin"), Z_Construct_UClass_AKTFGRomanceCharacterBase_NoRegister) \
	DECLARE_SERIALIZER(AKTFGRomanceCharacterBase)


#define FID_Users_Carla_Documents_K_TFG_DRAMA_KTFGDemo_Build_KTFGDramaPlugin_HostProject_Plugins_KTFGDramaPlugin_Source_KTFGDramaPlugin_Public_KTFGCharacters_KTFGRomanceCharacterBase_h_46_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AKTFGRomanceCharacterBase(AKTFGRomanceCharacterBase&&) = delete; \
	AKTFGRomanceCharacterBase(const AKTFGRomanceCharacterBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKTFGRomanceCharacterBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKTFGRomanceCharacterBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AKTFGRomanceCharacterBase) \
	NO_API virtual ~AKTFGRomanceCharacterBase();


#define FID_Users_Carla_Documents_K_TFG_DRAMA_KTFGDemo_Build_KTFGDramaPlugin_HostProject_Plugins_KTFGDramaPlugin_Source_KTFGDramaPlugin_Public_KTFGCharacters_KTFGRomanceCharacterBase_h_43_PROLOG
#define FID_Users_Carla_Documents_K_TFG_DRAMA_KTFGDemo_Build_KTFGDramaPlugin_HostProject_Plugins_KTFGDramaPlugin_Source_KTFGDramaPlugin_Public_KTFGCharacters_KTFGRomanceCharacterBase_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Carla_Documents_K_TFG_DRAMA_KTFGDemo_Build_KTFGDramaPlugin_HostProject_Plugins_KTFGDramaPlugin_Source_KTFGDramaPlugin_Public_KTFGCharacters_KTFGRomanceCharacterBase_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Carla_Documents_K_TFG_DRAMA_KTFGDemo_Build_KTFGDramaPlugin_HostProject_Plugins_KTFGDramaPlugin_Source_KTFGDramaPlugin_Public_KTFGCharacters_KTFGRomanceCharacterBase_h_46_INCLASS_NO_PURE_DECLS \
	FID_Users_Carla_Documents_K_TFG_DRAMA_KTFGDemo_Build_KTFGDramaPlugin_HostProject_Plugins_KTFGDramaPlugin_Source_KTFGDramaPlugin_Public_KTFGCharacters_KTFGRomanceCharacterBase_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AKTFGRomanceCharacterBase;

// ********** End Class AKTFGRomanceCharacterBase **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Carla_Documents_K_TFG_DRAMA_KTFGDemo_Build_KTFGDramaPlugin_HostProject_Plugins_KTFGDramaPlugin_Source_KTFGDramaPlugin_Public_KTFGCharacters_KTFGRomanceCharacterBase_h

// ********** Begin Enum EKTFGRomanceGender ********************************************************
#define FOREACH_ENUM_EKTFGROMANCEGENDER(op) \
	op(EKTFGRomanceGender::Male) \
	op(EKTFGRomanceGender::Female) \
	op(EKTFGRomanceGender::Neutral) 

enum class EKTFGRomanceGender : uint8;
template<> struct TIsUEnumClass<EKTFGRomanceGender> { enum { Value = true }; };
template<> KTFGDRAMAPLUGIN_API UEnum* StaticEnum<EKTFGRomanceGender>();
// ********** End Enum EKTFGRomanceGender **********************************************************

// ********** Begin Enum EKTFGRomanceRole **********************************************************
#define FOREACH_ENUM_EKTFGROMANCEROLE(op) \
	op(EKTFGRomanceRole::MainLead) \
	op(EKTFGRomanceRole::SecondaryLead) 

enum class EKTFGRomanceRole : uint8;
template<> struct TIsUEnumClass<EKTFGRomanceRole> { enum { Value = true }; };
template<> KTFGDRAMAPLUGIN_API UEnum* StaticEnum<EKTFGRomanceRole>();
// ********** End Enum EKTFGRomanceRole ************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
