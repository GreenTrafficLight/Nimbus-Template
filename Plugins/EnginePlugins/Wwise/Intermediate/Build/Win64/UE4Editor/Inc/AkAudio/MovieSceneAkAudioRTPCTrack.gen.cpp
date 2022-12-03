// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MovieSceneAkAudioRTPCTrack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneAkAudioRTPCTrack() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UMovieSceneAkAudioRTPCTrack_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UMovieSceneAkAudioRTPCTrack();
	AKAUDIO_API UClass* Z_Construct_UClass_UMovieSceneAkTrack();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	void UMovieSceneAkAudioRTPCTrack::StaticRegisterNativesUMovieSceneAkAudioRTPCTrack()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneAkAudioRTPCTrack_NoRegister()
	{
		return UMovieSceneAkAudioRTPCTrack::StaticClass();
	}
	UClass* Z_Construct_UClass_UMovieSceneAkAudioRTPCTrack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMovieSceneAkTrack,
				(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "MovieSceneAkAudioRTPCTrack.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/MovieSceneAkAudioRTPCTrack.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMovieSceneAkAudioRTPCTrack>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMovieSceneAkAudioRTPCTrack::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00A80080u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneAkAudioRTPCTrack, 888167856);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneAkAudioRTPCTrack(Z_Construct_UClass_UMovieSceneAkAudioRTPCTrack, &UMovieSceneAkAudioRTPCTrack::StaticClass, TEXT("/Script/AkAudio"), TEXT("UMovieSceneAkAudioRTPCTrack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneAkAudioRTPCTrack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
