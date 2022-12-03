// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MovieSceneAtomTrack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneAtomTrack() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UMovieSceneAtomTrack_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UMovieSceneAtomTrack();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneNameableTrack();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
// End Cross Module References
	void UMovieSceneAtomTrack::StaticRegisterNativesUMovieSceneAtomTrack()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneAtomTrack_NoRegister()
	{
		return UMovieSceneAtomTrack::StaticClass();
	}
	UClass* Z_Construct_UClass_UMovieSceneAtomTrack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMovieSceneNameableTrack,
				(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "MovieSceneAtomTrack.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/MovieSceneAtomTrack.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtomSections_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "MovieSceneAtomTrack" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/MovieSceneAtomTrack.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AtomSections = { UE4CodeGen_Private::EPropertyClass::Array, "AtomSections", RF_Public|RF_Transient|RF_MarkAsNative, 0x004000800000000d, 1, nullptr, STRUCT_OFFSET(UMovieSceneAtomTrack, AtomSections), METADATA_PARAMS(NewProp_AtomSections_MetaData, ARRAY_COUNT(NewProp_AtomSections_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtomSections_Inner_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "MovieSceneAtomTrack" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/MovieSceneAtomTrack.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AtomSections_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "AtomSections", RF_Public|RF_Transient|RF_MarkAsNative, 0x0002000000080008, 1, nullptr, 0, Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(NewProp_AtomSections_Inner_MetaData, ARRAY_COUNT(NewProp_AtomSections_Inner_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AtomSections,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AtomSections_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMovieSceneAtomTrack>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMovieSceneAtomTrack::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00A80080u,
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
	IMPLEMENT_CLASS(UMovieSceneAtomTrack, 821790174);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneAtomTrack(Z_Construct_UClass_UMovieSceneAtomTrack, &UMovieSceneAtomTrack::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UMovieSceneAtomTrack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneAtomTrack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
