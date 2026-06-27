// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KTFGCharacters/KTFGRomanceCharacterBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeKTFGRomanceCharacterBase() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
KTFGDRAMAPLUGIN_API UClass* Z_Construct_UClass_AKTFGRomanceCharacterBase();
KTFGDRAMAPLUGIN_API UClass* Z_Construct_UClass_AKTFGRomanceCharacterBase_NoRegister();
KTFGDRAMAPLUGIN_API UClass* Z_Construct_UClass_UKTFGCharacterPersonalityData_NoRegister();
KTFGDRAMAPLUGIN_API UClass* Z_Construct_UClass_UKTFGEmotionComponent_NoRegister();
KTFGDRAMAPLUGIN_API UClass* Z_Construct_UClass_UKTFGRelationshipComponent_NoRegister();
KTFGDRAMAPLUGIN_API UEnum* Z_Construct_UEnum_KTFGDramaPlugin_EKTFGRomanceGender();
KTFGDRAMAPLUGIN_API UEnum* Z_Construct_UEnum_KTFGDramaPlugin_EKTFGRomanceRole();
UPackage* Z_Construct_UPackage__Script_KTFGDramaPlugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EKTFGRomanceGender ********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EKTFGRomanceGender;
static UEnum* EKTFGRomanceGender_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EKTFGRomanceGender.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EKTFGRomanceGender.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_KTFGDramaPlugin_EKTFGRomanceGender, (UObject*)Z_Construct_UPackage__Script_KTFGDramaPlugin(), TEXT("EKTFGRomanceGender"));
	}
	return Z_Registration_Info_UEnum_EKTFGRomanceGender.OuterSingleton;
}
template<> KTFGDRAMAPLUGIN_API UEnum* StaticEnum<EKTFGRomanceGender>()
{
	return EKTFGRomanceGender_StaticEnum();
}
struct Z_Construct_UEnum_KTFGDramaPlugin_EKTFGRomanceGender_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** G\xc3\xa9nero narrativo del personaje. Puede usarse para filtros de di\xc3\xa1logo o UI. */" },
		{ "Female.DisplayName", "Female" },
		{ "Female.Name", "EKTFGRomanceGender::Female" },
		{ "Male.DisplayName", "Male" },
		{ "Male.Name", "EKTFGRomanceGender::Male" },
		{ "ModuleRelativePath", "Public/KTFGCharacters/KTFGRomanceCharacterBase.h" },
		{ "Neutral.DisplayName", "Neutral" },
		{ "Neutral.Name", "EKTFGRomanceGender::Neutral" },
		{ "ToolTip", "G\xc3\xa9nero narrativo del personaje. Puede usarse para filtros de di\xc3\xa1logo o UI." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EKTFGRomanceGender::Male", (int64)EKTFGRomanceGender::Male },
		{ "EKTFGRomanceGender::Female", (int64)EKTFGRomanceGender::Female },
		{ "EKTFGRomanceGender::Neutral", (int64)EKTFGRomanceGender::Neutral },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_KTFGDramaPlugin_EKTFGRomanceGender_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_KTFGDramaPlugin,
	nullptr,
	"EKTFGRomanceGender",
	"EKTFGRomanceGender",
	Z_Construct_UEnum_KTFGDramaPlugin_EKTFGRomanceGender_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_KTFGDramaPlugin_EKTFGRomanceGender_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_KTFGDramaPlugin_EKTFGRomanceGender_Statics::Enum_MetaDataParams), Z_Construct_UEnum_KTFGDramaPlugin_EKTFGRomanceGender_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_KTFGDramaPlugin_EKTFGRomanceGender()
{
	if (!Z_Registration_Info_UEnum_EKTFGRomanceGender.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EKTFGRomanceGender.InnerSingleton, Z_Construct_UEnum_KTFGDramaPlugin_EKTFGRomanceGender_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EKTFGRomanceGender.InnerSingleton;
}
// ********** End Enum EKTFGRomanceGender **********************************************************

// ********** Begin Enum EKTFGRomanceRole **********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EKTFGRomanceRole;
static UEnum* EKTFGRomanceRole_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EKTFGRomanceRole.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EKTFGRomanceRole.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_KTFGDramaPlugin_EKTFGRomanceRole, (UObject*)Z_Construct_UPackage__Script_KTFGDramaPlugin(), TEXT("EKTFGRomanceRole"));
	}
	return Z_Registration_Info_UEnum_EKTFGRomanceRole.OuterSingleton;
}
template<> KTFGDRAMAPLUGIN_API UEnum* StaticEnum<EKTFGRomanceRole>()
{
	return EKTFGRomanceRole_StaticEnum();
}
struct Z_Construct_UEnum_KTFGDramaPlugin_EKTFGRomanceRole_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Rol narrativo del personaje dentro del arco rom\xc3\xa1ntico. */" },
		{ "MainLead.DisplayName", "Main Lead" },
		{ "MainLead.Name", "EKTFGRomanceRole::MainLead" },
		{ "ModuleRelativePath", "Public/KTFGCharacters/KTFGRomanceCharacterBase.h" },
		{ "SecondaryLead.DisplayName", "Secondary Lead" },
		{ "SecondaryLead.Name", "EKTFGRomanceRole::SecondaryLead" },
		{ "ToolTip", "Rol narrativo del personaje dentro del arco rom\xc3\xa1ntico." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EKTFGRomanceRole::MainLead", (int64)EKTFGRomanceRole::MainLead },
		{ "EKTFGRomanceRole::SecondaryLead", (int64)EKTFGRomanceRole::SecondaryLead },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_KTFGDramaPlugin_EKTFGRomanceRole_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_KTFGDramaPlugin,
	nullptr,
	"EKTFGRomanceRole",
	"EKTFGRomanceRole",
	Z_Construct_UEnum_KTFGDramaPlugin_EKTFGRomanceRole_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_KTFGDramaPlugin_EKTFGRomanceRole_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_KTFGDramaPlugin_EKTFGRomanceRole_Statics::Enum_MetaDataParams), Z_Construct_UEnum_KTFGDramaPlugin_EKTFGRomanceRole_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_KTFGDramaPlugin_EKTFGRomanceRole()
{
	if (!Z_Registration_Info_UEnum_EKTFGRomanceRole.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EKTFGRomanceRole.InnerSingleton, Z_Construct_UEnum_KTFGDramaPlugin_EKTFGRomanceRole_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EKTFGRomanceRole.InnerSingleton;
}
// ********** End Enum EKTFGRomanceRole ************************************************************

// ********** Begin Class AKTFGRomanceCharacterBase Function ApplyPersonalityBaseLineToEmotions ****
struct Z_Construct_UFunction_AKTFGRomanceCharacterBase_ApplyPersonalityBaseLineToEmotions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "KTFG|Character" },
		{ "Comment", "/** Aplica los valores emocionales base derivados de PersonalityData.\n     *  \xc3\x9atil para inicializaciones manuales fuera del flujo autom\xc3\xa1tico del Subsistema. */" },
		{ "ModuleRelativePath", "Public/KTFGCharacters/KTFGRomanceCharacterBase.h" },
		{ "ToolTip", "Aplica los valores emocionales base derivados de PersonalityData.\n\xc3\x9atil para inicializaciones manuales fuera del flujo autom\xc3\xa1tico del Subsistema." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AKTFGRomanceCharacterBase_ApplyPersonalityBaseLineToEmotions_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AKTFGRomanceCharacterBase, nullptr, "ApplyPersonalityBaseLineToEmotions", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AKTFGRomanceCharacterBase_ApplyPersonalityBaseLineToEmotions_Statics::Function_MetaDataParams), Z_Construct_UFunction_AKTFGRomanceCharacterBase_ApplyPersonalityBaseLineToEmotions_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AKTFGRomanceCharacterBase_ApplyPersonalityBaseLineToEmotions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AKTFGRomanceCharacterBase_ApplyPersonalityBaseLineToEmotions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AKTFGRomanceCharacterBase::execApplyPersonalityBaseLineToEmotions)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyPersonalityBaseLineToEmotions();
	P_NATIVE_END;
}
// ********** End Class AKTFGRomanceCharacterBase Function ApplyPersonalityBaseLineToEmotions ******

