// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "KTFGBase/KTFGBlueprintLibrary.h"

#ifdef KTFGDRAMAPLUGIN_KTFGBlueprintLibrary_generated_h
#error "KTFGBlueprintLibrary.generated.h already included, missing '#pragma once' in KTFGBlueprintLibrary.h"
#endif
#define KTFGDRAMAPLUGIN_KTFGBlueprintLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AKTFGRomanceCharacterBase;
class UKTFGDramaSubsystem;
class UKTFGRelationshipConfigData;
class UKTFGRomanceTropeData;
class UObject;

// ********** Begin Class UKTFGBlueprintLibrary ****************************************************
#define FID_Users_Carla_Documents_K_TFG_DRAMA_KTFGDemo_Build_KTFGDramaPlugin_HostProject_Plugins_KTFGDramaPlugin_Source_KTFGDramaPlugin_Public_KTFGBase_KTFGBlueprintLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetActiveTrope); \
	DECLARE_FUNCTION(execGetPartnerOf); \
	DECLARE_FUNCTION(execInitializeKTFG); \
	DECLARE_FUNCTION(execGetKTFGDramaSubsystem);


KTFGDRAMAPLUGIN_API UClass* Z_Construct_UClass_UKTFGBlueprintLibrary_NoRegister();

#define FID_Users_Carla_Documents_K_TFG_DRAMA_KTFGDemo_Build_KTFGDramaPlugin_HostProject_Plugins_KTFGDramaPlugin_Source_KTFGDramaPlugin_Public_KTFGBase_KTFGBlueprintLibrary_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKTFGBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UKTFGBlueprintLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend KTFGDRAMAPLUGIN_API UClass* Z_Construct_UClass_UKTFGBlueprintLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UKTFGBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/KTFGDramaPlugin"), Z_Construct_UClass_UKTFGBlueprintLibrary_NoRegister) \
	DECLARE_SERIALIZER(UKTFGBlueprintLibrary)


#define FID_Users_Carla_Documents_K_TFG_DRAMA_KTFGDemo_Build_KTFGDramaPlugin_HostProject_Plugins_KTFGDramaPlugin_Source_KTFGDramaPlugin_Public_KTFGBase_KTFGBlueprintLibrary_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKTFGBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UKTFGBlueprintLibrary(UKTFGBlueprintLibrary&&) = delete; \
	UKTFGBlueprintLibrary(const UKTFGBlueprintLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKTFGBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKTFGBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKTFGBlueprintLibrary) \
	NO_API virtual ~UKTFGBlueprintLibrary();


#define FID_Users_Carla_Documents_K_TFG_DRAMA_KTFGDemo_Build_KTFGDramaPlugin_HostProject_Plugins_KTFGDramaPlugin_Source_KTFGDramaPlugin_Public_KTFGBase_KTFGBlueprintLibrary_h_13_PROLOG
#define FID_Users_Carla_Documents_K_TFG_DRAMA_KTFGDemo_Build_KTFGDramaPlugin_HostProject_Plugins_KTFGDramaPlugin_Source_KTFGDramaPlugin_Public_KTFGBase_KTFGBlueprintLibrary_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Carla_Documents_K_TFG_DRAMA_KTFGDemo_Build_KTFGDramaPlugin_HostProject_Plugins_KTFGDramaPlugin_Source_KTFGDramaPlugin_Public_KTFGBase_KTFGBlueprintLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Carla_Documents_K_TFG_DRAMA_KTFGDemo_Build_KTFGDramaPlugin_HostProject_Plugins_KTFGDramaPlugin_Source_KTFGDramaPlugin_Public_KTFGBase_KTFGBlueprintLibrary_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_Carla_Documents_K_TFG_DRAMA_KTFGDemo_Build_KTFGDramaPlugin_HostProject_Plugins_KTFGDramaPlugin_Source_KTFGDramaPlugin_Public_KTFGBase_KTFGBlueprintLibrary_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UKTFGBlueprintLibrary;

// ********** End Class UKTFGBlueprintLibrary ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Carla_Documents_K_TFG_DRAMA_KTFGDemo_Build_KTFGDramaPlugin_HostProject_Plugins_KTFGDramaPlugin_Source_KTFGDramaPlugin_Public_KTFGBase_KTFGBlueprintLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
