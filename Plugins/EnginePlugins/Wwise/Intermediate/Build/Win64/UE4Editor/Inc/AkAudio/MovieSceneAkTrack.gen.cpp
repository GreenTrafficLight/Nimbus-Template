// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MovieSceneAkTrack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneAkTrack() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UMovieSceneAkTrack_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UMovieSceneAkTrack();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrack();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
// End Cross Module References
	void UMovieSceneAkTrack::StaticRegisterNativesUMovieSceneAkTrack()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneAkTrack_NoRegister()
	{
		return UMovieSceneAkTrack::StaticClass();
	}
	UClass* Z_Construct_UClass_UMovieSceneAkTrack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMovieSceneTrack,
				(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "MovieSceneAkTrack.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/MovieSceneAkTrack.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAMasterTrack_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "MovieSceneAkTrack" },
				{ "ModuleRelativePath", "Public/MovieSceneAkTrack.h" },
			};
#endif
			auto NewProp_bIsAMasterTrack_SetBit = [](void* Obj){ ((UMovieSceneAkTrack*)Obj)->bIsAMasterTrack = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAMasterTrack = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsAMasterTrack", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMovieSceneAkTrack), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsAMasterTrack_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsAMasterTrack_MetaData, ARRAY_COUNT(NewProp_bIsAMasterTrack_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sections_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "MovieSceneAkTrack" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/MovieSceneAkTrack.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Sections = { UE4CodeGen_Private::EPropertyClass::Array, "Sections", RF_Public|RF_Transient|RF_MarkAsNative, 0x002008800000000d, 1, nullptr, STRUCT_OFFSET(UMovieSceneAkTrack, Sections), METADATA_PARAMS(NewProp_Sections_MetaData, ARRAY_COUNT(NewProp_Sections_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sections_Inner_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "MovieSceneAkTrack" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/MovieSceneAkTrack.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sections_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Sections", RF_Public|RF_Transient|RF_MarkAsNative, 0x0002000000080008, 1, nullptr, 0, Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(NewProp_Sections_Inner_MetaData, ARRAY_COUNT(NewProp_Sections_Inner_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsAMasterTrack,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Sections,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Sections_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMovieSceneAkTrack>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMovieSceneAkTrack::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00A80081u,
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
	IMPLEMENT_CLASS(UMovieSceneAkTrack, 4122729753);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneAkTrack(Z_Construct_UClass_UMovieSceneAkTrack, &UMovieSceneAkTrack::StaticClass, TEXT("/Script/AkAudio"), TEXT("UMovieSceneAkTrack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneAkTrack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
