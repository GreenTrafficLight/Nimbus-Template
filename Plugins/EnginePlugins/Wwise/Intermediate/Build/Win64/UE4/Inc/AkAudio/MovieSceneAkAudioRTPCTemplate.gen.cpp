// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MovieSceneAkAudioRTPCTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneAkAudioRTPCTemplate() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneAkAudioRTPCTemplate();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
	AKAUDIO_API UClass* Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_NoRegister();
// End Cross Module References
class UScriptStruct* FMovieSceneAkAudioRTPCTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneAkAudioRTPCTemplate_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneAkAudioRTPCTemplate, Z_Construct_UPackage__Script_AkAudio(), TEXT("MovieSceneAkAudioRTPCTemplate"), sizeof(FMovieSceneAkAudioRTPCTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneAkAudioRTPCTemplate_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneAkAudioRTPCTemplate(FMovieSceneAkAudioRTPCTemplate::StaticStruct, TEXT("/Script/AkAudio"), TEXT("MovieSceneAkAudioRTPCTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFMovieSceneAkAudioRTPCTemplate
{
	FScriptStruct_AkAudio_StaticRegisterNativesFMovieSceneAkAudioRTPCTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneAkAudioRTPCTemplate")),new UScriptStruct::TCppStructOps<FMovieSceneAkAudioRTPCTemplate>);
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFMovieSceneAkAudioRTPCTemplate;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneAkAudioRTPCTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneAkAudioRTPCTemplate_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneAkAudioRTPCTemplate"), sizeof(FMovieSceneAkAudioRTPCTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneAkAudioRTPCTemplate_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/MovieSceneAkAudioRTPCTemplate.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneAkAudioRTPCTemplate>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "MovieSceneAkAudioRTPCTemplate" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/MovieSceneAkAudioRTPCTemplate.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Section = { UE4CodeGen_Private::EPropertyClass::Object, "Section", RF_Public|RF_Transient|RF_MarkAsNative, 0x001200000008000d, 1, nullptr, STRUCT_OFFSET(FMovieSceneAkAudioRTPCTemplate, Section), Z_Construct_UClass_UMovieSceneAkAudioRTPCSection_NoRegister, METADATA_PARAMS(NewProp_Section_MetaData, ARRAY_COUNT(NewProp_Section_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Section,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
				Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneAkAudioRTPCTemplate",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000205),
				sizeof(FMovieSceneAkAudioRTPCTemplate),
				alignof(FMovieSceneAkAudioRTPCTemplate),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneAkAudioRTPCTemplate_CRC() { return 3561480722U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
