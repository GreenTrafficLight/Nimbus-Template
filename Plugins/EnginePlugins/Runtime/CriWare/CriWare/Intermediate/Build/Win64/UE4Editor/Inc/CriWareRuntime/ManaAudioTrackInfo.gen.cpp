// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/ManaAudioTrackInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManaAudioTrackInfo() {}
// Cross Module References
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FManaAudioTrackInfo();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EManaSoundType();
// End Cross Module References
class UScriptStruct* FManaAudioTrackInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FManaAudioTrackInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FManaAudioTrackInfo, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("ManaAudioTrackInfo"), sizeof(FManaAudioTrackInfo), Get_Z_Construct_UScriptStruct_FManaAudioTrackInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FManaAudioTrackInfo(FManaAudioTrackInfo::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("ManaAudioTrackInfo"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFManaAudioTrackInfo
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFManaAudioTrackInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ManaAudioTrackInfo")),new UScriptStruct::TCppStructOps<FManaAudioTrackInfo>);
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFManaAudioTrackInfo;
	UScriptStruct* Z_Construct_UScriptStruct_FManaAudioTrackInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FManaAudioTrackInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ManaAudioTrackInfo"), sizeof(FManaAudioTrackInfo), Get_Z_Construct_UScriptStruct_FManaAudioTrackInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ManaAudioTrackInfo.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FManaAudioTrackInfo>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "ManaAudioTrackInfo" },
				{ "ModuleRelativePath", "Public/ManaAudioTrackInfo.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type = { UE4CodeGen_Private::EPropertyClass::Enum, "Type", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FManaAudioTrackInfo, Type), Z_Construct_UEnum_CriWareRuntime_EManaSoundType, METADATA_PARAMS(NewProp_Type_MetaData, ARRAY_COUNT(NewProp_Type_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAmbisonics_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "ManaAudioTrackInfo" },
				{ "ModuleRelativePath", "Public/ManaAudioTrackInfo.h" },
			};
#endif
			auto NewProp_bIsAmbisonics_SetBit = [](void* Obj){ ((FManaAudioTrackInfo*)Obj)->bIsAmbisonics = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAmbisonics = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsAmbisonics", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FManaAudioTrackInfo), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsAmbisonics_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsAmbisonics_MetaData, ARRAY_COUNT(NewProp_bIsAmbisonics_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalSamples_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "ManaAudioTrackInfo" },
				{ "ModuleRelativePath", "Public/ManaAudioTrackInfo.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalSamples = { UE4CodeGen_Private::EPropertyClass::Int, "TotalSamples", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FManaAudioTrackInfo, TotalSamples), METADATA_PARAMS(NewProp_TotalSamples_MetaData, ARRAY_COUNT(NewProp_TotalSamples_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SamplingRate_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "ManaAudioTrackInfo" },
				{ "ModuleRelativePath", "Public/ManaAudioTrackInfo.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SamplingRate = { UE4CodeGen_Private::EPropertyClass::Int, "SamplingRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FManaAudioTrackInfo, SamplingRate), METADATA_PARAMS(NewProp_SamplingRate_MetaData, ARRAY_COUNT(NewProp_SamplingRate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumChannels_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "ManaAudioTrackInfo" },
				{ "ModuleRelativePath", "Public/ManaAudioTrackInfo.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumChannels = { UE4CodeGen_Private::EPropertyClass::Int, "NumChannels", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FManaAudioTrackInfo, NumChannels), METADATA_PARAMS(NewProp_NumChannels_MetaData, ARRAY_COUNT(NewProp_NumChannels_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Type,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Type_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsAmbisonics,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TotalSamples,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SamplingRate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NumChannels,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ManaAudioTrackInfo",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FManaAudioTrackInfo),
				alignof(FManaAudioTrackInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FManaAudioTrackInfo_CRC() { return 4224092241U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
