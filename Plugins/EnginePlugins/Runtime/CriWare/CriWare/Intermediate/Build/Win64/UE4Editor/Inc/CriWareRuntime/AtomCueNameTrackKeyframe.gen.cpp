// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AtomCueNameTrackKeyframe.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomCueNameTrackKeyframe() {}
// Cross Module References
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomCueNameTrackKeyframe();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
class UScriptStruct* FAtomCueNameTrackKeyframe::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAtomCueNameTrackKeyframe_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomCueNameTrackKeyframe, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomCueNameTrackKeyframe"), sizeof(FAtomCueNameTrackKeyframe), Get_Z_Construct_UScriptStruct_FAtomCueNameTrackKeyframe_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtomCueNameTrackKeyframe(FAtomCueNameTrackKeyframe::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("AtomCueNameTrackKeyframe"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomCueNameTrackKeyframe
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomCueNameTrackKeyframe()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtomCueNameTrackKeyframe")),new UScriptStruct::TCppStructOps<FAtomCueNameTrackKeyframe>);
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomCueNameTrackKeyframe;
	UScriptStruct* Z_Construct_UScriptStruct_FAtomCueNameTrackKeyframe()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtomCueNameTrackKeyframe_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtomCueNameTrackKeyframe"), sizeof(FAtomCueNameTrackKeyframe), Get_Z_Construct_UScriptStruct_FAtomCueNameTrackKeyframe_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/AtomCueNameTrackKeyframe.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomCueNameTrackKeyframe>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CueName_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AtomCueNameTrackKeyframe" },
				{ "ModuleRelativePath", "Public/AtomCueNameTrackKeyframe.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_CueName = { UE4CodeGen_Private::EPropertyClass::Str, "CueName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAtomCueNameTrackKeyframe, CueName), METADATA_PARAMS(NewProp_CueName_MetaData, ARRAY_COUNT(NewProp_CueName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AtomCueNameTrackKeyframe" },
				{ "ModuleRelativePath", "Public/AtomCueNameTrackKeyframe.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time = { UE4CodeGen_Private::EPropertyClass::Float, "Time", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAtomCueNameTrackKeyframe, Time), METADATA_PARAMS(NewProp_Time_MetaData, ARRAY_COUNT(NewProp_Time_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CueName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Time,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AtomCueNameTrackKeyframe",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FAtomCueNameTrackKeyframe),
				alignof(FAtomCueNameTrackKeyframe),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtomCueNameTrackKeyframe_CRC() { return 4045570425U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
