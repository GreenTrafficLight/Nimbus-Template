// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MatineeTrackAtomSoundBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMatineeTrackAtomSoundBase() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UMatineeTrackAtomSoundBase_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UMatineeTrackAtomSoundBase();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UMatineeTrackAtomBase();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	void UMatineeTrackAtomSoundBase::StaticRegisterNativesUMatineeTrackAtomSoundBase()
	{
	}
	UClass* Z_Construct_UClass_UMatineeTrackAtomSoundBase_NoRegister()
	{
		return UMatineeTrackAtomSoundBase::StaticClass();
	}
	UClass* Z_Construct_UClass_UMatineeTrackAtomSoundBase()
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
				{ "IncludePath", "MatineeTrackAtomSoundBase.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/MatineeTrackAtomSoundBase.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bContinueSoundOnMatineeEnd_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "MatineeTrackAtomSoundBase" },
				{ "ModuleRelativePath", "Public/MatineeTrackAtomSoundBase.h" },
			};
#endif
			auto NewProp_bContinueSoundOnMatineeEnd_SetBit = [](void* Obj){ ((UMatineeTrackAtomSoundBase*)Obj)->bContinueSoundOnMatineeEnd = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bContinueSoundOnMatineeEnd = { UE4CodeGen_Private::EPropertyClass::Bool, "bContinueSoundOnMatineeEnd", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMatineeTrackAtomSoundBase), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bContinueSoundOnMatineeEnd_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bContinueSoundOnMatineeEnd_MetaData, ARRAY_COUNT(NewProp_bContinueSoundOnMatineeEnd_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bContinueSoundOnMatineeEnd,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMatineeTrackAtomSoundBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMatineeTrackAtomSoundBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00082081u,
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
	IMPLEMENT_CLASS(UMatineeTrackAtomSoundBase, 672786079);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMatineeTrackAtomSoundBase(Z_Construct_UClass_UMatineeTrackAtomSoundBase, &UMatineeTrackAtomSoundBase::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UMatineeTrackAtomSoundBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMatineeTrackAtomSoundBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
