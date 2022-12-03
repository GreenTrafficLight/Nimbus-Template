// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AtomTriggerRow.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomTriggerRow() {}
// Cross Module References
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomTriggerRow();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCue_NoRegister();
// End Cross Module References
class UScriptStruct* FAtomTriggerRow::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAtomTriggerRow_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomTriggerRow, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomTriggerRow"), sizeof(FAtomTriggerRow), Get_Z_Construct_UScriptStruct_FAtomTriggerRow_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtomTriggerRow(FAtomTriggerRow::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("AtomTriggerRow"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomTriggerRow
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomTriggerRow()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtomTriggerRow")),new UScriptStruct::TCppStructOps<FAtomTriggerRow>);
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomTriggerRow;
	UScriptStruct* Z_Construct_UScriptStruct_FAtomTriggerRow()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtomTriggerRow_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtomTriggerRow"), sizeof(FAtomTriggerRow), Get_Z_Construct_UScriptStruct_FAtomTriggerRow_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/AtomTriggerRow.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomTriggerRow>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cue_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AtomTriggerRow" },
				{ "ModuleRelativePath", "Public/AtomTriggerRow.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Cue = { UE4CodeGen_Private::EPropertyClass::Object, "Cue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAtomTriggerRow, Cue), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(NewProp_Cue_MetaData, ARRAY_COUNT(NewProp_Cue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bone_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AtomTriggerRow" },
				{ "ModuleRelativePath", "Public/AtomTriggerRow.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_Bone = { UE4CodeGen_Private::EPropertyClass::Name, "Bone", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAtomTriggerRow, Bone), METADATA_PARAMS(NewProp_Bone_MetaData, ARRAY_COUNT(NewProp_Bone_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AtomTriggerRow" },
				{ "ModuleRelativePath", "Public/AtomTriggerRow.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time = { UE4CodeGen_Private::EPropertyClass::Float, "Time", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAtomTriggerRow, Time), METADATA_PARAMS(NewProp_Time_MetaData, ARRAY_COUNT(NewProp_Time_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Cue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Bone,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Time,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
				Z_Construct_UScriptStruct_FTableRowBase,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AtomTriggerRow",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAtomTriggerRow),
				alignof(FAtomTriggerRow),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtomTriggerRow_CRC() { return 1446813922U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
