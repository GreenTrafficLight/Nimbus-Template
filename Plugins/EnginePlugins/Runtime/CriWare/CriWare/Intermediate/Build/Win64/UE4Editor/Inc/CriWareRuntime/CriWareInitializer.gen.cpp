// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/CriWareInitializer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCriWareInitializer() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UCriWareInitializer_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UCriWareInitializer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	void UCriWareInitializer::StaticRegisterNativesUCriWareInitializer()
	{
	}
	UClass* Z_Construct_UClass_UCriWareInitializer_NoRegister()
	{
		return UCriWareInitializer::StaticClass();
	}
	UClass* Z_Construct_UClass_UCriWareInitializer()
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
				{ "IncludePath", "CriWareInitializer.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/CriWareInitializer.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UCriWareInitializer>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UCriWareInitializer::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
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
	IMPLEMENT_CLASS(UCriWareInitializer, 3123353669);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCriWareInitializer(Z_Construct_UClass_UCriWareInitializer, &UCriWareInitializer::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UCriWareInitializer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCriWareInitializer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
