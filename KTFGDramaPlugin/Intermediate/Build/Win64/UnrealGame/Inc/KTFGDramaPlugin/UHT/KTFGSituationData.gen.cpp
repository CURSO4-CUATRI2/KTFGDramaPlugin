// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KTFGData/KTFGSituationData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeKTFGSituationData() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
KTFGDRAMAPLUGIN_API UClass* Z_Construct_UClass_UKTFGSituationData();
KTFGDRAMAPLUGIN_API UClass* Z_Construct_UClass_UKTFGSituationData_NoRegister();
KTFGDRAMAPLUGIN_API UEnum* Z_Construct_UEnum_KTFGDramaPlugin_EKTFGStoryPhase();
UPackage* Z_Construct_UPackage__Script_KTFGDramaPlugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UKTFGSituationData *******************************************************
void UKTFGSituationData::StaticRegisterNativesUKTFGSituationData()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UKTFGSituationData;
UClass* UKTFGSituationData::GetPrivateStaticClass()
{
	using TClass = UKTFGSituationData;
	if (!Z_Registration_Info_UClass_UKTFGSituationData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("KTFGSituationData"),
			Z_Registration_Info_UClass_UKTFGSituationData.InnerSingleton,
			StaticRegisterNativesUKTFGSituationData,
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
	return Z_Registration_Info_UClass_UKTFGSituationData.InnerSingleton;
}
UClass* Z_Construct_UClass_UKTFGSituationData_NoRegister()
{
	return UKTFGSituationData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UKTFGSituationData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "KTFGData/KTFGSituationData.h" },
		{ "ModuleRelativePath", "Public/KTFGData/KTFGSituationData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SituationID_MetaData[] = {
		{ "Category", "KTFG|Situation" },
		{ "Comment", "// \xe2\x94\x80\xe2\x94\x80 IDENTIFICACI\xc3\x93N \xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\n" },
		{ "ModuleRelativePath", "Public/KTFGData/KTFGSituationData.h" },
		{ "ToolTip", "\xe2\x94\x80\xe2\x94\x80 IDENTIFICACI\xc3\x93N \xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "KTFG|Situation" },
		{ "ModuleRelativePath", "Public/KTFGData/KTFGSituationData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "KTFG|Situation" },
		{ "ModuleRelativePath", "Public/KTFGData/KTFGSituationData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AffectionDelta_MetaData[] = {
		{ "Category", "KTFG|SituationDeltas" },
		{ "Comment", "// \xe2\x94\x80\xe2\x94\x80 DELTAS EMOCIONALES \xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\n// Cu\xc3\xa1nto cambia cada emoci\xc3\xb3n al ejecutar esta situaci\xc3\xb3n.\n// Valores positivos suben; negativos bajan. 0 = sin efecto.\n" },
		{ "ModuleRelativePath", "Public/KTFGData/KTFGSituationData.h" },
		{ "ToolTip", "\xe2\x94\x80\xe2\x94\x80 DELTAS EMOCIONALES \xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\nCu\xc3\xa1nto cambia cada emoci\xc3\xb3n al ejecutar esta situaci\xc3\xb3n.\nValores positivos suben; negativos bajan. 0 = sin efecto." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrustDelta_MetaData[] = {
		{ "Category", "KTFG|SituationDeltas" },
		{ "ModuleRelativePath", "Public/KTFGData/KTFGSituationData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrideDelta_MetaData[] = {
		{ "Category", "KTFG|SituationDeltas" },
		{ "ModuleRelativePath", "Public/KTFGData/KTFGSituationData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JealousyDelta_MetaData[] = {
		{ "Category", "KTFG|SituationDeltas" },
		{ "ModuleRelativePath", "Public/KTFGData/KTFGSituationData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VulnerabilityDelta_MetaData[] = {
		{ "Category", "KTFG|SituationDeltas" },
		{ "ModuleRelativePath", "Public/KTFGData/KTFGSituationData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequiresMinPhase_MetaData[] = {
		{ "Category", "KTFG|SituationConditions" },
		{ "Comment", "/**\n     * Si est\xc3\xa1 activado, esta situaci\xc3\xb3n solo se puede ejecutar cuando la\n     * relaci\xc3\xb3n haya alcanzado MinRequiredPhase o una posterior.\n     */" },
		{ "ModuleRelativePath", "Public/KTFGData/KTFGSituationData.h" },
		{ "ToolTip", "Si est\xc3\xa1 activado, esta situaci\xc3\xb3n solo se puede ejecutar cuando la\nrelaci\xc3\xb3n haya alcanzado MinRequiredPhase o una posterior." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinRequiredPhase_MetaData[] = {
		{ "Category", "KTFG|SituationConditions" },
		{ "EditCondition", "bRequiresMinPhase" },
		{ "ModuleRelativePath", "Public/KTFGData/KTFGSituationData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequiresMinScore_MetaData[] = {
		{ "Category", "KTFG|SituationConditions" },
		{ "Comment", "/**\n     * Si est\xc3\xa1 activado, esta situaci\xc3\xb3n requiere adem\xc3\xa1s que el RPS sea\n     * igual o superior a MinRequiredScore.\n     * \xc3\x9atil para situaciones cr\xc3\xadticas como \"Confess\".\n     */" },
		{ "ModuleRelativePath", "Public/KTFGData/KTFGSituationData.h" },
		{ "ToolTip", "Si est\xc3\xa1 activado, esta situaci\xc3\xb3n requiere adem\xc3\xa1s que el RPS sea\nigual o superior a MinRequiredScore.\n\xc3\x9atil para situaciones cr\xc3\xadticas como \"Confess\"." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinRequiredScore_MetaData[] = {
		{ "Category", "KTFG|SituationConditions" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "bRequiresMinScore" },
		{ "ModuleRelativePath", "Public/KTFGData/KTFGSituationData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SituationID;
	static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AffectionDelta;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TrustDelta;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PrideDelta;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_JealousyDelta;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VulnerabilityDelta;
	static void NewProp_bRequiresMinPhase_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequiresMinPhase;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MinRequiredPhase_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MinRequiredPhase;
	static void NewProp_bRequiresMinScore_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequiresMinScore;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinRequiredScore;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKTFGSituationData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UKTFGSituationData_Statics::NewProp_SituationID = { "SituationID", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKTFGSituationData, SituationID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SituationID_MetaData), NewProp_SituationID_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UKTFGSituationData_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKTFGSituationData, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UKTFGSituationData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKTFGSituationData, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKTFGSituationData_Statics::NewProp_AffectionDelta = { "AffectionDelta", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKTFGSituationData, AffectionDelta), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AffectionDelta_MetaData), NewProp_AffectionDelta_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKTFGSituationData_Statics::NewProp_TrustDelta = { "TrustDelta", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKTFGSituationData, TrustDelta), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrustDelta_MetaData), NewProp_TrustDelta_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKTFGSituationData_Statics::NewProp_PrideDelta = { "PrideDelta", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKTFGSituationData, PrideDelta), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrideDelta_MetaData), NewProp_PrideDelta_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKTFGSituationData_Statics::NewProp_JealousyDelta = { "JealousyDelta", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKTFGSituationData, JealousyDelta), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JealousyDelta_MetaData), NewProp_JealousyDelta_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKTFGSituationData_Statics::NewProp_VulnerabilityDelta = { "VulnerabilityDelta", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKTFGSituationData, VulnerabilityDelta), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VulnerabilityDelta_MetaData), NewProp_VulnerabilityDelta_MetaData) };
void Z_Construct_UClass_UKTFGSituationData_Statics::NewProp_bRequiresMinPhase_SetBit(void* Obj)
{
	((UKTFGSituationData*)Obj)->bRequiresMinPhase = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UKTFGSituationData_Statics::NewProp_bRequiresMinPhase = { "bRequiresMinPhase", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UKTFGSituationData), &Z_Construct_UClass_UKTFGSituationData_Statics::NewProp_bRequiresMinPhase_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequiresMinPhase_MetaData), NewProp_bRequiresMinPhase_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UKTFGSituationData_Statics::NewProp_MinRequiredPhase_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UKTFGSituationData_Statics::NewProp_MinRequiredPhase = { "MinRequiredPhase", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKTFGSituationData, MinRequiredPhase), Z_Construct_UEnum_KTFGDramaPlugin_EKTFGStoryPhase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinRequiredPhase_MetaData), NewProp_MinRequiredPhase_MetaData) }; // 3704888470
void Z_Construct_UClass_UKTFGSituationData_Statics::NewProp_bRequiresMinScore_SetBit(void* Obj)
{
	((UKTFGSituationData*)Obj)->bRequiresMinScore = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UKTFGSituationData_Statics::NewProp_bRequiresMinScore = { "bRequiresMinScore", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UKTFGSituationData), &Z_Construct_UClass_UKTFGSituationData_Statics::NewProp_bRequiresMinScore_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequiresMinScore_MetaData), NewProp_bRequiresMinScore_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKTFGSituationData_Statics::NewProp_MinRequiredScore = { "MinRequiredScore", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKTFGSituationData, MinRequiredScore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinRequiredScore_MetaData), NewProp_MinRequiredScore_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKTFGSituationData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKTFGSituationData_Statics::NewProp_SituationID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKTFGSituationData_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKTFGSituationData_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKTFGSituationData_Statics::NewProp_AffectionDelta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKTFGSituationData_Statics::NewProp_TrustDelta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKTFGSituationData_Statics::NewProp_PrideDelta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKTFGSituationData_Statics::NewProp_JealousyDelta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKTFGSituationData_Statics::NewProp_VulnerabilityDelta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKTFGSituationData_Statics::NewProp_bRequiresMinPhase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKTFGSituationData_Statics::NewProp_MinRequiredPhase_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKTFGSituationData_Statics::NewProp_MinRequiredPhase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKTFGSituationData_Statics::NewProp_bRequiresMinScore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKTFGSituationData_Statics::NewProp_MinRequiredScore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKTFGSituationData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UKTFGSituationData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_KTFGDramaPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKTFGSituationData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UKTFGSituationData_Statics::ClassParams = {
	&UKTFGSituationData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UKTFGSituationData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UKTFGSituationData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKTFGSituationData_Statics::Class_MetaDataParams), Z_Construct_UClass_UKTFGSituationData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UKTFGSituationData()
{
	if (!Z_Registration_Info_UClass_UKTFGSituationData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKTFGSituationData.OuterSingleton, Z_Construct_UClass_UKTFGSituationData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UKTFGSituationData.OuterSingleton;
}
UKTFGSituationData::UKTFGSituationData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UKTFGSituationData);
UKTFGSituationData::~UKTFGSituationData() {}
// ********** End Class UKTFGSituationData *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Carla_Documents_K_TFG_DRAMA_KTFGDemo_Build_KTFGDramaPlugin_HostProject_Plugins_KTFGDramaPlugin_Source_KTFGDramaPlugin_Public_KTFGData_KTFGSituationData_h__Script_KTFGDramaPlugin_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UKTFGSituationData, UKTFGSituationData::StaticClass, TEXT("UKTFGSituationData"), &Z_Registration_Info_UClass_UKTFGSituationData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKTFGSituationData), 3261033235U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Carla_Documents_K_TFG_DRAMA_KTFGDemo_Build_KTFGDramaPlugin_HostProject_Plugins_KTFGDramaPlugin_Source_KTFGDramaPlugin_Public_KTFGData_KTFGSituationData_h__Script_KTFGDramaPlugin_3453758259(TEXT("/Script/KTFGDramaPlugin"),
	Z_CompiledInDeferFile_FID_Users_Carla_Documents_K_TFG_DRAMA_KTFGDemo_Build_KTFGDramaPlugin_HostProject_Plugins_KTFGDramaPlugin_Source_KTFGDramaPlugin_Public_KTFGData_KTFGSituationData_h__Script_KTFGDramaPlugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Carla_Documents_K_TFG_DRAMA_KTFGDemo_Build_KTFGDramaPlugin_HostProject_Plugins_KTFGDramaPlugin_Source_KTFGDramaPlugin_Public_KTFGData_KTFGSituationData_h__Script_KTFGDramaPlugin_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
