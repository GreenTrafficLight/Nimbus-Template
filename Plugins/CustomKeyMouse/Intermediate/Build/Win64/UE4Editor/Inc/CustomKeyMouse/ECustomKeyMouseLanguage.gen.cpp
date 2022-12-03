// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/ECustomKeyMouseLanguage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECustomKeyMouseLanguage() {}
// Cross Module References
	CUSTOMKEYMOUSE_API UEnum* Z_Construct_UEnum_CustomKeyMouse_ECustomKeyMouseLanguage();
	UPackage* Z_Construct_UPackage__Script_CustomKeyMouse();
// End Cross Module References
	static UEnum* ECustomKeyMouseLanguage_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CustomKeyMouse_ECustomKeyMouseLanguage, Z_Construct_UPackage__Script_CustomKeyMouse(), TEXT("ECustomKeyMouseLanguage"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECustomKeyMouseLanguage(ECustomKeyMouseLanguage_StaticEnum, TEXT("/Script/CustomKeyMouse"), TEXT("ECustomKeyMouseLanguage"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CustomKeyMouse_ECustomKeyMouseLanguage_CRC() { return 2824105556U; }
	UEnum* Z_Construct_UEnum_CustomKeyMouse_ECustomKeyMouseLanguage()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CustomKeyMouse();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECustomKeyMouseLanguage"), 0, Get_Z_Construct_UEnum_CustomKeyMouse_ECustomKeyMouseLanguage_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECustomKeyMouseLanguage::CKM_LanguageEnglish", (int64)ECustomKeyMouseLanguage::CKM_LanguageEnglish },
				{ "ECustomKeyMouseLanguage::CKM_LanguageFrench", (int64)ECustomKeyMouseLanguage::CKM_LanguageFrench },
				{ "ECustomKeyMouseLanguage::CKM_LanguageGerman", (int64)ECustomKeyMouseLanguage::CKM_LanguageGerman },
				{ "ECustomKeyMouseLanguage::CKM_LanguageItalian", (int64)ECustomKeyMouseLanguage::CKM_LanguageItalian },
				{ "ECustomKeyMouseLanguage::CKM_LanguageJapanese", (int64)ECustomKeyMouseLanguage::CKM_LanguageJapanese },
				{ "ECustomKeyMouseLanguage::CKM_LanguageSpanish", (int64)ECustomKeyMouseLanguage::CKM_LanguageSpanish },
				{ "ECustomKeyMouseLanguage::CKM_LanguageRussian", (int64)ECustomKeyMouseLanguage::CKM_LanguageRussian },
				{ "ECustomKeyMouseLanguage::CKM_LanguageMax", (int64)ECustomKeyMouseLanguage::CKM_LanguageMax },
				{ "ECustomKeyMouseLanguage::CKM_MAX", (int64)ECustomKeyMouseLanguage::CKM_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CKM_MAX.Hidden", "" },
				{ "ModuleRelativePath", "Public/ECustomKeyMouseLanguage.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CustomKeyMouse,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ECustomKeyMouseLanguage",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ECustomKeyMouseLanguage",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