// ********** Begin Class AKTFGRomanceCharacterBase Function GetEmotionComponent *******************
struct Z_Construct_UFunction_AKTFGRomanceCharacterBase_GetEmotionComponent_Statics
{
	struct KTFGRomanceCharacterBase_eventGetEmotionComponent_Parms
	{
		UKTFGEmotionComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "KTFG|Character" },
		{ "Comment", "/** Acceso r\xc3\xa1pido al EmotionComponent. Equivalente a FindComponentByClass pero tipado. */" },
		{ "ModuleRelativePath", "Public/KTFGCharacters/KTFGRomanceCharacterBase.h" },
		{ "ToolTip", "Acceso r\xc3\xa1pido al EmotionComponent. Equivalente a FindComponentByClass pero tipado." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AKTFGRomanceCharacterBase_GetEmotionComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KTFGRomanceCharacterBase_eventGetEmotionComponent_Parms, ReturnValue), Z_Construct_UClass_UKTFGEmotionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AKTFGRomanceCharacterBase_GetEmotionComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKTFGRomanceCharacterBase_GetEmotionComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AKTFGRomanceCharacterBase_GetEmotionComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AKTFGRomanceCharacterBase_GetEmotionComponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AKTFGRomanceCharacterBase, nullptr, "GetEmotionComponent", Z_Construct_UFunction_AKTFGRomanceCharacterBase_GetEmotionComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AKTFGRomanceCharacterBase_GetEmotionComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AKTFGRomanceCharacterBase_GetEmotionComponent_Statics::KTFGRomanceCharacterBase_eventGetEmotionComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AKTFGRomanceCharacterBase_GetEmotionComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AKTFGRomanceCharacterBase_GetEmotionComponent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AKTFGRomanceCharacterBase_GetEmotionComponent_Statics::KTFGRomanceCharacterBase_eventGetEmotionComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AKTFGRomanceCharacterBase_GetEmotionComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AKTFGRomanceCharacterBase_GetEmotionComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AKTFGRomanceCharacterBase::execGetEmotionComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UKTFGEmotionComponent**)Z_Param__Result=P_THIS->GetEmotionComponent();
	P_NATIVE_END;
}
// ********** End Class AKTFGRomanceCharacterBase Function GetEmotionComponent *********************

