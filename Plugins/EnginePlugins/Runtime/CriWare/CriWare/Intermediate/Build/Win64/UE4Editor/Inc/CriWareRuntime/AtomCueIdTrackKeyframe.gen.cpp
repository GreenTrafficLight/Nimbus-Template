// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AtomCueIdTrackKeyframe.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomCueIdTrackKeyframe() {}
// Cross Module References
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomCueIdTrackKeyframe();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
class UScriptStruct* FAtomCueIdTrackKeyframe::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAtomCueIdTrackKeyframe_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomCueIdTrackKeyframe, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomCueIdTrackKeyframe"), sizeof(FAtomCueIdTrackKeyframe), Get_Z_Construct_UScriptStruct_FAtomCueIdTrackKeyframe_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtomCueIdTrackKeyframe(FAtomCueIdTrackKeyframe::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("AtomCueIdTrackKeyframe"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomCueIdTrackKeyframe
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomCueIdTrackKeyframe()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtomCueIdTrackKeyframe")),new UScriptStruct::TCppStructOps<FAtomCueIdTrackKeyframe>);
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomCueIdTrackKeyframe;
	UScriptStruct* Z_Construct_UScriptStruct_FAtomCueIdTrackKeyframe()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtomCueIdTrackKeyframe_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtomCueIdTrackKeyframe"), sizeof(FAtomCueIdTrackKeyframe), Get_Z_Construct_UScriptStruct_FAtomCueIdTrackKeyframe_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/AtomCueIdTrackKeyframe.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomCueIdTrackKeyframe>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CueId_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AtomCueIdTrackKeyframe" },
				{ "ModuleRelativePath", "Public/AtomCueIdTrackKeyframe.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_CueId = { UE4CodeGen_Private::EPropertyClass::Int, "CueId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAtomCueIdTrackKeyframe, CueId), METADATA_PARAMS(NewProp_CueId_MetaData, ARRAY_COUNT(NewProp_CueId_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AtomCueIdTrackKeyframe" },
				{ "ModuleRelativePath", "Public/AtomCueIdTrackKeyframe.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time = { UE4CodeGen_Private::EPropertyClass::Float, "Time", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAtomCueIdTrackKeyframe, Time), METADATA_PARAMS(NewProp_Time_MetaData, ARRAY_COUNT(NewProp_Time_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CueId,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Time,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AtomCueIdTrackKeyframe",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FAtomCueIdTrackKeyframe),
				alignof(FAtomCueIdTrackKeyframe),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtomCueIdTrackKeyframe_CRC() { return 1308861770U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
