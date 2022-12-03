// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MatineeTrackAtomCategoryName.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMatineeTrackAtomCategoryName() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UMatineeTrackAtomCategoryName_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UMatineeTrackAtomCategoryName();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UMatineeTrackAtomBase();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	void UMatineeTrackAtomCategoryName::StaticRegisterNativesUMatineeTrackAtomCategoryName()
	{
	}
	UClass* Z_Construct_UClass_UMatineeTrackAtomCategoryName_NoRegister()
	{
		return UMatineeTrackAtomCategoryName::StaticClass();
	}
	UClass* Z_Construct_UClass_UMatineeTrackAtomCategoryName()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMatineeTrackAtomBase,
				(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HideCategories", "Object" },
				{ "IncludePath", "MatineeTrackAtomCategoryName.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/MatineeTrackAtomCategoryName.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableVolumeTrack_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "MatineeTrackAtomCategoryName" },
				{ "ModuleRelativePath", "Public/MatineeTrackAtomCategoryName.h" },
			};
#endif
			auto NewProp_bEnableVolumeTrack_SetBit = [](void* Obj){ ((UMatineeTrackAtomCategoryName*)Obj)->bEnableVolumeTrack = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableVolumeTrack = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableVolumeTrack", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMatineeTrackAtomCategoryName), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableVolumeTrack_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableVolumeTrack_MetaData, ARRAY_COUNT(NewProp_bEnableVolumeTrack_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryName_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "MatineeTrackAtomCategoryName" },
				{ "ModuleRelativePath", "Public/MatineeTrackAtomCategoryName.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_CategoryName = { UE4CodeGen_Private::EPropertyClass::Str, "CategoryName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMatineeTrackAtomCategoryName, CategoryName), METADATA_PARAMS(NewProp_CategoryName_MetaData, ARRAY_COUNT(NewProp_CategoryName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableVolumeTrack,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CategoryName,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMatineeTrackAtomCategoryName>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMatineeTrackAtomCategoryName::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00082080u,
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
	IMPLEMENT_CLASS(UMatineeTrackAtomCategoryName, 3291170834);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMatineeTrackAtomCategoryName(Z_Construct_UClass_UMatineeTrackAtomCategoryName, &UMatineeTrackAtomCategoryName::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UMatineeTrackAtomCategoryName"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMatineeTrackAtomCategoryName);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
