// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AtomTrackKeyframe.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomTrackKeyframe() {}
// Cross Module References
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomTrackKeyframe();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCue_NoRegister();
// End Cross Module References
class UScriptStruct* FAtomTrackKeyframe::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAtomTrackKeyframe_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomTrackKeyframe, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomTrackKeyframe"), sizeof(FAtomTrackKeyframe), Get_Z_Construct_UScriptStruct_FAtomTrackKeyframe_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtomTrackKeyframe(FAtomTrackKeyframe::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("AtomTrackKeyframe"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomTrackKeyframe
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomTrackKeyframe()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtomTrackKeyframe")),new UScriptStruct::TCppStructOps<FAtomTrackKeyframe>);
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomTrackKeyframe;
	UScriptStruct* Z_Construct_UScriptStruct_FAtomTrackKeyframe()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtomTrackKeyframe_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtomTrackKeyframe"), sizeof(FAtomTrackKeyframe), Get_Z_Construct_UScriptStruct_FAtomTrackKeyframe_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/AtomTrackKeyframe.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomTrackKeyframe>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cue_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AtomTrackKeyframe" },
				{ "ModuleRelativePath", "Public/AtomTrackKeyframe.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Cue = { UE4CodeGen_Private::EPropertyClass::Object, "Cue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAtomTrackKeyframe, Cue), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(NewProp_Cue_MetaData, ARRAY_COUNT(NewProp_Cue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AtomTrackKeyframe" },
				{ "ModuleRelativePath", "Public/AtomTrackKeyframe.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time = { UE4CodeGen_Private::EPropertyClass::Float, "Time", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAtomTrackKeyframe, Time), METADATA_PARAMS(NewProp_Time_MetaData, ARRAY_COUNT(NewProp_Time_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Cue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Time,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AtomTrackKeyframe",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FAtomTrackKeyframe),
				alignof(FAtomTrackKeyframe),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtomTrackKeyframe_CRC() { return 517015409U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
