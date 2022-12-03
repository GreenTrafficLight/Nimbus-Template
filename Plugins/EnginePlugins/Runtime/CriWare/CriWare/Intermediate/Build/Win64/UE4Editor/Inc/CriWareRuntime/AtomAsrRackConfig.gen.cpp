// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AtomAsrRackConfig.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomAsrRackConfig() {}
// Cross Module References
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomAsrRackConfig();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
class UScriptStruct* FAtomAsrRackConfig::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAtomAsrRackConfig_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomAsrRackConfig, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomAsrRackConfig"), sizeof(FAtomAsrRackConfig), Get_Z_Construct_UScriptStruct_FAtomAsrRackConfig_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtomAsrRackConfig(FAtomAsrRackConfig::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("AtomAsrRackConfig"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomAsrRackConfig
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomAsrRackConfig()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtomAsrRackConfig")),new UScriptStruct::TCppStructOps<FAtomAsrRackConfig>);
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomAsrRackConfig;
	UScriptStruct* Z_Construct_UScriptStruct_FAtomAsrRackConfig()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtomAsrRackConfig_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtomAsrRackConfig"), sizeof(FAtomAsrRackConfig), Get_Z_Construct_UScriptStruct_FAtomAsrRackConfig_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/AtomAsrRackConfig.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomAsrRackConfig>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundRendererType_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AtomAsrRackConfig" },
				{ "ModuleRelativePath", "Public/AtomAsrRackConfig.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SoundRendererType = { UE4CodeGen_Private::EPropertyClass::Int, "SoundRendererType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAtomAsrRackConfig, SoundRendererType), METADATA_PARAMS(NewProp_SoundRendererType_MetaData, ARRAY_COUNT(NewProp_SoundRendererType_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SoundRendererType,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AtomAsrRackConfig",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FAtomAsrRackConfig),
				alignof(FAtomAsrRackConfig),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtomAsrRackConfig_CRC() { return 366028178U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
