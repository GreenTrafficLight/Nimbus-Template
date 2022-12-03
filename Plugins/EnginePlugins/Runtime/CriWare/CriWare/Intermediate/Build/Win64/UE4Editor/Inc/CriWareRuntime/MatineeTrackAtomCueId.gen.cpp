// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MatineeTrackAtomCueId.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMatineeTrackAtomCueId() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UMatineeTrackAtomCueId_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UMatineeTrackAtomCueId();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UMatineeTrackAtomSoundBase();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomCueIdTrackKeyframe();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCueSheet_NoRegister();
// End Cross Module References
	void UMatineeTrackAtomCueId::StaticRegisterNativesUMatineeTrackAtomCueId()
	{
	}
	UClass* Z_Construct_UClass_UMatineeTrackAtomCueId_NoRegister()
	{
		return UMatineeTrackAtomCueId::StaticClass();
	}
	UClass* Z_Construct_UClass_UMatineeTrackAtomCueId()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMatineeTrackAtomSoundBase,
				(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HideCategories", "Object" },
				{ "IncludePath", "MatineeTrackAtomCueId.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/MatineeTrackAtomCueId.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyframeList_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "MatineeTrackAtomCueId" },
				{ "ModuleRelativePath", "Public/MatineeTrackAtomCueId.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_KeyframeList = { UE4CodeGen_Private::EPropertyClass::Array, "KeyframeList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000045, 1, nullptr, STRUCT_OFFSET(UMatineeTrackAtomCueId, KeyframeList), METADATA_PARAMS(NewProp_KeyframeList_MetaData, ARRAY_COUNT(NewProp_KeyframeList_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_KeyframeList_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "KeyframeList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FAtomCueIdTrackKeyframe, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CueSheet_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "MatineeTrackAtomCueId" },
				{ "ModuleRelativePath", "Public/MatineeTrackAtomCueId.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CueSheet = { UE4CodeGen_Private::EPropertyClass::Object, "CueSheet", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMatineeTrackAtomCueId, CueSheet), Z_Construct_UClass_USoundAtomCueSheet_NoRegister, METADATA_PARAMS(NewProp_CueSheet_MetaData, ARRAY_COUNT(NewProp_CueSheet_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectorList_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "MatineeTrackAtomCueId" },
				{ "ModuleRelativePath", "Public/MatineeTrackAtomCueId.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SelectorList = { UE4CodeGen_Private::EPropertyClass::Array, "SelectorList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMatineeTrackAtomCueId, SelectorList), METADATA_PARAMS(NewProp_SelectorList_MetaData, ARRAY_COUNT(NewProp_SelectorList_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_SelectorList_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "SelectorList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AisacList_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "MatineeTrackAtomCueId" },
				{ "ModuleRelativePath", "Public/MatineeTrackAtomCueId.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AisacList = { UE4CodeGen_Private::EPropertyClass::Array, "AisacList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMatineeTrackAtomCueId, AisacList), METADATA_PARAMS(NewProp_AisacList_MetaData, ARRAY_COUNT(NewProp_AisacList_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_AisacList_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "AisacList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_KeyframeList,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_KeyframeList_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CueSheet,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SelectorList,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SelectorList_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AisacList,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AisacList_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMatineeTrackAtomCueId>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMatineeTrackAtomCueId::StaticClass,
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
	IMPLEMENT_CLASS(UMatineeTrackAtomCueId, 2524066945);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMatineeTrackAtomCueId(Z_Construct_UClass_UMatineeTrackAtomCueId, &UMatineeTrackAtomCueId::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UMatineeTrackAtomCueId"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMatineeTrackAtomCueId);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
