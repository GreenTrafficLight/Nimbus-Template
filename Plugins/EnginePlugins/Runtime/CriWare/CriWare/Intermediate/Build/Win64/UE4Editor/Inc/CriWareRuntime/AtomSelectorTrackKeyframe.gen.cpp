// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AtomSelectorTrackKeyframe.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomSelectorTrackKeyframe() {}
// Cross Module References
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomSelectorTrackKeyframe();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
class UScriptStruct* FAtomSelectorTrackKeyframe::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAtomSelectorTrackKeyframe_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomSelectorTrackKeyframe, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomSelectorTrackKeyframe"), sizeof(FAtomSelectorTrackKeyframe), Get_Z_Construct_UScriptStruct_FAtomSelectorTrackKeyframe_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtomSelectorTrackKeyframe(FAtomSelectorTrackKeyframe::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("AtomSelectorTrackKeyframe"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomSelectorTrackKeyframe
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomSelectorTrackKeyframe()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtomSelectorTrackKeyframe")),new UScriptStruct::TCppStructOps<FAtomSelectorTrackKeyframe>);
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomSelectorTrackKeyframe;
	UScriptStruct* Z_Construct_UScriptStruct_FAtomSelectorTrackKeyframe()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtomSelectorTrackKeyframe_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtomSelectorTrackKeyframe"), sizeof(FAtomSelectorTrackKeyframe), Get_Z_Construct_UScriptStruct_FAtomSelectorTrackKeyframe_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/AtomSelectorTrackKeyframe.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomSelectorTrackKeyframe>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectorLabel_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AtomSelectorTrackKeyframe" },
				{ "ModuleRelativePath", "Public/AtomSelectorTrackKeyframe.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_SelectorLabel = { UE4CodeGen_Private::EPropertyClass::Str, "SelectorLabel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAtomSelectorTrackKeyframe, SelectorLabel), METADATA_PARAMS(NewProp_SelectorLabel_MetaData, ARRAY_COUNT(NewProp_SelectorLabel_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AtomSelectorTrackKeyframe" },
				{ "ModuleRelativePath", "Public/AtomSelectorTrackKeyframe.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time = { UE4CodeGen_Private::EPropertyClass::Float, "Time", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAtomSelectorTrackKeyframe, Time), METADATA_PARAMS(NewProp_Time_MetaData, ARRAY_COUNT(NewProp_Time_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SelectorLabel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Time,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AtomSelectorTrackKeyframe",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FAtomSelectorTrackKeyframe),
				alignof(FAtomSelectorTrackKeyframe),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtomSelectorTrackKeyframe_CRC() { return 1479898210U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
