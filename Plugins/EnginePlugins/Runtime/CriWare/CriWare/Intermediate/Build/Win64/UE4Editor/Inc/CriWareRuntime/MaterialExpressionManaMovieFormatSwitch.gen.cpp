// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MaterialExpressionManaMovieFormatSwitch.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionManaMovieFormatSwitch() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UMaterialExpressionManaMovieFormatSwitch_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UMaterialExpressionManaMovieFormatSwitch();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	void UMaterialExpressionManaMovieFormatSwitch::StaticRegisterNativesUMaterialExpressionManaMovieFormatSwitch()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionManaMovieFormatSwitch_NoRegister()
	{
		return UMaterialExpressionManaMovieFormatSwitch::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionManaMovieFormatSwitch()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
				(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HideCategories", "Object" },
				{ "IncludePath", "MaterialExpressionManaMovieFormatSwitch.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/MaterialExpressionManaMovieFormatSwitch.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Inputs_MetaData[] = {
				{ "Category", "MaterialExpressionManaMovieFormatSwitch" },
				{ "ModuleRelativePath", "Public/MaterialExpressionManaMovieFormatSwitch.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Inputs = { UE4CodeGen_Private::EPropertyClass::Struct, "Inputs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, CPP_ARRAY_DIM(Inputs, UMaterialExpressionManaMovieFormatSwitch), nullptr, STRUCT_OFFSET(UMaterialExpressionManaMovieFormatSwitch, Inputs), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_Inputs_MetaData, ARRAY_COUNT(NewProp_Inputs_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Inputs,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionManaMovieFormatSwitch>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionManaMovieFormatSwitch::StaticClass,
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
	IMPLEMENT_CLASS(UMaterialExpressionManaMovieFormatSwitch, 4246794108);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionManaMovieFormatSwitch(Z_Construct_UClass_UMaterialExpressionManaMovieFormatSwitch, &UMaterialExpressionManaMovieFormatSwitch::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UMaterialExpressionManaMovieFormatSwitch"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionManaMovieFormatSwitch);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
