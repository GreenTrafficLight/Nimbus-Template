// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MovieSceneAkAudioRTPCSectionData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneAkAudioRTPCSectionData() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneAkAudioRTPCSectionData();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRichCurve();
// End Cross Module References
class UScriptStruct* FMovieSceneAkAudioRTPCSectionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneAkAudioRTPCSectionData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneAkAudioRTPCSectionData, Z_Construct_UPackage__Script_AkAudio(), TEXT("MovieSceneAkAudioRTPCSectionData"), sizeof(FMovieSceneAkAudioRTPCSectionData), Get_Z_Construct_UScriptStruct_FMovieSceneAkAudioRTPCSectionData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneAkAudioRTPCSectionData(FMovieSceneAkAudioRTPCSectionData::StaticStruct, TEXT("/Script/AkAudio"), TEXT("MovieSceneAkAudioRTPCSectionData"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFMovieSceneAkAudioRTPCSectionData
{
	FScriptStruct_AkAudio_StaticRegisterNativesFMovieSceneAkAudioRTPCSectionData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneAkAudioRTPCSectionData")),new UScriptStruct::TCppStructOps<FMovieSceneAkAudioRTPCSectionData>);
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFMovieSceneAkAudioRTPCSectionData;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneAkAudioRTPCSectionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneAkAudioRTPCSectionData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneAkAudioRTPCSectionData"), sizeof(FMovieSceneAkAudioRTPCSectionData), Get_Z_Construct_UScriptStruct_FMovieSceneAkAudioRTPCSectionData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/MovieSceneAkAudioRTPCSectionData.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneAkAudioRTPCSectionData>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RTPCCurve_MetaData[] = {
				{ "Category", "MovieSceneAkAudioRTPCSectionData" },
				{ "ModuleRelativePath", "Public/MovieSceneAkAudioRTPCSectionData.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RTPCCurve = { UE4CodeGen_Private::EPropertyClass::Struct, "RTPCCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FMovieSceneAkAudioRTPCSectionData, RTPCCurve), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(NewProp_RTPCCurve_MetaData, ARRAY_COUNT(NewProp_RTPCCurve_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RTPCName_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "MovieSceneAkAudioRTPCSectionData" },
				{ "ModuleRelativePath", "Public/MovieSceneAkAudioRTPCSectionData.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_RTPCName = { UE4CodeGen_Private::EPropertyClass::Str, "RTPCName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMovieSceneAkAudioRTPCSectionData, RTPCName), METADATA_PARAMS(NewProp_RTPCName_MetaData, ARRAY_COUNT(NewProp_RTPCName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RTPCCurve,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RTPCName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneAkAudioRTPCSectionData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMovieSceneAkAudioRTPCSectionData),
				alignof(FMovieSceneAkAudioRTPCSectionData),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneAkAudioRTPCSectionData_CRC() { return 4099293165U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
