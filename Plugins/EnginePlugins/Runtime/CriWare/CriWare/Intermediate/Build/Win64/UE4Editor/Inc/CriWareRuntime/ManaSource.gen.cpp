// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/ManaSource.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManaSource() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaSource_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaSource();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	void UManaSource::StaticRegisterNativesUManaSource()
	{
	}
	UClass* Z_Construct_UClass_UManaSource_NoRegister()
	{
		return UManaSource::StaticClass();
	}
	UClass* Z_Construct_UClass_UManaSource()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "ManaSource.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/ManaSource.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UManaSource>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UManaSource::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00000081u,
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
	IMPLEMENT_CLASS(UManaSource, 1548871976);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UManaSource(Z_Construct_UClass_UManaSource, &UManaSource::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UManaSource"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UManaSource);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
