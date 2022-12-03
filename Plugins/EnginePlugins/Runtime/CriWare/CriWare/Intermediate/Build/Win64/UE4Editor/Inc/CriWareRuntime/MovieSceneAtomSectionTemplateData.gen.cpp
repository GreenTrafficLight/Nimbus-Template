// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MovieSceneAtomSectionTemplateData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneAtomSectionTemplateData() {}
// Cross Module References
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplateData();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRichCurve();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatRange();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCue_NoRegister();
// End Cross Module References
class UScriptStruct* FMovieSceneAtomSectionTemplateData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplateData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplateData, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("MovieSceneAtomSectionTemplateData"), sizeof(FMovieSceneAtomSectionTemplateData), Get_Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplateData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneAtomSectionTemplateData(FMovieSceneAtomSectionTemplateData::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("MovieSceneAtomSectionTemplateData"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFMovieSceneAtomSectionTemplateData
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFMovieSceneAtomSectionTemplateData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneAtomSectionTemplateData")),new UScriptStruct::TCppStructOps<FMovieSceneAtomSectionTemplateData>);
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFMovieSceneAtomSectionTemplateData;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplateData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplateData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneAtomSectionTemplateData"), sizeof(FMovieSceneAtomSectionTemplateData), Get_Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplateData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/MovieSceneAtomSectionTemplateData.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneAtomSectionTemplateData>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RowIndex_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "MovieSceneAtomSectionTemplateData" },
				{ "ModuleRelativePath", "Public/MovieSceneAtomSectionTemplateData.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_RowIndex = { UE4CodeGen_Private::EPropertyClass::Int, "RowIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMovieSceneAtomSectionTemplateData, RowIndex), METADATA_PARAMS(NewProp_RowIndex_MetaData, ARRAY_COUNT(NewProp_RowIndex_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtomVolumeCurve_MetaData[] = {
				{ "Category", "MovieSceneAtomSectionTemplateData" },
				{ "ModuleRelativePath", "Public/MovieSceneAtomSectionTemplateData.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AtomVolumeCurve = { UE4CodeGen_Private::EPropertyClass::Struct, "AtomVolumeCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FMovieSceneAtomSectionTemplateData, AtomVolumeCurve), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(NewProp_AtomVolumeCurve_MetaData, ARRAY_COUNT(NewProp_AtomVolumeCurve_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtomPitchMultiplierCurve_MetaData[] = {
				{ "Category", "MovieSceneAtomSectionTemplateData" },
				{ "ModuleRelativePath", "Public/MovieSceneAtomSectionTemplateData.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AtomPitchMultiplierCurve = { UE4CodeGen_Private::EPropertyClass::Struct, "AtomPitchMultiplierCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FMovieSceneAtomSectionTemplateData, AtomPitchMultiplierCurve), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(NewProp_AtomPitchMultiplierCurve_MetaData, ARRAY_COUNT(NewProp_AtomPitchMultiplierCurve_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtomRange_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "MovieSceneAtomSectionTemplateData" },
				{ "ModuleRelativePath", "Public/MovieSceneAtomSectionTemplateData.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AtomRange = { UE4CodeGen_Private::EPropertyClass::Struct, "AtomRange", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMovieSceneAtomSectionTemplateData, AtomRange), Z_Construct_UScriptStruct_FFloatRange, METADATA_PARAMS(NewProp_AtomRange_MetaData, ARRAY_COUNT(NewProp_AtomRange_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtomStartOffset_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "MovieSceneAtomSectionTemplateData" },
				{ "ModuleRelativePath", "Public/MovieSceneAtomSectionTemplateData.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AtomStartOffset = { UE4CodeGen_Private::EPropertyClass::Float, "AtomStartOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMovieSceneAtomSectionTemplateData, AtomStartOffset), METADATA_PARAMS(NewProp_AtomStartOffset_MetaData, ARRAY_COUNT(NewProp_AtomStartOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "MovieSceneAtomSectionTemplateData" },
				{ "ModuleRelativePath", "Public/MovieSceneAtomSectionTemplateData.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sound = { UE4CodeGen_Private::EPropertyClass::Object, "Sound", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMovieSceneAtomSectionTemplateData, Sound), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(NewProp_Sound_MetaData, ARRAY_COUNT(NewProp_Sound_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RowIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AtomVolumeCurve,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AtomPitchMultiplierCurve,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AtomRange,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AtomStartOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Sound,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneAtomSectionTemplateData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMovieSceneAtomSectionTemplateData),
				alignof(FMovieSceneAtomSectionTemplateData),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplateData_CRC() { return 1403793748U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
