// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/EQSimulRenderMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEQSimulRenderMode() {}
// Cross Module References
	TRUESKYPLUGIN_API UEnum* Z_Construct_UEnum_TrueSkyPlugin_EQSimulRenderMode();
	UPackage* Z_Construct_UPackage__Script_TrueSkyPlugin();
// End Cross Module References
	static UEnum* EQSimulRenderMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TrueSkyPlugin_EQSimulRenderMode, Z_Construct_UPackage__Script_TrueSkyPlugin(), TEXT("EQSimulRenderMode"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EQSimulRenderMode(EQSimulRenderMode_StaticEnum, TEXT("/Script/TrueSkyPlugin"), TEXT("EQSimulRenderMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TrueSkyPlugin_EQSimulRenderMode_CRC() { return 616592957U; }
	UEnum* Z_Construct_UEnum_TrueSkyPlugin_EQSimulRenderMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TrueSkyPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EQSimulRenderMode"), 0, Get_Z_Construct_UEnum_TrueSkyPlugin_EQSimulRenderMode_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EQSimulRenderMode::Default", (int64)EQSimulRenderMode::Default },
				{ "EQSimulRenderMode::Reproject", (int64)EQSimulRenderMode::Reproject },
				{ "EQSimulRenderMode::Checkerboard", (int64)EQSimulRenderMode::Checkerboard },
				{ "EQSimulRenderMode::VRMultiRes", (int64)EQSimulRenderMode::VRMultiRes },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EQSimulRenderMode.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TrueSkyPlugin,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EQSimulRenderMode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EQSimulRenderMode",
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
