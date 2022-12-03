// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MovieSceneAkAudioEventTrack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneAkAudioEventTrack() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UMovieSceneAkAudioEventTrack_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UMovieSceneAkAudioEventTrack();
	AKAUDIO_API UClass* Z_Construct_UClass_UMovieSceneAkTrack();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	void UMovieSceneAkAudioEventTrack::StaticRegisterNativesUMovieSceneAkAudioEventTrack()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneAkAudioEventTrack_NoRegister()
	{
		return UMovieSceneAkAudioEventTrack::StaticClass();
	}
	UClass* Z_Construct_UClass_UMovieSceneAkAudioEventTrack()
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
				{ "IncludePath", "MovieSceneAkAudioEventTrack.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/MovieSceneAkAudioEventTrack.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMovieSceneAkAudioEventTrack>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMovieSceneAkAudioEventTrack::StaticClass,
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
	IMPLEMENT_CLASS(UMovieSceneAkAudioEventTrack, 1671647129);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneAkAudioEventTrack(Z_Construct_UClass_UMovieSceneAkAudioEventTrack, &UMovieSceneAkAudioEventTrack::StaticClass, TEXT("/Script/AkAudio"), TEXT("UMovieSceneAkAudioEventTrack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneAkAudioEventTrack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
