// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MatineeTrackAtomBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMatineeTrackAtomBase() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UMatineeTrackAtomBase_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UMatineeTrackAtomBase();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrack();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	void UMatineeTrackAtomBase::StaticRegisterNativesUMatineeTrackAtomBase()
	{
	}
	UClass* Z_Construct_UClass_UMatineeTrackAtomBase_NoRegister()
	{
		return UMatineeTrackAtomBase::StaticClass();
	}
	UClass* Z_Construct_UClass_UMatineeTrackAtomBase()
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
				{ "IncludePath", "MatineeTrackAtomBase.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/MatineeTrackAtomBase.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMatineeTrackAtomBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMatineeTrackAtomBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00082081u,
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
	IMPLEMENT_CLASS(UMatineeTrackAtomBase, 2394104613);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMatineeTrackAtomBase(Z_Construct_UClass_UMatineeTrackAtomBase, &UMatineeTrackAtomBase::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UMatineeTrackAtomBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMatineeTrackAtomBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
