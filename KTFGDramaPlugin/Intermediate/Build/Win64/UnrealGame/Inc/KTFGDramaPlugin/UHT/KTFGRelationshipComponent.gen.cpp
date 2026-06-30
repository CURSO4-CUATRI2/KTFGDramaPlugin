// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KTFGComponents/KTFGRelationshipComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeKTFGRelationshipComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
KTFGDRAMAPLUGIN_API UClass* Z_Construct_UClass_AKTFGRomanceCharacterBase_NoRegister();
KTFGDRAMAPLUGIN_API UClass* Z_Construct_UClass_UKTFGRelationshipComponent();
KTFGDRAMAPLUGIN_API UClass* Z_Construct_UClass_UKTFGRelationshipComponent_NoRegister();
KTFGDRAMAPLUGIN_API UClass* Z_Construct_UClass_UKTFGRelationshipEventData_NoRegister();
KTFGDRAMAPLUGIN_API UClass* Z_Construct_UClass_UKTFGRomanceTropeData_NoRegister();
KTFGDRAMAPLUGIN_API UClass* Z_Construct_UClass_UKTFGSituationData_NoRegister();
KTFGDRAMAPLUGIN_API UEnum* Z_Construct_UEnum_KTFGDramaPlugin_EKTFGStoryPhase();
KTFGDRAMAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_KTFGDramaPlugin_OnPhaseChanged__DelegateSignature();
KTFGDRAMAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_KTFGDramaPlugin_OnRelationshipEventFired__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_KTFGDramaPlugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnPhaseChanged *******************************************************
struct Z_Construct_UDelegateFunction_KTFGDramaPlugin_OnPhaseChanged__DelegateSignature_Statics
{
	struct _Script_KTFGDramaPlugin_eventOnPhaseChanged_Parms
	{
		EKTFGStoryPhase OldPhase;
		EKTFGStoryPhase NewPhase;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Notifica a Blueprint cuando la relaci\xc3\xb3n avanza a una nueva fase narrativa. */" },
		{ "ModuleRelativePath", "Public/KTFGComponents/KTFGRelationshipComponent.h" },
		{ "ToolTip", "Notifica a Blueprint cuando la relaci\xc3\xb3n avanza a una nueva fase narrativa." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_OldPhase_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OldPhase;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewPhase_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewPhase;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_KTFGDramaPlugin_OnPhaseChanged__DelegateSignature_Statics::NewProp_OldPhase_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_KTFGDramaPlugin_OnPhaseChanged__DelegateSignature_Statics::NewProp_OldPhase = { "OldPhase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_KTFGDramaPlugin_eventOnPhaseChanged_Parms, OldPhase), Z_Construct_UEnum_KTFGDramaPlugin_EKTFGStoryPhase, METADATA_PARAMS(0, nullptr) }; // 3704888470
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_KTFGDramaPlugin_OnPhaseChanged__DelegateSignature_Statics::NewProp_NewPhase_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_KTFGDramaPlugin_OnPhaseChanged__DelegateSignature_Statics::NewProp_NewPhase = { "NewPhase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_KTFGDramaPlugin_eventOnPhaseChanged_Parms, NewPhase), Z_Construct_UEnum_KTFGDramaPlugin_EKTFGStoryPhase, METADATA_PARAMS(0, nullptr) }; // 3704888470
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_KTFGDramaPlugin_OnPhaseChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_KTFGDramaPlugin_OnPhaseChanged__DelegateSignature_Statics::NewProp_OldPhase_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_KTFGDramaPlugin_OnPhaseChanged__DelegateSignature_Statics::NewProp_OldPhase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_KTFGDramaPlugin_OnPhaseChanged__DelegateSignature_Statics::NewProp_NewPhase_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_KTFGDramaPlugin_OnPhaseChanged__DelegateSignature_Statics::NewProp_NewPhase,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_KTFGDramaPlugin_OnPhaseChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_KTFGDramaPlugin_OnPhaseChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_KTFGDramaPlugin, nullptr, "OnPhaseChanged__DelegateSignature", Z_Construct_UDelegateFunction_KTFGDramaPlugin_OnPhaseChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_KTFGDramaPlugin_OnPhaseChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_KTFGDramaPlugin_OnPhaseChanged__DelegateSignature_Statics::_Script_KTFGDramaPlugin_eventOnPhaseChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_KTFGDramaPlugin_OnPhaseChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_KTFGDramaPlugin_OnPhaseChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_KTFGDramaPlugin_OnPhaseChanged__DelegateSignature_Statics::_Script_KTFGDramaPlugin_eventOnPhaseChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_KTFGDramaPlugin_OnPhaseChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_KTFGDramaPlugin_OnPhaseChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPhaseChanged_DelegateWrapper(const FMulticastScriptDelegate& OnPhaseChanged, EKTFGStoryPhase OldPhase, EKTFGStoryPhase NewPhase)
{
	struct _Script_KTFGDramaPlugin_eventOnPhaseChanged_Parms
	{
		EKTFGStoryPhase OldPhase;
		EKTFGStoryPhase NewPhase;
	};
	_Script_KTFGDramaPlugin_eventOnPhaseChanged_Parms Parms;
	Parms.OldPhase=OldPhase;
	Parms.NewPhase=NewPhase;
	OnPhaseChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnPhaseChanged *********************************************************

// ********** Begin Delegate FOnRelationshipEventFired *********************************************
struct Z_Construct_UDelegateFunction_KTFGDramaPlugin_OnRelationshipEventFired__DelegateSignature_Statics
{
	struct _Script_KTFGDramaPlugin_eventOnRelationshipEventFired_Parms
	{
		UKTFGRelationshipEventData* EventData;
		AKTFGRomanceCharacterBase* FiredBy;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Notifica a Blueprint cuando un evento relacional supera sus condiciones. */" },
		{ "ModuleRelativePath", "Public/KTFGComponents/KTFGRelationshipComponent.h" },
		{ "ToolTip", "Notifica a Blueprint cuando un evento relacional supera sus condiciones." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EventData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FiredBy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_KTFGDramaPlugin_OnRelationshipEventFired__DelegateSignature_Statics::NewProp_EventData = { "EventData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_KTFGDramaPlugin_eventOnRelationshipEventFired_Parms, EventData), Z_Construct_UClass_UKTFGRelationshipEventData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_KTFGDramaPlugin_OnRelationshipEventFired__DelegateSignature_Statics::NewProp_FiredBy = { "FiredBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_KTFGDramaPlugin_eventOnRelationshipEventFired_Parms, FiredBy), Z_Construct_UClass_AKTFGRomanceCharacterBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_KTFGDramaPlugin_OnRelationshipEventFired__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_KTFGDramaPlugin_OnRelationshipEventFired__DelegateSignature_Statics::NewProp_EventData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_KTFGDramaPlugin_OnRelationshipEventFired__DelegateSignature_Statics::NewProp_FiredBy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_KTFGDramaPlugin_OnRelationshipEventFired__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_KTFGDramaPlugin_OnRelationshipEventFired__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_KTFGDramaPlugin, nullptr, "OnRelationshipEventFired__DelegateSignature", Z_Construct_UDelegateFunction_KTFGDramaPlugin_OnRelationshipEventFired__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_KTFGDramaPlugin_OnRelationshipEventFired__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_KTFGDramaPlugin_OnRelationshipEventFired__DelegateSignature_Statics::_Script_KTFGDramaPlugin_eventOnRelationshipEventFired_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_KTFGDramaPlugin_OnRelationshipEventFired__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_KTFGDramaPlugin_OnRelationshipEventFired__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_KTFGDramaPlugin_OnRelationshipEventFired__DelegateSignature_Statics::_Script_KTFGDramaPlugin_eventOnRelationshipEventFired_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_KTFGDramaPlugin_OnRelationshipEventFired__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_KTFGDramaPlugin_OnRelationshipEventFired__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRelationshipEventFired_DelegateWrapper(const FMulticastScriptDelegate& OnRelationshipEventFired, UKTFGRelationshipEventData* EventData, AKTFGRomanceCharacterBase* FiredBy)
{
	struct _Script_KTFGDramaPlugin_eventOnRelationshipEventFired_Parms
	{
		UKTFGRelationshipEventData* EventData;
		AKTFGRomanceCharacterBase* FiredBy;
	};
	_Script_KTFGDramaPlugin_eventOnRelationshipEventFired_Parms Parms;
	Parms.EventData=EventData;
	Parms.FiredBy=FiredBy;
	OnRelationshipEventFired.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnRelationshipEventFired ***********************************************

// ********** Begin Class UKTFGRelationshipComponent Function ApplyTropeInitialValues **************
struct Z_Construct_UFunction_UKTFGRelationshipComponent_ApplyTropeInitialValues_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "KTFG|Relationship" },
		{ "Comment", "/**\n     * Aplica inmediatamente los valores emocionales iniciales del tropo\n     * al EmotionComponent de este personaje.\n     * Normalmente no hace falta llamarlo a mano: SetRomanceProfile() ya lo hace.\n     */" },
		{ "ModuleRelativePath", "Public/KTFGComponents/KTFGRelationshipComponent.h" },
		{ "ToolTip", "Aplica inmediatamente los valores emocionales iniciales del tropo\nal EmotionComponent de este personaje.\nNormalmente no hace falta llamarlo a mano: SetRomanceProfile() ya lo hace." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKTFGRelationshipComponent_ApplyTropeInitialValues_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKTFGRelationshipComponent, nullptr, "ApplyTropeInitialValues", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKTFGRelationshipComponent_ApplyTropeInitialValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKTFGRelationshipComponent_ApplyTropeInitialValues_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UKTFGRelationshipComponent_ApplyTropeInitialValues()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKTFGRelationshipComponent_ApplyTropeInitialValues_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKTFGRelationshipComponent::execApplyTropeInitialValues)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyTropeInitialValues();
	P_NATIVE_END;
}
// ********** End Class UKTFGRelationshipComponent Function ApplyTropeInitialValues ****************

// ********** Begin Class UKTFGRelationshipComponent Function CheckAndFireEvents *******************
struct Z_Construct_UFunction_UKTFGRelationshipComponent_CheckAndFireEvents_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "KTFG|RelationshipEvents" },
		{ "ModuleRelativePath", "Public/KTFGComponents/KTFGRelationshipComponent.h" },
		{ "ToolTip", "Comprueba y dispara los eventos relacionales cuyas condiciones se cumplan ahora." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKTFGRelationshipComponent_CheckAndFireEvents_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKTFGRelationshipComponent, nullptr, "CheckAndFireEvents", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKTFGRelationshipComponent_CheckAndFireEvents_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKTFGRelationshipComponent_CheckAndFireEvents_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UKTFGRelationshipComponent_CheckAndFireEvents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKTFGRelationshipComponent_CheckAndFireEvents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKTFGRelationshipComponent::execCheckAndFireEvents)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CheckAndFireEvents();
	P_NATIVE_END;
}
// ********** End Class UKTFGRelationshipComponent Function CheckAndFireEvents *********************

// ********** Begin Class UKTFGRelationshipComponent Function HasEventFired ************************
struct Z_Construct_UFunction_UKTFGRelationshipComponent_HasEventFired_Statics
{
	struct KTFGRelationshipComponent_eventHasEventFired_Parms
	{
		FName EventID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "KTFG|RelationshipEvents" },
		{ "ModuleRelativePath", "Public/KTFGComponents/KTFGRelationshipComponent.h" },
		{ "ToolTip", "Devuelve true si el evento con ese ID ya se dispar\xc3\xb3 en esta relaci\xc3\xb3n." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_EventID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKTFGRelationshipComponent_HasEventFired_Statics::NewProp_EventID = { "EventID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KTFGRelationshipComponent_eventHasEventFired_Parms, EventID), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UKTFGRelationshipComponent_HasEventFired_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((KTFGRelationshipComponent_eventHasEventFired_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKTFGRelationshipComponent_HasEventFired_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(KTFGRelationshipComponent_eventHasEventFired_Parms), &Z_Construct_UFunction_UKTFGRelationshipComponent_HasEventFired_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKTFGRelationshipComponent_HasEventFired_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKTFGRelationshipComponent_HasEventFired_Statics::NewProp_EventID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKTFGRelationshipComponent_HasEventFired_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKTFGRelationshipComponent_HasEventFired_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKTFGRelationshipComponent_HasEventFired_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKTFGRelationshipComponent, nullptr, "HasEventFired", Z_Construct_UFunction_UKTFGRelationshipComponent_HasEventFired_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKTFGRelationshipComponent_HasEventFired_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKTFGRelationshipComponent_HasEventFired_Statics::KTFGRelationshipComponent_eventHasEventFired_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKTFGRelationshipComponent_HasEventFired_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKTFGRelationshipComponent_HasEventFired_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKTFGRelationshipComponent_HasEventFired_Statics::KTFGRelationshipComponent_eventHasEventFired_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKTFGRelationshipComponent_HasEventFired()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKTFGRelationshipComponent_HasEventFired_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKTFGRelationshipComponent::execHasEventFired)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_EventID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasEventFired(Z_Param_EventID);
	P_NATIVE_END;
}
// ********** End Class UKTFGRelationshipComponent Function HasEventFired **************************

// ********** Begin Class UKTFGRelationshipComponent Function RecalculateRelationshipState *********
struct Z_Construct_UFunction_UKTFGRelationshipComponent_RecalculateRelationshipState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "KTFG|Relationship" },
		{ "Comment", "/**\n     * Recalcula el RPS y actualiza la fase si corresponde.\n     * Llamar tras cualquier modificaci\xc3\xb3n de emociones para mantener\n     * el estado de la relaci\xc3\xb3n sincronizado.\n     */" },
		{ "ModuleRelativePath", "Public/KTFGComponents/KTFGRelationshipComponent.h" },
		{ "ToolTip", "Recalcula el RPS y actualiza la fase si corresponde.\nLlamar tras cualquier modificaci\xc3\xb3n de emociones para mantener\nel estado de la relaci\xc3\xb3n sincronizado." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKTFGRelationshipComponent_RecalculateRelationshipState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKTFGRelationshipComponent, nullptr, "RecalculateRelationshipState", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKTFGRelationshipComponent_RecalculateRelationshipState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKTFGRelationshipComponent_RecalculateRelationshipState_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UKTFGRelationshipComponent_RecalculateRelationshipState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKTFGRelationshipComponent_RecalculateRelationshipState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKTFGRelationshipComponent::execRecalculateRelationshipState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RecalculateRelationshipState();
	P_NATIVE_END;
}
// ********** End Class UKTFGRelationshipComponent Function RecalculateRelationshipState ***********

// ********** Begin Class UKTFGRelationshipComponent Function ResetFiredEvents *********************
struct Z_Construct_UFunction_UKTFGRelationshipComponent_ResetFiredEvents_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "KTFG|RelationshipEvents" },
		{ "Comment", "/**\n     * Resetea el historial de eventos disparados.\n     * \xc3\x9atil si el jugador reinicia una ruta o la relaci\xc3\xb3n se disuelve y vuelve a empezar.\n     */" },
		{ "ModuleRelativePath", "Public/KTFGComponents/KTFGRelationshipComponent.h" },
		{ "ToolTip", "Resetea el historial de eventos disparados.\n\xc3\x9atil si el jugador reinicia una ruta o la relaci\xc3\xb3n se disuelve y vuelve a empezar." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKTFGRelationshipComponent_ResetFiredEvents_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKTFGRelationshipComponent, nullptr, "ResetFiredEvents", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKTFGRelationshipComponent_ResetFiredEvents_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKTFGRelationshipComponent_ResetFiredEvents_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UKTFGRelationshipComponent_ResetFiredEvents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKTFGRelationshipComponent_ResetFiredEvents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKTFGRelationshipComponent::execResetFiredEvents)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetFiredEvents();
	P_NATIVE_END;
}
// ********** End Class UKTFGRelationshipComponent Function ResetFiredEvents ***********************

// ********** Begin Class UKTFGRelationshipComponent Function SetRelatedCharacter ******************
struct Z_Construct_UFunction_UKTFGRelationshipComponent_SetRelatedCharacter_Statics
{
	struct KTFGRelationshipComponent_eventSetRelatedCharacter_Parms
	{
		AKTFGRomanceCharacterBase* NewCharacterB;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "KTFG|Relationship" },
		{ "Comment", "/** Cambia el personaje B de la pareja sin resetear el estado actual. */" },
		{ "ModuleRelativePath", "Public/KTFGComponents/KTFGRelationshipComponent.h" },
		{ "ToolTip", "Cambia el personaje B de la pareja sin resetear el estado actual." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewCharacterB;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKTFGRelationshipComponent_SetRelatedCharacter_Statics::NewProp_NewCharacterB = { "NewCharacterB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KTFGRelationshipComponent_eventSetRelatedCharacter_Parms, NewCharacterB), Z_Construct_UClass_AKTFGRomanceCharacterBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKTFGRelationshipComponent_SetRelatedCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKTFGRelationshipComponent_SetRelatedCharacter_Statics::NewProp_NewCharacterB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKTFGRelationshipComponent_SetRelatedCharacter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKTFGRelationshipComponent_SetRelatedCharacter_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKTFGRelationshipComponent, nullptr, "SetRelatedCharacter", Z_Construct_UFunction_UKTFGRelationshipComponent_SetRelatedCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKTFGRelationshipComponent_SetRelatedCharacter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKTFGRelationshipComponent_SetRelatedCharacter_Statics::KTFGRelationshipComponent_eventSetRelatedCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKTFGRelationshipComponent_SetRelatedCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKTFGRelationshipComponent_SetRelatedCharacter_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKTFGRelationshipComponent_SetRelatedCharacter_Statics::KTFGRelationshipComponent_eventSetRelatedCharacter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKTFGRelationshipComponent_SetRelatedCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKTFGRelationshipComponent_SetRelatedCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKTFGRelationshipComponent::execSetRelatedCharacter)
{
	P_GET_OBJECT(AKTFGRomanceCharacterBase,Z_Param_NewCharacterB);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRelatedCharacter(Z_Param_NewCharacterB);
	P_NATIVE_END;
}
// ********** End Class UKTFGRelationshipComponent Function SetRelatedCharacter ********************

// ********** Begin Class UKTFGRelationshipComponent Function SetRomanceProfile ********************
struct Z_Construct_UFunction_UKTFGRelationshipComponent_SetRomanceProfile_Statics
{
	struct KTFGRelationshipComponent_eventSetRomanceProfile_Parms
	{
		UKTFGRomanceTropeData* NewRelationshipTrope;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "KTFG|Relationship" },
		{ "Comment", "/** Asigna un tropo nuevo y aplica sus valores emocionales iniciales. */" },
		{ "ModuleRelativePath", "Public/KTFGComponents/KTFGRelationshipComponent.h" },
		{ "ToolTip", "Asigna un tropo nuevo y aplica sus valores emocionales iniciales." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewRelationshipTrope;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKTFGRelationshipComponent_SetRomanceProfile_Statics::NewProp_NewRelationshipTrope = { "NewRelationshipTrope", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KTFGRelationshipComponent_eventSetRomanceProfile_Parms, NewRelationshipTrope), Z_Construct_UClass_UKTFGRomanceTropeData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKTFGRelationshipComponent_SetRomanceProfile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKTFGRelationshipComponent_SetRomanceProfile_Statics::NewProp_NewRelationshipTrope,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKTFGRelationshipComponent_SetRomanceProfile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKTFGRelationshipComponent_SetRomanceProfile_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKTFGRelationshipComponent, nullptr, "SetRomanceProfile", Z_Construct_UFunction_UKTFGRelationshipComponent_SetRomanceProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKTFGRelationshipComponent_SetRomanceProfile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKTFGRelationshipComponent_SetRomanceProfile_Statics::KTFGRelationshipComponent_eventSetRomanceProfile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKTFGRelationshipComponent_SetRomanceProfile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKTFGRelationshipComponent_SetRomanceProfile_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKTFGRelationshipComponent_SetRomanceProfile_Statics::KTFGRelationshipComponent_eventSetRomanceProfile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKTFGRelationshipComponent_SetRomanceProfile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKTFGRelationshipComponent_SetRomanceProfile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKTFGRelationshipComponent::execSetRomanceProfile)
{
	P_GET_OBJECT(UKTFGRomanceTropeData,Z_Param_NewRelationshipTrope);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRomanceProfile(Z_Param_NewRelationshipTrope);
	P_NATIVE_END;
}
// ********** End Class UKTFGRelationshipComponent Function SetRomanceProfile **********************

// ********** Begin Class UKTFGRelationshipComponent Function TriggerSituation *********************
struct Z_Construct_UFunction_UKTFGRelationshipComponent_TriggerSituation_Statics
{
	struct KTFGRelationshipComponent_eventTriggerSituation_Parms
	{
		UKTFGSituationData* Situation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "KTFG|Relationship" },
		{ "Comment", "/**\n     * Ejecuta una situaci\xc3\xb3n: aplica sus deltas emocionales y, si el bot\xc3\xb3n\n     * asociado no est\xc3\xa1 vac\xc3\xado, lo desactiva para evitar doble activaci\xc3\xb3n.\n     * Llama autom\xc3\xa1ticamente a RecalculateRelationshipState() al terminar.\n     */" },
		{ "ModuleRelativePath", "Public/KTFGComponents/KTFGRelationshipComponent.h" },
		{ "ToolTip", "Ejecuta una situaci\xc3\xb3n: aplica sus deltas emocionales y, si el bot\xc3\xb3n\nasociado no est\xc3\xa1 vac\xc3\xado, lo desactiva para evitar doble activaci\xc3\xb3n.\nLlama autom\xc3\xa1ticamente a RecalculateRelationshipState() al terminar." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Situation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKTFGRelationshipComponent_TriggerSituation_Statics::NewProp_Situation = { "Situation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KTFGRelationshipComponent_eventTriggerSituation_Parms, Situation), Z_Construct_UClass_UKTFGSituationData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKTFGRelationshipComponent_TriggerSituation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKTFGRelationshipComponent_TriggerSituation_Statics::NewProp_Situation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKTFGRelationshipComponent_TriggerSituation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKTFGRelationshipComponent_TriggerSituation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKTFGRelationshipComponent, nullptr, "TriggerSituation", Z_Construct_UFunction_UKTFGRelationshipComponent_TriggerSituation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKTFGRelationshipComponent_TriggerSituation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKTFGRelationshipComponent_TriggerSituation_Statics::KTFGRelationshipComponent_eventTriggerSituation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKTFGRelationshipComponent_TriggerSituation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKTFGRelationshipComponent_TriggerSituation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKTFGRelationshipComponent_TriggerSituation_Statics::KTFGRelationshipComponent_eventTriggerSituation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKTFGRelationshipComponent_TriggerSituation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKTFGRelationshipComponent_TriggerSituation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKTFGRelationshipComponent::execTriggerSituation)
{
	P_GET_OBJECT(UKTFGSituationData,Z_Param_Situation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TriggerSituation(Z_Param_Situation);
	P_NATIVE_END;
}
// ********** End Class UKTFGRelationshipComponent Function TriggerSituation ***********************

// ********** Begin Class UKTFGRelationshipComponent ***********************************************
void UKTFGRelationshipComponent::StaticRegisterNativesUKTFGRelationshipComponent()
{
	UClass* Class = UKTFGRelationshipComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyTropeInitialValues", &UKTFGRelationshipComponent::execApplyTropeInitialValues },
		{ "CheckAndFireEvents", &UKTFGRelationshipComponent::execCheckAndFireEvents },
		{ "HasEventFired", &UKTFGRelationshipComponent::execHasEventFired },
		{ "RecalculateRelationshipState", &UKTFGRelationshipComponent::execRecalculateRelationshipState },
		{ "ResetFiredEvents", &UKTFGRelationshipComponent::execResetFiredEvents },
		{ "SetRelatedCharacter", &UKTFGRelationshipComponent::execSetRelatedCharacter },
		{ "SetRomanceProfile", &UKTFGRelationshipComponent::execSetRomanceProfile },
		{ "TriggerSituation", &UKTFGRelationshipComponent::execTriggerSituation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UKTFGRelationshipComponent;
UClass* UKTFGRelationshipComponent::GetPrivateStaticClass()
{
	using TClass = UKTFGRelationshipComponent;
	if (!Z_Registration_Info_UClass_UKTFGRelationshipComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("KTFGRelationshipComponent"),
			Z_Registration_Info_UClass_UKTFGRelationshipComponent.InnerSingleton,
			StaticRegisterNativesUKTFGRelationshipComponent,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UKTFGRelationshipComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UKTFGRelationshipComponent_NoRegister()
{
	return UKTFGRelationshipComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UKTFGRelationshipComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "// \xe2\x94\x80\xe2\x94\x80 CLASE PRINCIPAL \xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\n" },
		{ "IncludePath", "KTFGComponents/KTFGRelationshipComponent.h" },
		{ "ModuleRelativePath", "Public/KTFGComponents/KTFGRelationshipComponent.h" },
		{ "ToolTip", "\xe2\x94\x80\xe2\x94\x80 CLASE PRINCIPAL \xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPhase_MetaData[] = {
		{ "Category", "KTFG|Relationship" },
		{ "Comment", "/** Fase narrativa actual. Solo avanza; nunca retrocede. */" },
		{ "ModuleRelativePath", "Public/KTFGComponents/KTFGRelationshipComponent.h" },
		{ "ToolTip", "Fase narrativa actual. Solo avanza; nunca retrocede." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RelationshipTrope_MetaData[] = {
		{ "Category", "KTFG|Relationship" },
		{ "Comment", "/**\n     * Tropo que define los valores emocionales de partida y los modificadores\n     * de crecimiento de esta relaci\xc3\xb3n.\n     */" },
		{ "ModuleRelativePath", "Public/KTFGComponents/KTFGRelationshipComponent.h" },
		{ "ToolTip", "Tropo que define los valores emocionales de partida y los modificadores\nde crecimiento de esta relaci\xc3\xb3n." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterB_MetaData[] = {
		{ "Category", "KTFG|Relationship" },
		{ "Comment", "/** El otro personaje de la pareja. Sus emociones se leen para calcular el RPS. */" },
		{ "ModuleRelativePath", "Public/KTFGComponents/KTFGRelationshipComponent.h" },
		{ "ToolTip", "El otro personaje de la pareja. Sus emociones se leen para calcular el RPS." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RomanticProgressionScore_MetaData[] = {
		{ "Category", "KTFG|Relationship" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n     * Puntuaci\xc3\xb3n de progresi\xc3\xb3n rom\xc3\xa1ntica [0, 100].\n     * Calculada a partir de la media de emociones de ambos personajes\n     * con la f\xc3\xb3rmula ponderada del sistema.\n     */" },
		{ "ModuleRelativePath", "Public/KTFGComponents/KTFGRelationshipComponent.h" },
		{ "ToolTip", "Puntuaci\xc3\xb3n de progresi\xc3\xb3n rom\xc3\xa1ntica [0, 100].\nCalculada a partir de la media de emociones de ambos personajes\ncon la f\xc3\xb3rmula ponderada del sistema." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RelationshipEvents_MetaData[] = {
		{ "Category", "KTFG|RelationshipEvents" },
		{ "ModuleRelativePath", "Public/KTFGComponents/KTFGRelationshipComponent.h" },
		{ "ToolTip", "Eventos narrativos que se comprueban autom\xc3\xa1ticamente en cada rec\xc3\xa1lculo de la relaci\xc3\xb3n." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPhaseChanged_MetaData[] = {
		{ "Category", "KTFG|Relationship|Events" },
		{ "Comment", "/** Se dispara cuando la relaci\xc3\xb3n avanza a una nueva fase narrativa. */" },
		{ "ModuleRelativePath", "Public/KTFGComponents/KTFGRelationshipComponent.h" },
		{ "ToolTip", "Se dispara cuando la relaci\xc3\xb3n avanza a una nueva fase narrativa." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRelationshipEventFired_MetaData[] = {
		{ "Category", "KTFG|RelationshipEvents" },
		{ "ModuleRelativePath", "Public/KTFGComponents/KTFGRelationshipComponent.h" },
		{ "ToolTip", "Se dispara cuando se activa un evento relacional. \xc3\x9asalo para triggerar reacciones narrativas." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentPhase_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentPhase;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RelationshipTrope;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterB;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RomanticProgressionScore;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RelationshipEvents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RelationshipEvents;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPhaseChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRelationshipEventFired;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UKTFGRelationshipComponent_ApplyTropeInitialValues, "ApplyTropeInitialValues" }, // 3444839001
		{ &Z_Construct_UFunction_UKTFGRelationshipComponent_CheckAndFireEvents, "CheckAndFireEvents" }, // 2570098652
		{ &Z_Construct_UFunction_UKTFGRelationshipComponent_HasEventFired, "HasEventFired" }, // 793754329
		{ &Z_Construct_UFunction_UKTFGRelationshipComponent_RecalculateRelationshipState, "RecalculateRelationshipState" }, // 706107140
		{ &Z_Construct_UFunction_UKTFGRelationshipComponent_ResetFiredEvents, "ResetFiredEvents" }, // 1909825483
		{ &Z_Construct_UFunction_UKTFGRelationshipComponent_SetRelatedCharacter, "SetRelatedCharacter" }, // 3519384932
		{ &Z_Construct_UFunction_UKTFGRelationshipComponent_SetRomanceProfile, "SetRomanceProfile" }, // 1300703475
		{ &Z_Construct_UFunction_UKTFGRelationshipComponent_TriggerSituation, "TriggerSituation" }, // 3607615740
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKTFGRelationshipComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UKTFGRelationshipComponent_Statics::NewProp_CurrentPhase_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UKTFGRelationshipComponent_Statics::NewProp_CurrentPhase = { "CurrentPhase", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKTFGRelationshipComponent, CurrentPhase), Z_Construct_UEnum_KTFGDramaPlugin_EKTFGStoryPhase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentPhase_MetaData), NewProp_CurrentPhase_MetaData) }; // 3704888470
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKTFGRelationshipComponent_Statics::NewProp_RelationshipTrope = { "RelationshipTrope", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKTFGRelationshipComponent, RelationshipTrope), Z_Construct_UClass_UKTFGRomanceTropeData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RelationshipTrope_MetaData), NewProp_RelationshipTrope_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKTFGRelationshipComponent_Statics::NewProp_CharacterB = { "CharacterB", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKTFGRelationshipComponent, CharacterB), Z_Construct_UClass_AKTFGRomanceCharacterBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterB_MetaData), NewProp_CharacterB_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKTFGRelationshipComponent_Statics::NewProp_RomanticProgressionScore = { "RomanticProgressionScore", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKTFGRelationshipComponent, RomanticProgressionScore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RomanticProgressionScore_MetaData), NewProp_RomanticProgressionScore_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKTFGRelationshipComponent_Statics::NewProp_RelationshipEvents_Inner = { "RelationshipEvents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UKTFGRelationshipEventData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UKTFGRelationshipComponent_Statics::NewProp_RelationshipEvents = { "RelationshipEvents", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKTFGRelationshipComponent, RelationshipEvents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RelationshipEvents_MetaData), NewProp_RelationshipEvents_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UKTFGRelationshipComponent_Statics::NewProp_OnPhaseChanged = { "OnPhaseChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKTFGRelationshipComponent, OnPhaseChanged), Z_Construct_UDelegateFunction_KTFGDramaPlugin_OnPhaseChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPhaseChanged_MetaData), NewProp_OnPhaseChanged_MetaData) }; // 3690562272
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UKTFGRelationshipComponent_Statics::NewProp_OnRelationshipEventFired = { "OnRelationshipEventFired", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKTFGRelationshipComponent, OnRelationshipEventFired), Z_Construct_UDelegateFunction_KTFGDramaPlugin_OnRelationshipEventFired__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRelationshipEventFired_MetaData), NewProp_OnRelationshipEventFired_MetaData) }; // 2079298465
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKTFGRelationshipComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKTFGRelationshipComponent_Statics::NewProp_CurrentPhase_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKTFGRelationshipComponent_Statics::NewProp_CurrentPhase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKTFGRelationshipComponent_Statics::NewProp_RelationshipTrope,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKTFGRelationshipComponent_Statics::NewProp_CharacterB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKTFGRelationshipComponent_Statics::NewProp_RomanticProgressionScore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKTFGRelationshipComponent_Statics::NewProp_RelationshipEvents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKTFGRelationshipComponent_Statics::NewProp_RelationshipEvents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKTFGRelationshipComponent_Statics::NewProp_OnPhaseChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKTFGRelationshipComponent_Statics::NewProp_OnRelationshipEventFired,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKTFGRelationshipComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UKTFGRelationshipComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_KTFGDramaPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKTFGRelationshipComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UKTFGRelationshipComponent_Statics::ClassParams = {
	&UKTFGRelationshipComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UKTFGRelationshipComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UKTFGRelationshipComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKTFGRelationshipComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UKTFGRelationshipComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UKTFGRelationshipComponent()
{
	if (!Z_Registration_Info_UClass_UKTFGRelationshipComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKTFGRelationshipComponent.OuterSingleton, Z_Construct_UClass_UKTFGRelationshipComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UKTFGRelationshipComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UKTFGRelationshipComponent);
UKTFGRelationshipComponent::~UKTFGRelationshipComponent() {}
// ********** End Class UKTFGRelationshipComponent *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Carla_Documents_K_TFG_DRAMA_KTFGDemo_Build_KTFGDramaPlugin_HostProject_Plugins_KTFGDramaPlugin_Source_KTFGDramaPlugin_Public_KTFGComponents_KTFGRelationshipComponent_h__Script_KTFGDramaPlugin_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UKTFGRelationshipComponent, UKTFGRelationshipComponent::StaticClass, TEXT("UKTFGRelationshipComponent"), &Z_Registration_Info_UClass_UKTFGRelationshipComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKTFGRelationshipComponent), 3522497211U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Carla_Documents_K_TFG_DRAMA_KTFGDemo_Build_KTFGDramaPlugin_HostProject_Plugins_KTFGDramaPlugin_Source_KTFGDramaPlugin_Public_KTFGComponents_KTFGRelationshipComponent_h__Script_KTFGDramaPlugin_1909149638(TEXT("/Script/KTFGDramaPlugin"),
	Z_CompiledInDeferFile_FID_Users_Carla_Documents_K_TFG_DRAMA_KTFGDemo_Build_KTFGDramaPlugin_HostProject_Plugins_KTFGDramaPlugin_Source_KTFGDramaPlugin_Public_KTFGComponents_KTFGRelationshipComponent_h__Script_KTFGDramaPlugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Carla_Documents_K_TFG_DRAMA_KTFGDemo_Build_KTFGDramaPlugin_HostProject_Plugins_KTFGDramaPlugin_Source_KTFGDramaPlugin_Public_KTFGComponents_KTFGRelationshipComponent_h__Script_KTFGDramaPlugin_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
