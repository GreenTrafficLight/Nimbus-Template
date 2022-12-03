// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MatineeTrackAtomCategoryVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMatineeTrackAtomCategoryVolume() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UMatineeTrackAtomCategoryVolume_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UMatineeTrackAtomCategoryVolume();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UMatineeTrackAtomFloatBase();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	void UMatineeTrackAtomCategoryVolume::StaticRegisterNativesUMatineeTrackAtomCategoryVolume()
	{
	}
	UClass* Z_Construct_UClass_UMatineeTrackAtomCategoryVolume_NoRegister()
	{
		return UMatineeTrackAtomCategoryVolume::StaticClass();
	}
	UClass* Z_Construct_UClass_UMatineeTrackAtomCategoryVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMatineeTrackAtomFloatBase,
				(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HideCategories", "Object" },
				{ "IncludePath", "MatineeTrackAtomCategoryVolume.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/MatineeTrackAtomCategoryVolume.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMatineeTrackAtomCategoryVolume>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMatineeTrackAtomCategoryVolume::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00082080u,
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
	IMPLEMENT_CLASS(UMatineeTrackAtomCategoryVolume, 4096444291);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMatineeTrackAtomCategoryVolume(Z_Construct_UClass_UMatineeTrackAtomCategoryVolume, &UMatineeTrackAtomCategoryVolume::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UMatineeTrackAtomCategoryVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMatineeTrackAtomCategoryVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
