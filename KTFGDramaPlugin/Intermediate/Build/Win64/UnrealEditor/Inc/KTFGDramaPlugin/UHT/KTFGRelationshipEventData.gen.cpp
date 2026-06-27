// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KTFGData/KTFGRelationshipEventData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeKTFGRelationshipEventData() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
KTFGDRAMAPLUGIN_API UClass* Z_Construct_UClass_UKTFGRelationshipEventData();
KTFGDRAMAPLUGIN_API UClass* Z_Construct_UClass_UKTFGRelationshipEventData_NoRegister();
KTFGDRAMAPLUGIN_API UEnum* Z_Construct_UEnum_KTFGDramaPlugin_EKTFGStoryPhase();
UPackage* Z_Construct_UPackage__Script_KTFGDramaPlugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UKTFGRelationshipEventData ***********************************************
void UKTFGRelationshipEventData::StaticRegisterNativesUKTFGRelationshipEventData()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UKTFGRelationshipEventData;
UClass* UKTFGRelationshipEventData::GetPrivateStaticClass()
{
	using TClass = UKTFGRelationshipEventData;
	if (!Z_Registration_Info_UClass_UKTFGRelationshipEventData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("KTFGRelationshipEventData"),
			Z_Registration_Info_UClass_UKTFGRelationshipEventData.InnerSingleton,
			StaticRegisterNativesUKTFGRelationshipEventData,
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
	return Z_Registration_Info_UClass_UKTFGRelationshipEventData.InnerSingleton;
}
UClass* Z_Construct_UClass_UKTFGRelationshipEventData_NoRegister()
{
	return UKTFGRelationshipEventData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UKTFGRelationshipEventData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "KTFGData/KTFGRelationshipEventData.h" },
		{ "ModuleRelativePath", "Public/KTFGData/KTFGRelationshipEventData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventID_MetaData[] = {
		{ "Category", "KTFG|Event" },
		{ "ModuleRelativePath", "Public/KTFGData/KTFGRelationshipEventData.h" },
		{ "ToolTip", "ID \xc3\xbanico del evento. Debe ser distinto en cada DataAsset de evento." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "KTFG|Event" },
		{ "Comment", "/** Nombre legible del evento, para logs y UI. */" },
		{ "ModuleRelativePath", "Public/KTFGData/KTFGRelationshipEventData.h" },
		{ "ToolTip", "Nombre legible del evento, para logs y UI." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "KTFG|Event" },
		{ "Comment", "/** Descripci\xc3\xb3n narrativa del evento (opcional, para documentar o mostrar en pantalla). */" },
		{ "ModuleRelativePath", "Public/KTFGData/KTFGRelationshipEventData.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "Descripci\xc3\xb3n narrativa del evento (opcional, para documentar o mostrar en pantalla)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequiresPhase_MetaData[] = {
		{ "Category", "KTFG|EventConditions" },
		{ "ModuleRelativePath", "Public/KTFGData/KTFGRelationshipEventData.h" },
		{ "ToolTip", "Activa para requerir una fase m\xc3\xadnima." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredPhase_MetaData[] = {
		{ "Category", "KTFG|EventConditions" },
		{ "EditCondition", "bRequiresPhase" },
		{ "ModuleRelativePath", "Public/KTFGData/KTFGRelationshipEventData.h" },
		{ "ToolTip", "Fase m\xc3\xadnima requerida para que este evento pueda activarse." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequiresMinScore_MetaData[] = {
		{ "Category", "KTFG|EventConditions" },
		{ "Comment", "/** Si est\xc3\xa1 activado, el evento requiere un RomanticProgressionScore m\xc3\xadnimo. */" },
		{ "ModuleRelativePath", "Public/KTFGData/KTFGRelationshipEventData.h" },
		{ "ToolTip", "Si est\xc3\xa1 activado, el evento requiere un RomanticProgressionScore m\xc3\xadnimo." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinScore_MetaData[] = {
		{ "Category", "KTFG|EventConditions" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "bRequiresMinScore" },
		{ "ModuleRelativePath", "Public/KTFGData/KTFGRelationshipEventData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequiresMinAffection_MetaData[] = {
		{ "Category", "KTFG|EventConditions" },
		{ "Comment", "/** Si est\xc3\xa1 activado, requiere que Affection supere este valor. */" },
		{ "ModuleRelativePath", "Public/KTFGData/KTFGRelationshipEventData.h" },
		{ "ToolTip", "Si est\xc3\xa1 activado, requiere que Affection supere este valor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinAffection_MetaData[] = {
		{ "Category", "KTFG|EventConditions" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "bRequiresMinAffection" },
		{ "ModuleRelativePath", "Public/KTFGData/KTFGRelationshipEventData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequiresMinTrust_MetaData[] = {
		{ "Category", "KTFG|EventConditions" },
		{ "Comment", "/** Si est\xc3\xa1 activado, requiere que Trust supere este valor. */" },
		{ "ModuleRelativePath", "Public/KTFGData/KTFGRelationshipEventData.h" },
		{ "ToolTip", "Si est\xc3\xa1 activado, requiere que Trust supere este valor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinTrust_MetaData[] = {
		{ "Category", "KTFG|EventConditions" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "bRequiresMinTrust" },
		{ "ModuleRelativePath", "Public/KTFGData/KTFGRelationshipEventData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequiresMinPride_MetaData[] = {
		{ "Category", "KTFG|EventConditions" },
		{ "Comment", "/** Si est\xc3\xa1 activado, requiere que Pride supere este valor (\xc3\xbatil para StrongArgument). */" },
		{ "ModuleRelativePath", "Public/KTFGData/KTFGRelationshipEventData.h" },
		{ "ToolTip", "Si est\xc3\xa1 activado, requiere que Pride supere este valor (\xc3\xbatil para StrongArgument)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinPride_MetaData[] = {
		{ "Category", "KTFG|EventConditions" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "bRequiresMinPride" },
		{ "ModuleRelativePath", "Public/KTFGData/KTFGRelationshipEventData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequiresMinVulnerability_MetaData[] = {
		{ "Category", "KTFG|EventConditions" },
		{ "Comment", "/** Si est\xc3\xa1 activado, requiere que Vulnerability supere este valor (\xc3\xbatil para EmotionalOpening). */" },
		{ "ModuleRelativePath", "Public/KTFGData/KTFGRelationshipEventData.h" },
		{ "ToolTip", "Si est\xc3\xa1 activado, requiere que Vulnerability supere este valor (\xc3\xbatil para EmotionalOpening)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinVulnerability_MetaData[] = {
		{ "Category", "KTFG|EventConditions" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "bRequiresMinVulnerability" },
		{ "ModuleRelativePath", "Public/KTFGData/KTFGRelationshipEventData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AffectionDelta_MetaData[] = {
		{ "Category", "KTFG|EventEffects" },
		{ "ModuleRelativePath", "Public/KTFGData/KTFGRelationshipEventData.h" },
		{ "ToolTip", "Cu\xc3\xa1nto cambia Affection cuando se dispara este evento." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrustDelta_MetaData[] = {
		{ "Category", "KTFG|EventEffects" },
		{ "ModuleRelativePath", "Public/KTFGData/KTFGRelationshipEventData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrideDelta_MetaData[] = {
		{ "Category", "KTFG|EventEffects" },
		{ "ModuleRelativePath", "Public/KTFGData/KTFGRelationshipEventData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JealousyDelta_MetaData[] = {
		{ "Category", "KTFG|EventEffects" },
		{ "ModuleRelativePath", "Public/KTFGData/KTFGRelationshipEventData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VulnerabilityDelta_MetaData[] = {
		{ "Category", "KTFG|EventEffects" },
		{ "ModuleRelativePath", "Public/KTFGData/KTFGRelationshipEventData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFireOnlyOnce_MetaData[] = {
		{ "Category", "KTFG|EventBehavior" },
		{ "ModuleRelativePath", "Public/KTFGData/KTFGRelationshipEventData.h" },
		{ "ToolTip", "Si est\xc3\xa1 activado, el evento solo se dispara una vez durante toda la relaci\xc3\xb3n." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_EventID;
	static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
	static void NewProp_bRequiresPhase_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequiresPhase;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RequiredPhase_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RequiredPhase;
	static void NewProp_bRequiresMinScore_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequiresMinScore;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinScore;
	static void NewProp_bRequiresMinAffection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequiresMinAffection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinAffection;
	static void NewProp_bRequiresMinTrust_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequiresMinTrust;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinTrust;
	static void NewProp_bRequiresMinPride_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequiresMinPride;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinPride;
	static void NewProp_bRequiresMinVulnerability_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequiresMinVulnerability;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinVulnerability;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AffectionDelta;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TrustDelta;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PrideDelta;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_JealousyDelta;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VulnerabilityDelta;
	static void NewProp_bFireOnlyOnce_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFireOnlyOnce;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKTFGRelationshipEventData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UKTFGRelationshipEventData_Statics::NewProp_EventID = { "EventID", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKTFGRelationshipEventData, EventID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventID_MetaData), NewProp_EventID_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UKTFGRelationshipEventData_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKTFGRelationshipEventData, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UKTFGRelationshipEventData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKTFGRelationshipEventData, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
void Z_Construct_UClass_UKTFGRelationshipEventData_Statics::NewProp_bRequiresPhase_SetBit(void* Obj)
{
	((UKTFGRelationshipEventData*)Obj)->bRequiresPhase = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UKTFGRelationshipEventData_Statics::NewProp_bRequiresPhase = { "bRequiresPhase", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UKTFGRelationshipEventData), &Z_Construct_UClass_UKTFGRelationshipEventData_Statics::NewProp_bRequiresPhase_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequiresPhase_MetaData), NewProp_bRequiresPhase_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UKTFGRelationshipEventData_Statics::NewProp_RequiredPhase_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UKTFGRelationshipEventData_Statics::NewProp_RequiredPhase = { "RequiredPhase", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKTFGRelationshipEventData, RequiredPhase), Z_Construct_UEnum_KTFGDramaPlugin_EKTFGStoryPhase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredPhase_MetaData), NewProp_RequiredPhase_MetaData) }; // 3704888470
void Z_Construct_UClass_UKTFGRelationshipEventData_Statics::NewProp_bRequiresMinScore_SetBit(void* Obj)
{
	((UKTFGRelationshipEventData*)Obj)->bRequiresMinScore = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UKTFGRelationshipEventData_Statics::NewProp_bRequiresMinScore = { "bRequiresMinScore", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UKTFGRelationshipEventData), &Z_Construct_UClass_UKTFGRelationshipEventData_Statics::NewProp_bRequiresMinScore_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequiresMinScore_MetaData), NewProp_bRequiresMinScore_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKTFGRelationshipEventData_Statics::NewProp_MinScore = { "MinScore", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKTFGRelationshipEventData, MinScore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinScore_MetaData), NewProp_MinScore_MetaData) };
void Z_Construct_UClass_UKTFGRelationshipEventData_Statics::NewProp_bRequiresMinAffection_SetBit(void* Obj)
{
	((UKTFGRelationshipEventData*)Obj)->bRequiresMinAffection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UKTFGRelationshipEventData_Statics::NewProp_bRequiresMinAffection = { "bRequiresMinAffection", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UKTFGRelationshipEventData), &Z_Construct_UClass_UKTFGRelationshipEventData_Statics::NewProp_bRequiresMinAffection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequiresMinAffection_MetaData), NewProp_bRequiresMinAffection_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKTFGRelationshipEventData_Statics::NewProp_MinAffection = { "MinAffection", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKTFGRelationshipEventData, MinAffection), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinAffection_MetaData), NewProp_MinAffection_MetaData) };
void Z_Construct_UClass_UKTFGRelationshipEventData_Statics::NewProp_bRequiresMinTrust_SetBit(void* Obj)
{
	((UKTFGRelationshipEventData*)Obj)->bRequiresMinTrust = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UKTFGRelationshipEventData_Statics::NewProp_bRequiresMinTrust = { "bRequiresMinTrust", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UKTFGRelationshipEventData), &Z_Construct_UClass_UKTFGRelationshipEventData_Statics::NewProp_bRequiresMinTrust_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequiresMinTrust_MetaData), NewProp_bRequiresMinTrust_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKTFGRelationshipEventData_Statics::NewProp_MinTrust = { "MinTrust", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKTFGRelationshipEventData, MinTrust), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinTrust_MetaData), NewProp_MinTrust_MetaData) };
void Z_Construct_UClass_UKTFGRelationshipEventData_Statics::NewProp_bRequiresMinPride_SetBit(void* Obj)
{
	((UKTFGRelationshipEventData*)Obj)->bRequiresMinPride = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UKTFGRelationshipEventData_Statics::NewProp_bRequiresMinPride = { "bRequiresMinPride", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UKTFGRelationshipEventData), &Z_Construct_UClass_UKTFGRelationshipEventData_Statics::NewProp_bRequiresMinPride_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequiresMinPride_MetaData), NewProp_bRequiresMinPride_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKTFGRelationshipEventData_Statics::NewProp_MinPride = { "MinPride", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKTFGRelationshipEventData, MinPride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinPride_MetaData), NewProp_MinPride_MetaData) };
void Z_Construct_UClass_UKTFGRelationshipEventData_Statics::NewProp_bRequiresMinVulnerability_SetBit(void* Obj)
{
	((UKTFGRelationshipEventData*)Obj)->bRequiresMinVulnerability = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UKTFGRelationshipEventData_Statics::NewProp_bRequiresMinVulnerability = { "bRequiresMinVulnerability", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UKTFGRelationshipEventData), &Z_Construct_UClass_UKTFGRelationshipEventData_Statics::NewProp_bRequiresMinVulnerability_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequiresMinVulnerability_MetaData), NewProp_bRequiresMinVulnerability_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKTFGRelationshipEventData_Statics::NewProp_MinVulnerability = { "MinVulnerability", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKTFGRelationshipEventData, MinVulnerability), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinVulnerability_MetaData), NewProp_MinVulnerability_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKTFGRelationshipEventData_Statics::NewProp_AffectionDelta = { "AffectionDelta", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKTFGRelationshipEventData, AffectionDelta), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AffectionDelta_MetaData), NewProp_AffectionDelta_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKTFGRelationshipEventData_Statics::NewProp_TrustDelta = { "TrustDelta", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKTFGRelationshipEventData, TrustDelta), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrustDelta_MetaData), NewProp_TrustDelta_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKTFGRelationshipEventData_Statics::NewProp_PrideDelta = { "PrideDelta", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKTFGRelationshipEventData, PrideDelta), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrideDelta_MetaData), NewProp_PrideDelta_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKTFGRelationshipEventData_Statics::NewProp_JealousyDelta = { "JealousyDelta", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKTFGRelationshipEventData, JealousyDelta), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JealousyDelta_MetaData), NewProp_JealousyDelta_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKTFGRelationshipEventData_Statics::NewProp_VulnerabilityDelta = { "VulnerabilityDelta", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKTFGRelationshipEventData, VulnerabilityDelta), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VulnerabilityDelta_MetaData), NewProp_VulnerabilityDelta_MetaData) };
void Z_Construct_UClass_UKTFGRelationshipEventData_Statics::NewProp_bFireOnlyOnce_SetBit(void* Obj)
{
	((UKTFGRelationshipEventData*)Obj)->bFireOnlyOnce = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UKTFGRelationshipEventData_Statics::NewProp_bFireOnlyOnce = { "bFireOnlyOnce", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UKTFGRelationshipEventData), &Z_Construct_UClass_UKTFGRelationshipEventData_Statics::NewProp_bFireOnlyOnce_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFireOnlyOnce_MetaData), NewProp_bFireOnlyOnce_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKTFGRelationshipEventData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKTFGRelationshipEventData_Statics::NewProp_EventID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKTFGRelationshipEventData_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKTFGRelationshipEventData_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKTFGRelationshipEventData_Statics::NewProp_bRequiresPhase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKTFGRelationshipEventData_Statics::NewProp_RequiredPhase_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKTFGRelationshipEventData_Statics::NewProp_RequiredPhase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKTFGRelationshipEventData_Statics::NewProp_bRequiresMinScore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKTFGRelationshipEventData_Statics::NewProp_MinScore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKTFGRelationshipEventData_Statics::NewProp_bRequiresMinAffection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKTFGRelationshipEventData_Statics::NewProp_MinAffection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKTFGRelationshipEventData_Statics::NewProp_bRequiresMinTrust,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKTFGRelationshipEventData_Statics::NewProp_MinTrust,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKTFGRelationshipEventData_Statics::NewProp_bRequiresMinPride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKTFGRelationshipEventData_Statics::NewProp_MinPride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKTFGRelationshipEventData_Statics::NewProp_bRequiresMinVulnerability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKTFGRelationshipEventData_Statics::NewProp_MinVulnerability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKTFGRelationshipEventData_Statics::NewProp_AffectionDelta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKTFGRelationshipEventData_Statics::NewProp_TrustDelta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKTFGRelationshipEventData_Statics::NewProp_PrideDelta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKTFGRelationshipEventData_Statics::NewProp_JealousyDelta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKTFGRelationshipEventData_Statics::NewProp_VulnerabilityDelta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKTFGRelationshipEventData_Statics::NewProp_bFireOnlyOnce,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKTFGRelationshipEventData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UKTFGRelationshipEventData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_KTFGDramaPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKTFGRelationshipEventData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UKTFGRelationshipEventData_Statics::ClassParams = {
	&UKTFGRelationshipEventData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UKTFGRelationshipEventData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UKTFGRelationshipEventData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKTFGRelationshipEventData_Statics::Class_MetaDataParams), Z_Construct_UClass_UKTFGRelationshipEventData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UKTFGRelationshipEventData()
{
	if (!Z_Registration_Info_UClass_UKTFGRelationshipEventData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKTFGRelationshipEventData.OuterSingleton, Z_Construct_UClass_UKTFGRelationshipEventData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UKTFGRelationshipEventData.OuterSingleton;
}
UKTFGRelationshipEventData::UKTFGRelationshipEventData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UKTFGRelationshipEventData);
UKTFGRelationshipEventData::~UKTFGRelationshipEventData() {}
// ********** End Class UKTFGRelationshipEventData *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Carla_Documents_K_TFG_DRAMA_KTFGDemo_Build_KTFGDramaPlugin_HostProject_Plugins_KTFGDramaPlugin_Source_KTFGDramaPlugin_Public_KTFGData_KTFGRelationshipEventData_h__Script_KTFGDramaPlugin_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UKTFGRelationshipEventData, UKTFGRelationshipEventData::StaticClass, TEXT("UKTFGRelationshipEventData"), &Z_Registration_Info_UClass_UKTFGRelationshipEventData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKTFGRelationshipEventData), 3512150639U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Carla_Documents_K_TFG_DRAMA_KTFGDemo_Build_KTFGDramaPlugin_HostProject_Plugins_KTFGDramaPlugin_Source_KTFGDramaPlugin_Public_KTFGData_KTFGRelationshipEventData_h__Script_KTFGDramaPlugin_2392384109(TEXT("/Script/KTFGDramaPlugin"),
	Z_CompiledInDeferFile_FID_Users_Carla_Documents_K_TFG_DRAMA_KTFGDemo_Build_KTFGDramaPlugin_HostProject_Plugins_KTFGDramaPlugin_Source_KTFGDramaPlugin_Public_KTFGData_KTFGRelationshipEventData_h__Script_KTFGDramaPlugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Carla_Documents_K_TFG_DRAMA_KTFGDemo_Build_KTFGDramaPlugin_HostProject_Plugins_KTFGDramaPlugin_Source_KTFGDramaPlugin_Public_KTFGData_KTFGRelationshipEventData_h__Script_KTFGDramaPlugin_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
