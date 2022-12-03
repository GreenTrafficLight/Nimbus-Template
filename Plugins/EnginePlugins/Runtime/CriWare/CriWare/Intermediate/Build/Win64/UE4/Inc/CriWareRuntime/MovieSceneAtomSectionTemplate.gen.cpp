// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MovieSceneAtomSectionTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneAtomSectionTemplate() {}
// Cross Module References
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplate();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplateData();
// End Cross Module References
class UScriptStruct* FMovieSceneAtomSectionTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplate_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplate, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("MovieSceneAtomSectionTemplate"), sizeof(FMovieSceneAtomSectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplate_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneAtomSectionTemplate(FMovieSceneAtomSectionTemplate::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("MovieSceneAtomSectionTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFMovieSceneAtomSectionTemplate
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFMovieSceneAtomSectionTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneAtomSectionTemplate")),new UScriptStruct::TCppStructOps<FMovieSceneAtomSectionTemplate>);
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFMovieSceneAtomSectionTemplate;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplate_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneAtomSectionTemplate"), sizeof(FMovieSceneAtomSectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplate_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/MovieSceneAtomSectionTemplate.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneAtomSectionTemplate>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtomData_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "MovieSceneAtomSectionTemplate" },
				{ "ModuleRelativePath", "Public/MovieSceneAtomSectionTemplate.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AtomData = { UE4CodeGen_Private::EPropertyClass::Struct, "AtomData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMovieSceneAtomSectionTemplate, AtomData), Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplateData, METADATA_PARAMS(NewProp_AtomData_MetaData, ARRAY_COUNT(NewProp_AtomData_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AtomData,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
				Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneAtomSectionTemplate",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000005),
				sizeof(FMovieSceneAtomSectionTemplate),
				alignof(FMovieSceneAtomSectionTemplate),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplate_CRC() { return 678883267U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
