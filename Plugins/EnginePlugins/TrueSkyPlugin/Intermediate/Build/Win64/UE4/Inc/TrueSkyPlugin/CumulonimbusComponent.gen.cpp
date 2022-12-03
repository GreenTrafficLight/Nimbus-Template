// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/CumulonimbusComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCumulonimbusComponent() {}
// Cross Module References
	TRUESKYPLUGIN_API UClass* Z_Construct_UClass_UCumulonimbusComponent_NoRegister();
	TRUESKYPLUGIN_API UClass* Z_Construct_UClass_UCumulonimbusComponent();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent();
	UPackage* Z_Construct_UPackage__Script_TrueSkyPlugin();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	void UCumulonimbusComponent::StaticRegisterNativesUCumulonimbusComponent()
	{
	}
	UClass* Z_Construct_UClass_UCumulonimbusComponent_NoRegister()
	{
		return UCumulonimbusComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UCumulonimbusComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBoxComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_TrueSkyPlugin,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "BlueprintType", "true" },
				{ "ClassGroupNames", "Custom" },
				{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger" },
				{ "IncludePath", "CumulonimbusComponent.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/CumulonimbusComponent.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rake_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "CumulonimbusComponent" },
				{ "ModuleRelativePath", "Public/CumulonimbusComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rake = { UE4CodeGen_Private::EPropertyClass::Struct, "Rake", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCumulonimbusComponent, Rake), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_Rake_MetaData, ARRAY_COUNT(NewProp_Rake_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Rake,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UCumulonimbusComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UCumulonimbusComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00A01080u,
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
	IMPLEMENT_CLASS(UCumulonimbusComponent, 524205635);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCumulonimbusComponent(Z_Construct_UClass_UCumulonimbusComponent, &UCumulonimbusComponent::StaticClass, TEXT("/Script/TrueSkyPlugin"), TEXT("UCumulonimbusComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCumulonimbusComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
