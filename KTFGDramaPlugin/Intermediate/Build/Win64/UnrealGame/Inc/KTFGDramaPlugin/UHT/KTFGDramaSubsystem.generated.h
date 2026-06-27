// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "KTFGBase/KTFGDramaSubsystem.h"

#ifdef KTFGDRAMAPLUGIN_KTFGDramaSubsystem_generated_h
#error "KTFGDramaSubsystem.generated.h already included, missing '#pragma once' in KTFGDramaSubsystem.h"
#endif
#define KTFGDRAMAPLUGIN_KTFGDramaSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AKTFGRomanceCharacterBase;
class UKTFGRelationshipConfigData;
class UKTFGRomanceTropeData;
struct FKTFGActiveRelationship;

// ********** Begin ScriptStruct FKTFGActiveRelationship *******************************************
#define FID_Users_Carla_Documents_K_TFG_DRAMA_KTFGDemo_Build_KTFGDramaPlugin_HostProject_Plugins_KTFGDramaPlugin_Source_KTFGDramaPlugin_Public_KTFGBase_KTFGDramaSubsystem_h_33_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FKTFGActiveRelationship_Statics; \
	KTFGDRAMAPLUGIN_API static class UScriptStruct* StaticStruct();


struct FKTFGActiveRelationship;
// ********** End ScriptStruct FKTFGActiveRelationship *********************************************

// ********** Begin Class UKTFGDramaSubsystem ******************************************************
#define FID_Users_Carla_Documents_K_TFG_DRAMA_KTFGDemo_Build_KTFGDramaPlugin_HostProject_Plugins_KTFGDramaPlugin_Source_KTFGDramaPlugin_Public_KTFGBase_KTFGDramaSubsystem_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsConfigLoaded); \
	DECLARE_FUNCTION(execGetAllActiveRelationships); \
	DECLARE_FUNCTION(execGetRelationshipOf); \
	DECLARE_FUNCTION(execGetActiveTrope); \
	DECLARE_FUNCTION(execGetPartnerOf); \
	DECLARE_FUNCTION(execDissolveRelationship); \
	DECLARE_FUNCTION(execActivatePair); \
	DECLARE_FUNCTION(execRegisterPair); \
	DECLARE_FUNCTION(execLoadConfig);


KTFGDRAMAPLUGIN_API UClass* Z_Construct_UClass_UKTFGDramaSubsystem_NoRegister();

#define FID_Users_Carla_Documents_K_TFG_DRAMA_KTFGDemo_Build_KTFGDramaPlugin_HostProject_Plugins_KTFGDramaPlugin_Source_KTFGDramaPlugin_Public_KTFGBase_KTFGDramaSubsystem_h_54_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKTFGDramaSubsystem(); \
	friend struct Z_Construct_UClass_UKTFGDramaSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend KTFGDRAMAPLUGIN_API UClass* Z_Construct_UClass_UKTFGDramaSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UKTFGDramaSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/KTFGDramaPlugin"), Z_Construct_UClass_UKTFGDramaSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UKTFGDramaSubsystem)


#define FID_Users_Carla_Documents_K_TFG_DRAMA_KTFGDemo_Build_KTFGDramaPlugin_HostProject_Plugins_KTFGDramaPlugin_Source_KTFGDramaPlugin_Public_KTFGBase_KTFGDramaSubsystem_h_54_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKTFGDramaSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UKTFGDramaSubsystem(UKTFGDramaSubsystem&&) = delete; \
	UKTFGDramaSubsystem(const UKTFGDramaSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKTFGDramaSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKTFGDramaSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UKTFGDramaSubsystem) \
	NO_API virtual ~UKTFGDramaSubsystem();


#define FID_Users_Carla_Documents_K_TFG_DRAMA_KTFGDemo_Build_KTFGDramaPlugin_HostProject_Plugins_KTFGDramaPlugin_Source_KTFGDramaPlugin_Public_KTFGBase_KTFGDramaSubsystem_h_51_PROLOG
#define FID_Users_Carla_Documents_K_TFG_DRAMA_KTFGDemo_Build_KTFGDramaPlugin_HostProject_Plugins_KTFGDramaPlugin_Source_KTFGDramaPlugin_Public_KTFGBase_KTFGDramaSubsystem_h_54_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Carla_Documents_K_TFG_DRAMA_KTFGDemo_Build_KTFGDramaPlugin_HostProject_Plugins_KTFGDramaPlugin_Source_KTFGDramaPlugin_Public_KTFGBase_KTFGDramaSubsystem_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Carla_Documents_K_TFG_DRAMA_KTFGDemo_Build_KTFGDramaPlugin_HostProject_Plugins_KTFGDramaPlugin_Source_KTFGDramaPlugin_Public_KTFGBase_KTFGDramaSubsystem_h_54_INCLASS_NO_PURE_DECLS \
	FID_Users_Carla_Documents_K_TFG_DRAMA_KTFGDemo_Build_KTFGDramaPlugin_HostProject_Plugins_KTFGDramaPlugin_Source_KTFGDramaPlugin_Public_KTFGBase_KTFGDramaSubsystem_h_54_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UKTFGDramaSubsystem;

// ********** End Class UKTFGDramaSubsystem ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Carla_Documents_K_TFG_DRAMA_KTFGDemo_Build_KTFGDramaPlugin_HostProject_Plugins_KTFGDramaPlugin_Source_KTFGDramaPlugin_Public_KTFGBase_KTFGDramaSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
