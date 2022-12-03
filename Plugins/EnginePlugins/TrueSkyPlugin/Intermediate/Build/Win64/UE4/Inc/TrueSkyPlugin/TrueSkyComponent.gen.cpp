// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/TrueSkyComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTrueSkyComponent() {}
// Cross Module References
	TRUESKYPLUGIN_API UClass* Z_Construct_UClass_UTrueSkyComponent_NoRegister();
	TRUESKYPLUGIN_API UClass* Z_Construct_UClass_UTrueSkyComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_TrueSkyPlugin();
// End Cross Module References
	void UTrueSkyComponent::StaticRegisterNativesUTrueSkyComponent()
	{
	}
	UClass* Z_Construct_UClass_UTrueSkyComponent_NoRegister()
	{
		return UTrueSkyComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UTrueSkyComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_USceneComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_TrueSkyPlugin,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "BlueprintType", "true" },
				{ "ClassGroupNames", "Custom" },
				{ "HideCategories", "Trigger PhysicsVolume" },
				{ "IncludePath", "TrueSkyComponent.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/TrueSkyComponent.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UTrueSkyComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UTrueSkyComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00A00080u,
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
	IMPLEMENT_CLASS(UTrueSkyComponent, 1236317004);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTrueSkyComponent(Z_Construct_UClass_UTrueSkyComponent, &UTrueSkyComponent::StaticClass, TEXT("/Script/TrueSkyPlugin"), TEXT("UTrueSkyComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTrueSkyComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
