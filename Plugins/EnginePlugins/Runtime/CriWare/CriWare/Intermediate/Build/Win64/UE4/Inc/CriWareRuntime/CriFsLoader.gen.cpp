// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/CriFsLoader.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCriFsLoader() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_ACriFsLoader_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_ACriFsLoader();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UCriFsLoaderComponent_NoRegister();
// End Cross Module References
	void ACriFsLoader::StaticRegisterNativesACriFsLoader()
	{
	}
	UClass* Z_Construct_UClass_ACriFsLoader_NoRegister()
	{
		return ACriFsLoader::StaticClass();
	}
	UClass* Z_Construct_UClass_ACriFsLoader()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "CriFsLoader.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/CriFsLoader.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoaderComponent_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "CriFsLoader" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/CriFsLoader.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LoaderComponent = { UE4CodeGen_Private::EPropertyClass::Object, "LoaderComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x001200000008000d, 1, nullptr, STRUCT_OFFSET(ACriFsLoader, LoaderComponent), Z_Construct_UClass_UCriFsLoaderComponent_NoRegister, METADATA_PARAMS(NewProp_LoaderComponent_MetaData, ARRAY_COUNT(NewProp_LoaderComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LoaderComponent,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ACriFsLoader>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ACriFsLoader::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880080u,
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
	IMPLEMENT_CLASS(ACriFsLoader, 1893672350);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACriFsLoader(Z_Construct_UClass_ACriFsLoader, &ACriFsLoader::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("ACriFsLoader"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACriFsLoader);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