// ********** Begin Class AKTFGRomanceCharacterBase ************************************************
void AKTFGRomanceCharacterBase::StaticRegisterNativesAKTFGRomanceCharacterBase()
{
	UClass* Class = AKTFGRomanceCharacterBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyPersonalityBaseLineToEmotions", &AKTFGRomanceCharacterBase::execApplyPersonalityBaseLineToEmotions },
		{ "GetEmotionComponent", &AKTFGRomanceCharacterBase::execGetEmotionComponent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AKTFGRomanceCharacterBase;
UClass* AKTFGRomanceCharacterBase::GetPrivateStaticClass()
{
	using TClass = AKTFGRomanceCharacterBase;
	if (!Z_Registration_Info_UClass_AKTFGRomanceCharacterBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("KTFGRomanceCharacterBase"),
			Z_Registration_Info_UClass_AKTFGRomanceCharacterBase.InnerSingleton,
			StaticRegisterNativesAKTFGRomanceCharacterBase,
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
	return Z_Registration_Info_UClass_AKTFGRomanceCharacterBase.InnerSingleton;
}
UClass* Z_Construct_UClass_AKTFGRomanceCharacterBase_NoRegister()
{
	return AKTFGRomanceCharacterBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AKTFGRomanceCharacterBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// \xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\n// CLASE BASE\n// \xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\n" },
		{ "IncludePath", "KTFGCharacters/KTFGRomanceCharacterBase.h" },
		{ "ModuleRelativePath", "Public/KTFGCharacters/KTFGRomanceCharacterBase.h" },
		{ "ToolTip", "\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\nCLASE BASE\n\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneRoot_MetaData[] = {
		{ "Category", "KTFG|Components" },
		{ "Comment", "// \xe2\x94\x80\xe2\x94\x80 Componentes \xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/KTFGCharacters/KTFGRomanceCharacterBase.h" },
		{ "ToolTip", "\xe2\x94\x80\xe2\x94\x80 Componentes \xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80\xe2\x94\x80" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EmotionComponent_MetaData[] = {
		{ "Category", "KTFG|Components" },
		{ "Comment", "/** Gestiona el estado emocional (Affection, Trust, Pride, Jealousy, Vulnerability). */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/KTFGCharacters/KTFGRomanceCharacterBase.h" },
		{ "ToolTip", "Gestiona el estado emocional (Affection, Trust, Pride, Jealousy, Vulnerability)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RelationshipComponent_MetaData[] = {
		{ "Category", "KTFG|Components" },
		{ "Comment", "/** Gestiona la l\xc3\xb3gica de la relaci\xc3\xb3n rom\xc3\xa1ntica: score, fase, tropo y eventos. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/KTFGCharacters/KTFGRomanceCharacterBase.h" },
		{ "ToolTip", "Gestiona la l\xc3\xb3gica de la relaci\xc3\xb3n rom\xc3\xa1ntica: score, fase, tropo y eventos." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterID_MetaData[] = {
		{ "Category", "KTFG|Identity" },
		{ "ModuleRelativePath", "Public/KTFGCharacters/KTFGRomanceCharacterBase.h" },
		{ "ToolTip", "ID \xc3\xbanico del personaje. Debe coincidir con el ID en KTFGRelationshipConfigData." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "KTFG|Identity" },
		{ "Comment", "/** Nombre visible en UI y logs. No se usa internamente para el enlace. */" },
		{ "ModuleRelativePath", "Public/KTFGCharacters/KTFGRomanceCharacterBase.h" },
		{ "ToolTip", "Nombre visible en UI y logs. No se usa internamente para el enlace." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterGender_MetaData[] = {
		{ "Category", "KTFG|Identity" },
		{ "ModuleRelativePath", "Public/KTFGCharacters/KTFGRomanceCharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterRole_MetaData[] = {
		{ "Category", "KTFG|Identity" },
		{ "ModuleRelativePath", "Public/KTFGCharacters/KTFGRomanceCharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PersonalityData_MetaData[] = {
		{ "Category", "KTFG|Identity" },
		{ "Comment", "/** Rasgos de personalidad que modulan c\xc3\xb3mo las situaciones afectan a este personaje. */" },
		{ "ModuleRelativePath", "Public/KTFGCharacters/KTFGRomanceCharacterBase.h" },
		{ "ToolTip", "Rasgos de personalidad que modulan c\xc3\xb3mo las situaciones afectan a este personaje." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PairID_MetaData[] = {
		{ "Category", "KTFG|Identity" },
		{ "Comment", "/** ID de pareja (legacy). En el flujo con Subsistema el emparejamiento\n     *  se gestiona a trav\xc3\xa9s de KTFGRelationshipConfigData, no de este campo. */" },
		{ "ModuleRelativePath", "Public/KTFGCharacters/KTFGRomanceCharacterBase.h" },
		{ "ToolTip", "ID de pareja (legacy). En el flujo con Subsistema el emparejamiento\nse gestiona a trav\xc3\xa9s de KTFGRelationshipConfigData, no de este campo." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneRoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EmotionComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RelationshipComponent;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterID;
	static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CharacterGender_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CharacterGender;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CharacterRole_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CharacterRole;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PersonalityData;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PairID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AKTFGRomanceCharacterBase_ApplyPersonalityBaseLineToEmotions, "ApplyPersonalityBaseLineToEmotions" }, // 4272472551
		{ &Z_Construct_UFunction_AKTFGRomanceCharacterBase_GetEmotionComponent, "GetEmotionComponent" }, // 2528820882
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKTFGRomanceCharacterBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKTFGRomanceCharacterBase_Statics::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKTFGRomanceCharacterBase, SceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneRoot_MetaData), NewProp_SceneRoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKTFGRomanceCharacterBase_Statics::NewProp_EmotionComponent = { "EmotionComponent", nullptr, (EPropertyFlags)0x001000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKTFGRomanceCharacterBase, EmotionComponent), Z_Construct_UClass_UKTFGEmotionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EmotionComponent_MetaData), NewProp_EmotionComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKTFGRomanceCharacterBase_Statics::NewProp_RelationshipComponent = { "RelationshipComponent", nullptr, (EPropertyFlags)0x001000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKTFGRomanceCharacterBase, RelationshipComponent), Z_Construct_UClass_UKTFGRelationshipComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RelationshipComponent_MetaData), NewProp_RelationshipComponent_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AKTFGRomanceCharacterBase_Statics::NewProp_CharacterID = { "CharacterID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKTFGRomanceCharacterBase, CharacterID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterID_MetaData), NewProp_CharacterID_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_AKTFGRomanceCharacterBase_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKTFGRomanceCharacterBase, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AKTFGRomanceCharacterBase_Statics::NewProp_CharacterGender_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AKTFGRomanceCharacterBase_Statics::NewProp_CharacterGender = { "CharacterGender", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKTFGRomanceCharacterBase, CharacterGender), Z_Construct_UEnum_KTFGDramaPlugin_EKTFGRomanceGender, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterGender_MetaData), NewProp_CharacterGender_MetaData) }; // 2542959095
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AKTFGRomanceCharacterBase_Statics::NewProp_CharacterRole_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AKTFGRomanceCharacterBase_Statics::NewProp_CharacterRole = { "CharacterRole", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKTFGRomanceCharacterBase, CharacterRole), Z_Construct_UEnum_KTFGDramaPlugin_EKTFGRomanceRole, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterRole_MetaData), NewProp_CharacterRole_MetaData) }; // 1111410154
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKTFGRomanceCharacterBase_Statics::NewProp_PersonalityData = { "PersonalityData", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKTFGRomanceCharacterBase, PersonalityData), Z_Construct_UClass_UKTFGCharacterPersonalityData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PersonalityData_MetaData), NewProp_PersonalityData_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AKTFGRomanceCharacterBase_Statics::NewProp_PairID = { "PairID", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKTFGRomanceCharacterBase, PairID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PairID_MetaData), NewProp_PairID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AKTFGRomanceCharacterBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKTFGRomanceCharacterBase_Statics::NewProp_SceneRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKTFGRomanceCharacterBase_Statics::NewProp_EmotionComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKTFGRomanceCharacterBase_Statics::NewProp_RelationshipComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKTFGRomanceCharacterBase_Statics::NewProp_CharacterID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKTFGRomanceCharacterBase_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKTFGRomanceCharacterBase_Statics::NewProp_CharacterGender_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKTFGRomanceCharacterBase_Statics::NewProp_CharacterGender,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKTFGRomanceCharacterBase_Statics::NewProp_CharacterRole_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKTFGRomanceCharacterBase_Statics::NewProp_CharacterRole,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKTFGRomanceCharacterBase_Statics::NewProp_PersonalityData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKTFGRomanceCharacterBase_Statics::NewProp_PairID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AKTFGRomanceCharacterBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AKTFGRomanceCharacterBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_KTFGDramaPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AKTFGRomanceCharacterBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AKTFGRomanceCharacterBase_Statics::ClassParams = {
	&AKTFGRomanceCharacterBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AKTFGRomanceCharacterBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AKTFGRomanceCharacterBase_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AKTFGRomanceCharacterBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AKTFGRomanceCharacterBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AKTFGRomanceCharacterBase()
{
	if (!Z_Registration_Info_UClass_AKTFGRomanceCharacterBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AKTFGRomanceCharacterBase.OuterSingleton, Z_Construct_UClass_AKTFGRomanceCharacterBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AKTFGRomanceCharacterBase.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AKTFGRomanceCharacterBase);
AKTFGRomanceCharacterBase::~AKTFGRomanceCharacterBase() {}
// ********** End Class AKTFGRomanceCharacterBase **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Carla_Documents_K_TFG_DRAMA_KTFGDemo_Build_KTFGDramaPlugin_HostProject_Plugins_KTFGDramaPlugin_Source_KTFGDramaPlugin_Public_KTFGCharacters_KTFGRomanceCharacterBase_h__Script_KTFGDramaPlugin_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EKTFGRomanceGender_StaticEnum, TEXT("EKTFGRomanceGender"), &Z_Registration_Info_UEnum_EKTFGRomanceGender, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2542959095U) },
		{ EKTFGRomanceRole_StaticEnum, TEXT("EKTFGRomanceRole"), &Z_Registration_Info_UEnum_EKTFGRomanceRole, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1111410154U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AKTFGRomanceCharacterBase, AKTFGRomanceCharacterBase::StaticClass, TEXT("AKTFGRomanceCharacterBase"), &Z_Registration_Info_UClass_AKTFGRomanceCharacterBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AKTFGRomanceCharacterBase), 162825247U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Carla_Documents_K_TFG_DRAMA_KTFGDemo_Build_KTFGDramaPlugin_HostProject_Plugins_KTFGDramaPlugin_Source_KTFGDramaPlugin_Public_KTFGCharacters_KTFGRomanceCharacterBase_h__Script_KTFGDramaPlugin_3320573633(TEXT("/Script/KTFGDramaPlugin"),
	Z_CompiledInDeferFile_FID_Users_Carla_Documents_K_TFG_DRAMA_KTFGDemo_Build_KTFGDramaPlugin_HostProject_Plugins_KTFGDramaPlugin_Source_KTFGDramaPlugin_Public_KTFGCharacters_KTFGRomanceCharacterBase_h__Script_KTFGDramaPlugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Carla_Documents_K_TFG_DRAMA_KTFGDemo_Build_KTFGDramaPlugin_HostProject_Plugins_KTFGDramaPlugin_Source_KTFGDramaPlugin_Public_KTFGCharacters_KTFGRomanceCharacterBase_h__Script_KTFGDramaPlugin_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Carla_Documents_K_TFG_DRAMA_KTFGDemo_Build_KTFGDramaPlugin_HostProject_Plugins_KTFGDramaPlugin_Source_KTFGDramaPlugin_Public_KTFGCharacters_KTFGRomanceCharacterBase_h__Script_KTFGDramaPlugin_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Carla_Documents_K_TFG_DRAMA_KTFGDemo_Build_KTFGDramaPlugin_HostProject_Plugins_KTFGDramaPlugin_Source_KTFGDramaPlugin_Public_KTFGCharacters_KTFGRomanceCharacterBase_h__Script_KTFGDramaPlugin_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
