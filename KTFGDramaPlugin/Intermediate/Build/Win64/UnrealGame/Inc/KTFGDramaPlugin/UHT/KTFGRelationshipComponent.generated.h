// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "KTFGComponents/KTFGRelationshipComponent.h"

#ifdef KTFGDRAMAPLUGIN_KTFGRelationshipComponent_generated_h
#error "KTFGRelationshipComponent.generated.h already included, missing '#pragma once' in KTFGRelationshipComponent.h"
#endif
#define KTFGDRAMAPLUGIN_KTFGRelationshipComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AKTFGRomanceCharacterBase;
class UButton;
class UKTFGRelationshipEventData;
class UKTFGRomanceTropeData;
class UKTFGSituationData;
enum class EKTFGStoryPhase : uint8;

// ********** Begin Delegate FOnPhaseChanged *******************************************************
#define FID_Users_Carla_Documents_K_TFG_DRAMA_KTFGDemo_Build_KTFGDramaPlugin_HostProject_Plugins_KTFGDramaPlugin_Source_KTFGDramaPlugin_Public_KTFGComponents_KTFGRelationshipComponent_h_49_DELEGATE \
KTFGDRAMAPLUGIN_API void FOnPhaseChanged_DelegateWrapper(const FMulticastScriptDelegate& OnPhaseChanged, EKTFGStoryPhase OldPhase, EKTFGStoryPhase NewPhase);


// ********** End Delegate FOnPhaseChanged *********************************************************

// ********** Begin Delegate FOnRelationshipEventFired *********************************************
#define FID_Users_Carla_Documents_K_TFG_DRAMA_KTFGDemo_Build_KTFGDramaPlugin_HostProject_Plugins_KTFGDramaPlugin_Source_KTFGDramaPlugin_Public_KTFGComponents_KTFGRelationshipComponent_h_57_DELEGATE \
KTFGDRAMAPLUGIN_API void FOnRelationshipEventFired_DelegateWrapper(const FMulticastScriptDelegate& OnRelationshipEventFired, UKTFGRelationshipEventData* EventData, AKTFGRomanceCharacterBase* FiredBy);


// ********** End Delegate FOnRelationshipEventFired ***********************************************

// ********** Begin Class UKTFGRelationshipComponent ***********************************************
#define FID_Users_Carla_Documents_K_TFG_DRAMA_KTFGDemo_Build_KTFGDramaPlugin_HostProject_Plugins_KTFGDramaPlugin_Source_KTFGDramaPlugin_Public_KTFGComponents_KTFGRelationshipComponent_h_65_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execResetFiredEvents); \
	DECLARE_FUNCTION(execHasEventFired); \
	DECLARE_FUNCTION(execCheckAndFireEvents); \
	DECLARE_FUNCTION(execTriggerSituation); \
	DECLARE_FUNCTION(execApplyTropeInitialValues); \
	DECLARE_FUNCTION(execSetRelatedCharacter); \
	DECLARE_FUNCTION(execSetRomanceProfile); \
	DECLARE_FUNCTION(execRecalculateRelationshipState);


KTFGDRAMAPLUGIN_API UClass* Z_Construct_UClass_UKTFGRelationshipComponent_NoRegister();

#define FID_Users_Carla_Documents_K_TFG_DRAMA_KTFGDemo_Build_KTFGDramaPlugin_HostProject_Plugins_KTFGDramaPlugin_Source_KTFGDramaPlugin_Public_KTFGComponents_KTFGRelationshipComponent_h_65_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKTFGRelationshipComponent(); \
	friend struct Z_Construct_UClass_UKTFGRelationshipComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend KTFGDRAMAPLUGIN_API UClass* Z_Construct_UClass_UKTFGRelationshipComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UKTFGRelationshipComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/KTFGDramaPlugin"), Z_Construct_UClass_UKTFGRelationshipComponent_NoRegister) \
	DECLARE_SERIALIZER(UKTFGRelationshipComponent)


#define FID_Users_Carla_Documents_K_TFG_DRAMA_KTFGDemo_Build_KTFGDramaPlugin_HostProject_Plugins_KTFGDramaPlugin_Source_KTFGDramaPlugin_Public_KTFGComponents_KTFGRelationshipComponent_h_65_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UKTFGRelationshipComponent(UKTFGRelationshipComponent&&) = delete; \
	UKTFGRelationshipComponent(const UKTFGRelationshipComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKTFGRelationshipComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKTFGRelationshipComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UKTFGRelationshipComponent) \
	NO_API virtual ~UKTFGRelationshipComponent();


#define FID_Users_Carla_Documents_K_TFG_DRAMA_KTFGDemo_Build_KTFGDramaPlugin_HostProject_Plugins_KTFGDramaPlugin_Source_KTFGDramaPlugin_Public_KTFGComponents_KTFGRelationshipComponent_h_62_PROLOG
#define FID_Users_Carla_Documents_K_TFG_DRAMA_KTFGDemo_Build_KTFGDramaPlugin_HostProject_Plugins_KTFGDramaPlugin_Source_KTFGDramaPlugin_Public_KTFGComponents_KTFGRelationshipComponent_h_65_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Carla_Documents_K_TFG_DRAMA_KTFGDemo_Build_KTFGDramaPlugin_HostProject_Plugins_KTFGDramaPlugin_Source_KTFGDramaPlugin_Public_KTFGComponents_KTFGRelationshipComponent_h_65_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Carla_Documents_K_TFG_DRAMA_KTFGDemo_Build_KTFGDramaPlugin_HostProject_Plugins_KTFGDramaPlugin_Source_KTFGDramaPlugin_Public_KTFGComponents_KTFGRelationshipComponent_h_65_INCLASS_NO_PURE_DECLS \
	FID_Users_Carla_Documents_K_TFG_DRAMA_KTFGDemo_Build_KTFGDramaPlugin_HostProject_Plugins_KTFGDramaPlugin_Source_KTFGDramaPlugin_Public_KTFGComponents_KTFGRelationshipComponent_h_65_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UKTFGRelationshipComponent;

// ********** End Class UKTFGRelationshipComponent *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Carla_Documents_K_TFG_DRAMA_KTFGDemo_Build_KTFGDramaPlugin_HostProject_Plugins_KTFGDramaPlugin_Source_KTFGDramaPlugin_Public_KTFGComponents_KTFGRelationshipComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
