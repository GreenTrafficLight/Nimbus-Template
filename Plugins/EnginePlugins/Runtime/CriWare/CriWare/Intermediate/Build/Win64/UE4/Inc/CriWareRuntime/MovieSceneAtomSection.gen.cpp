// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MovieSceneAtomSection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneAtomSection() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UMovieSceneAtomSection_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UMovieSceneAtomSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRichCurve();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCue_NoRegister();
// End Cross Module References
	void UMovieSceneAtomSection::StaticRegisterNativesUMovieSceneAtomSection()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneAtomSection_NoRegister()
	{
		return UMovieSceneAtomSection::StaticClass();
	}
	UClass* Z_Construct_UClass_UMovieSceneAtomSection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
				(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "MovieSceneAtomSection.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/MovieSceneAtomSection.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSuppressSubtitles_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "MovieSceneAtomSection" },
				{ "ModuleRelativePath", "Public/MovieSceneAtomSection.h" },
			};
#endif
			auto NewProp_bSuppressSubtitles_SetBit = [](void* Obj){ ((UMovieSceneAtomSection*)Obj)->bSuppressSubtitles = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuppressSubtitles = { UE4CodeGen_Private::EPropertyClass::Bool, "bSuppressSubtitles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMovieSceneAtomSection), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSuppressSubtitles_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSuppressSubtitles_MetaData, ARRAY_COUNT(NewProp_bSuppressSubtitles_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PitchMultiplier_MetaData[] = {
				{ "Category", "MovieSceneAtomSection" },
				{ "ModuleRelativePath", "Public/MovieSceneAtomSection.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PitchMultiplier = { UE4CodeGen_Private::EPropertyClass::Struct, "PitchMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UMovieSceneAtomSection, PitchMultiplier), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(NewProp_PitchMultiplier_MetaData, ARRAY_COUNT(NewProp_PitchMultiplier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundVolume_MetaData[] = {
				{ "Category", "MovieSceneAtomSection" },
				{ "ModuleRelativePath", "Public/MovieSceneAtomSection.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SoundVolume = { UE4CodeGen_Private::EPropertyClass::Struct, "SoundVolume", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UMovieSceneAtomSection, SoundVolume), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(NewProp_SoundVolume_MetaData, ARRAY_COUNT(NewProp_SoundVolume_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartOffset_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "MovieSceneAtomSection" },
				{ "ModuleRelativePath", "Public/MovieSceneAtomSection.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartOffset = { UE4CodeGen_Private::EPropertyClass::Float, "StartOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000005, 1, nullptr, STRUCT_OFFSET(UMovieSceneAtomSection, StartOffset), METADATA_PARAMS(NewProp_StartOffset_MetaData, ARRAY_COUNT(NewProp_StartOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "MovieSceneAtomSection" },
				{ "ModuleRelativePath", "Public/MovieSceneAtomSection.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sound = { UE4CodeGen_Private::EPropertyClass::Object, "Sound", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000005, 1, nullptr, STRUCT_OFFSET(UMovieSceneAtomSection, Sound), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(NewProp_Sound_MetaData, ARRAY_COUNT(NewProp_Sound_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSuppressSubtitles,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PitchMultiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SoundVolume,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Sound,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMovieSceneAtomSection>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMovieSceneAtomSection::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00280080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneAtomSection, 3621300827);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneAtomSection(Z_Construct_UClass_UMovieSceneAtomSection, &UMovieSceneAtomSection::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UMovieSceneAtomSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneAtomSection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
