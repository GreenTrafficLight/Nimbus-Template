// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/EAtomSoundRendererType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAtomSoundRendererType() {}
// Cross Module References
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomSoundRendererType();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	static UEnum* EAtomSoundRendererType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CriWareRuntime_EAtomSoundRendererType, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("EAtomSoundRendererType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAtomSoundRendererType(EAtomSoundRendererType_StaticEnum, TEXT("/Script/CriWareRuntime"), TEXT("EAtomSoundRendererType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CriWareRuntime_EAtomSoundRendererType_CRC() { return 3231641317U; }
	UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomSoundRendererType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAtomSoundRendererType"), 0, Get_Z_Construct_UEnum_CriWareRuntime_EAtomSoundRendererType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAtomSoundRendererType::Any", (int64)EAtomSoundRendererType::Any },
				{ "EAtomSoundRendererType::Native", (int64)EAtomSoundRendererType::Native },
				{ "EAtomSoundRendererType::Asr", (int64)EAtomSoundRendererType::Asr },
				{ "EAtomSoundRendererType::Hardware2", (int64)EAtomSoundRendererType::Hardware2 },
				{ "EAtomSoundRendererType::Hardware3", (int64)EAtomSoundRendererType::Hardware3 },
				{ "EAtomSoundRendererType::Hardware4", (int64)EAtomSoundRendererType::Hardware4 },
				{ "EAtomSoundRendererType::Pad", (int64)EAtomSoundRendererType::Pad },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EAtomSoundRendererType.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CriWareRuntime,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EAtomSoundRendererType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EAtomSoundRendererType::Type",
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
