// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/TrueSkySequenceAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTrueSkySequenceAsset() {}
// Cross Module References
	TRUESKYPLUGIN_API UClass* Z_Construct_UClass_UTrueSkySequenceAsset_NoRegister();
	TRUESKYPLUGIN_API UClass* Z_Construct_UClass_UTrueSkySequenceAsset();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_TrueSkyPlugin();
// End Cross Module References
	void UTrueSkySequenceAsset::StaticRegisterNativesUTrueSkySequenceAsset()
	{
	}
	UClass* Z_Construct_UClass_UTrueSkySequenceAsset_NoRegister()
	{
		return UTrueSkySequenceAsset::StaticClass();
	}
	UClass* Z_Construct_UClass_UTrueSkySequenceAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_TrueSkyPlugin,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "TrueSkySequenceAsset.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/TrueSkySequenceAsset.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SequenceText_MetaData[] = {
				{ "Category", "TrueSkySequenceAsset" },
				{ "ModuleRelativePath", "Public/TrueSkySequenceAsset.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SequenceText = { UE4CodeGen_Private::EPropertyClass::Array, "SequenceText", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UTrueSkySequenceAsset, SequenceText), METADATA_PARAMS(NewProp_SequenceText_MetaData, ARRAY_COUNT(NewProp_SequenceText_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_SequenceText_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "SequenceText", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SequenceText,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SequenceText_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UTrueSkySequenceAsset>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UTrueSkySequenceAsset::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00080080u,
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
	IMPLEMENT_CLASS(UTrueSkySequenceAsset, 2242363636);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTrueSkySequenceAsset(Z_Construct_UClass_UTrueSkySequenceAsset, &UTrueSkySequenceAsset::StaticClass, TEXT("/Script/TrueSkyPlugin"), TEXT("UTrueSkySequenceAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTrueSkySequenceAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
