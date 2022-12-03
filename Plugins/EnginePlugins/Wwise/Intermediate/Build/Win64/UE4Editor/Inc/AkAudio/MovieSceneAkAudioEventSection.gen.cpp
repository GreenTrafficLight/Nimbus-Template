// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MovieSceneAkAudioEventSection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneAkAudioEventSection() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UMovieSceneAkAudioEventSection_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UMovieSceneAkAudioEventSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
// End Cross Module References
	void UMovieSceneAkAudioEventSection::StaticRegisterNativesUMovieSceneAkAudioEventSection()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneAkAudioEventSection_NoRegister()
	{
		return UMovieSceneAkAudioEventSection::StaticClass();
	}
	UClass* Z_Construct_UClass_UMovieSceneAkAudioEventSection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
				(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "MovieSceneAkAudioEventSection.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/MovieSceneAkAudioEventSection.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "MovieSceneAkAudioEventSection" },
				{ "ModuleRelativePath", "Public/MovieSceneAkAudioEventSection.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_EventName = { UE4CodeGen_Private::EPropertyClass::Str, "EventName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040040000000005, 1, nullptr, STRUCT_OFFSET(UMovieSceneAkAudioEventSection, EventName), METADATA_PARAMS(NewProp_EventName_MetaData, ARRAY_COUNT(NewProp_EventName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopAtSectionEnd_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "MovieSceneAkAudioEventSection" },
				{ "ModuleRelativePath", "Public/MovieSceneAkAudioEventSection.h" },
			};
#endif
			auto NewProp_StopAtSectionEnd_SetBit = [](void* Obj){ ((UMovieSceneAkAudioEventSection*)Obj)->StopAtSectionEnd = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_StopAtSectionEnd = { UE4CodeGen_Private::EPropertyClass::Bool, "StopAtSectionEnd", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040040000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMovieSceneAkAudioEventSection), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_StopAtSectionEnd_SetBit)>::SetBit, METADATA_PARAMS(NewProp_StopAtSectionEnd_MetaData, ARRAY_COUNT(NewProp_StopAtSectionEnd_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Event_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "MovieSceneAkAudioEventSection" },
				{ "ModuleRelativePath", "Public/MovieSceneAkAudioEventSection.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Event = { UE4CodeGen_Private::EPropertyClass::Object, "Event", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000005, 1, nullptr, STRUCT_OFFSET(UMovieSceneAkAudioEventSection, Event), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(NewProp_Event_MetaData, ARRAY_COUNT(NewProp_Event_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EventName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StopAtSectionEnd,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Event,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMovieSceneAkAudioEventSection>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMovieSceneAkAudioEventSection::StaticClass,
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
	IMPLEMENT_CLASS(UMovieSceneAkAudioEventSection, 2885682639);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneAkAudioEventSection(Z_Construct_UClass_UMovieSceneAkAudioEventSection, &UMovieSceneAkAudioEventSection::StaticClass, TEXT("/Script/AkAudio"), TEXT("UMovieSceneAkAudioEventSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneAkAudioEventSection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
