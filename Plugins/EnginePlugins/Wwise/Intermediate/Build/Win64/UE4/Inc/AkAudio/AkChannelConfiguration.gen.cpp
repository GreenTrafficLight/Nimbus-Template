// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AkChannelConfiguration.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkChannelConfiguration() {}
// Cross Module References
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_AkChannelConfiguration();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static UEnum* AkChannelConfiguration_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_AkChannelConfiguration, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkChannelConfiguration"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_AkChannelConfiguration(AkChannelConfiguration_StaticEnum, TEXT("/Script/AkAudio"), TEXT("AkChannelConfiguration"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AkAudio_AkChannelConfiguration_CRC() { return 1258310741U; }
	UEnum* Z_Construct_UEnum_AkAudio_AkChannelConfiguration()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("AkChannelConfiguration"), 0, Get_Z_Construct_UEnum_AkAudio_AkChannelConfiguration_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "AkChannelConfiguration::Ak_Parent", (int64)AkChannelConfiguration::Ak_Parent },
				{ "AkChannelConfiguration::Ak_1_0", (int64)AkChannelConfiguration::Ak_1_0 },
				{ "AkChannelConfiguration::Ak_2_0", (int64)AkChannelConfiguration::Ak_2_0 },
				{ "AkChannelConfiguration::Ak_3_0", (int64)AkChannelConfiguration::Ak_3_0 },
				{ "AkChannelConfiguration::Ak_4_0", (int64)AkChannelConfiguration::Ak_4_0 },
				{ "AkChannelConfiguration::Ak_5_1", (int64)AkChannelConfiguration::Ak_5_1 },
				{ "AkChannelConfiguration::Ak_7_1", (int64)AkChannelConfiguration::Ak_7_1 },
				{ "AkChannelConfiguration::Ak_5_1_2", (int64)AkChannelConfiguration::Ak_5_1_2 },
				{ "AkChannelConfiguration::Ak_7_1_2", (int64)AkChannelConfiguration::Ak_7_1_2 },
				{ "AkChannelConfiguration::Ak_7_1_4", (int64)AkChannelConfiguration::Ak_7_1_4 },
				{ "AkChannelConfiguration::Ak_Auro_9_1", (int64)AkChannelConfiguration::Ak_Auro_9_1 },
				{ "AkChannelConfiguration::Ak_Auro_10_1", (int64)AkChannelConfiguration::Ak_Auro_10_1 },
				{ "AkChannelConfiguration::Ak_Auro_11_1", (int64)AkChannelConfiguration::Ak_Auro_11_1 },
				{ "AkChannelConfiguration::Ak_Auro_13_1", (int64)AkChannelConfiguration::Ak_Auro_13_1 },
				{ "AkChannelConfiguration::Ak_Ambisonics_1st_order", (int64)AkChannelConfiguration::Ak_Ambisonics_1st_order },
				{ "AkChannelConfiguration::Ak_Ambisonics_2nd_order", (int64)AkChannelConfiguration::Ak_Ambisonics_2nd_order },
				{ "AkChannelConfiguration::Ak_Ambisonics_3rd_order", (int64)AkChannelConfiguration::Ak_Ambisonics_3rd_order },
				{ "AkChannelConfiguration::Ak_MAX", (int64)AkChannelConfiguration::Ak_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Ak_MAX.Hidden", "" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/AkChannelConfiguration.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"AkChannelConfiguration",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"AkChannelConfiguration",
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
