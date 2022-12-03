// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AkAmbSoundCheckpointRecord.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkAmbSoundCheckpointRecord() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkAmbSoundCheckpointRecord();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
class UScriptStruct* FAkAmbSoundCheckpointRecord::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkAmbSoundCheckpointRecord_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkAmbSoundCheckpointRecord, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkAmbSoundCheckpointRecord"), sizeof(FAkAmbSoundCheckpointRecord), Get_Z_Construct_UScriptStruct_FAkAmbSoundCheckpointRecord_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkAmbSoundCheckpointRecord(FAkAmbSoundCheckpointRecord::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkAmbSoundCheckpointRecord"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkAmbSoundCheckpointRecord
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkAmbSoundCheckpointRecord()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AkAmbSoundCheckpointRecord")),new UScriptStruct::TCppStructOps<FAkAmbSoundCheckpointRecord>);
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkAmbSoundCheckpointRecord;
	UScriptStruct* Z_Construct_UScriptStruct_FAkAmbSoundCheckpointRecord()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkAmbSoundCheckpointRecord_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkAmbSoundCheckpointRecord"), sizeof(FAkAmbSoundCheckpointRecord), Get_Z_Construct_UScriptStruct_FAkAmbSoundCheckpointRecord_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/AkAmbSoundCheckpointRecord.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkAmbSoundCheckpointRecord>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCurrentlyPlaying_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkAmbSoundCheckpointRecord" },
				{ "ModuleRelativePath", "Public/AkAmbSoundCheckpointRecord.h" },
			};
#endif
			auto NewProp_bCurrentlyPlaying_SetBit = [](void* Obj){ ((FAkAmbSoundCheckpointRecord*)Obj)->bCurrentlyPlaying = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCurrentlyPlaying = { UE4CodeGen_Private::EPropertyClass::Bool, "bCurrentlyPlaying", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAkAmbSoundCheckpointRecord), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCurrentlyPlaying_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCurrentlyPlaying_MetaData, ARRAY_COUNT(NewProp_bCurrentlyPlaying_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCurrentlyPlaying,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AkAmbSoundCheckpointRecord",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FAkAmbSoundCheckpointRecord),
				alignof(FAkAmbSoundCheckpointRecord),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkAmbSoundCheckpointRecord_CRC() { return 4081050035U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
