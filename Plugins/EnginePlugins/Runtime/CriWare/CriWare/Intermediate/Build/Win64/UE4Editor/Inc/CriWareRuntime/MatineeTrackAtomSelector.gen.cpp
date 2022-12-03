// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MatineeTrackAtomSelector.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMatineeTrackAtomSelector() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UMatineeTrackAtomSelector_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UMatineeTrackAtomSelector();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrack();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomSelectorTrackKeyframe();
// End Cross Module References
	void UMatineeTrackAtomSelector::StaticRegisterNativesUMatineeTrackAtomSelector()
	{
	}
	UClass* Z_Construct_UClass_UMatineeTrackAtomSelector_NoRegister()
	{
		return UMatineeTrackAtomSelector::StaticClass();
	}
	UClass* Z_Construct_UClass_UMatineeTrackAtomSelector()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UInterpTrack,
				(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HideCategories", "Object" },
				{ "IncludePath", "MatineeTrackAtomSelector.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/MatineeTrackAtomSelector.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyframeList_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "MatineeTrackAtomSelector" },
				{ "ModuleRelativePath", "Public/MatineeTrackAtomSelector.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_KeyframeList = { UE4CodeGen_Private::EPropertyClass::Array, "KeyframeList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000045, 1, nullptr, STRUCT_OFFSET(UMatineeTrackAtomSelector, KeyframeList), METADATA_PARAMS(NewProp_KeyframeList_MetaData, ARRAY_COUNT(NewProp_KeyframeList_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_KeyframeList_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "KeyframeList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FAtomSelectorTrackKeyframe, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_KeyframeList,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_KeyframeList_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMatineeTrackAtomSelector>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMatineeTrackAtomSelector::StaticClass,
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
	IMPLEMENT_CLASS(UMatineeTrackAtomSelector, 3636097198);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMatineeTrackAtomSelector(Z_Construct_UClass_UMatineeTrackAtomSelector, &UMatineeTrackAtomSelector::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UMatineeTrackAtomSelector"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMatineeTrackAtomSelector);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
