// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/ECustomKeyMouseIconType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECustomKeyMouseIconType() {}
// Cross Module References
	CUSTOMKEYMOUSE_API UEnum* Z_Construct_UEnum_CustomKeyMouse_ECustomKeyMouseIconType();
	UPackage* Z_Construct_UPackage__Script_CustomKeyMouse();
// End Cross Module References
	static UEnum* ECustomKeyMouseIconType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CustomKeyMouse_ECustomKeyMouseIconType, Z_Construct_UPackage__Script_CustomKeyMouse(), TEXT("ECustomKeyMouseIconType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECustomKeyMouseIconType(ECustomKeyMouseIconType_StaticEnum, TEXT("/Script/CustomKeyMouse"), TEXT("ECustomKeyMouseIconType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CustomKeyMouse_ECustomKeyMouseIconType_CRC() { return 1806581818U; }
	UEnum* Z_Construct_UEnum_CustomKeyMouse_ECustomKeyMouseIconType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CustomKeyMouse();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECustomKeyMouseIconType"), 0, Get_Z_Construct_UEnum_CustomKeyMouse_ECustomKeyMouseIconType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECustomKeyMouseIconType::CKM_IconTypeGamepad", (int64)ECustomKeyMouseIconType::CKM_IconTypeGamepad },
				{ "ECustomKeyMouseIconType::CKM_IconTypeKeyboardEnglish", (int64)ECustomKeyMouseIconType::CKM_IconTypeKeyboardEnglish },
				{ "ECustomKeyMouseIconType::CKM_IconTypeKeyboardFrench", (int64)ECustomKeyMouseIconType::CKM_IconTypeKeyboardFrench },
				{ "ECustomKeyMouseIconType::CKM_IconTypeKeyboardGerman", (int64)ECustomKeyMouseIconType::CKM_IconTypeKeyboardGerman },
				{ "ECustomKeyMouseIconType::CKM_IconTypeKeyboardItalian", (int64)ECustomKeyMouseIconType::CKM_IconTypeKeyboardItalian },
				{ "ECustomKeyMouseIconType::CKM_IconTypeKeyboardJapanese", (int64)ECustomKeyMouseIconType::CKM_IconTypeKeyboardJapanese },
				{ "ECustomKeyMouseIconType::CKM_IconTypeKeyboardSpanish", (int64)ECustomKeyMouseIconType::CKM_IconTypeKeyboardSpanish },
				{ "ECustomKeyMouseIconType::CKM_IconTypeKeyboardRussian", (int64)ECustomKeyMouseIconType::CKM_IconTypeKeyboardRussian },
				{ "ECustomKeyMouseIconType::CKM_MAX", (int64)ECustomKeyMouseIconType::CKM_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CKM_MAX.Hidden", "" },
				{ "ModuleRelativePath", "Public/ECustomKeyMouseIconType.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CustomKeyMouse,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ECustomKeyMouseIconType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ECustomKeyMouseIconType",
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
