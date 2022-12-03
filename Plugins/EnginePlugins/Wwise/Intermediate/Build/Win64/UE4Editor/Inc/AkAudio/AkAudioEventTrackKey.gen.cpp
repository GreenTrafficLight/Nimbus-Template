// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AkAudioEventTrackKey.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkAudioEventTrackKey() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkAudioEventTrackKey();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
// End Cross Module References
class UScriptStruct* FAkAudioEventTrackKey::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkAudioEventTrackKey_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkAudioEventTrackKey, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkAudioEventTrackKey"), sizeof(FAkAudioEventTrackKey), Get_Z_Construct_UScriptStruct_FAkAudioEventTrackKey_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkAudioEventTrackKey(FAkAudioEventTrackKey::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkAudioEventTrackKey"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkAudioEventTrackKey
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkAudioEventTrackKey()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AkAudioEventTrackKey")),new UScriptStruct::TCppStructOps<FAkAudioEventTrackKey>);
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkAudioEventTrackKey;
	UScriptStruct* Z_Construct_UScriptStruct_FAkAudioEventTrackKey()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkAudioEventTrackKey_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkAudioEventTrackKey"), sizeof(FAkAudioEventTrackKey), Get_Z_Construct_UScriptStruct_FAkAudioEventTrackKey_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/AkAudioEventTrackKey.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkAudioEventTrackKey>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkAudioEventTrackKey" },
				{ "ModuleRelativePath", "Public/AkAudioEventTrackKey.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_EventName = { UE4CodeGen_Private::EPropertyClass::Str, "EventName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAkAudioEventTrackKey, EventName), METADATA_PARAMS(NewProp_EventName_MetaData, ARRAY_COUNT(NewProp_EventName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AkAudioEvent_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkAudioEventTrackKey" },
				{ "ModuleRelativePath", "Public/AkAudioEventTrackKey.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AkAudioEvent = { UE4CodeGen_Private::EPropertyClass::Object, "AkAudioEvent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAkAudioEventTrackKey, AkAudioEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(NewProp_AkAudioEvent_MetaData, ARRAY_COUNT(NewProp_AkAudioEvent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkAudioEventTrackKey" },
				{ "ModuleRelativePath", "Public/AkAudioEventTrackKey.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time = { UE4CodeGen_Private::EPropertyClass::Float, "Time", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAkAudioEventTrackKey, Time), METADATA_PARAMS(NewProp_Time_MetaData, ARRAY_COUNT(NewProp_Time_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EventName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AkAudioEvent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Time,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AkAudioEventTrackKey",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FAkAudioEventTrackKey),
				alignof(FAkAudioEventTrackKey),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkAudioEventTrackKey_CRC() { return 820385014U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
