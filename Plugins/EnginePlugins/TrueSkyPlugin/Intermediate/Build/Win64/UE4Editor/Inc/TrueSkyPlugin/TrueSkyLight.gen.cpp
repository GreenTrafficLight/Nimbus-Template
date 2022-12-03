// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/TrueSkyLight.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTrueSkyLight() {}
// Cross Module References
	TRUESKYPLUGIN_API UClass* Z_Construct_UClass_ATrueSkyLight_NoRegister();
	TRUESKYPLUGIN_API UClass* Z_Construct_UClass_ATrueSkyLight();
	ENGINE_API UClass* Z_Construct_UClass_ALight();
	UPackage* Z_Construct_UPackage__Script_TrueSkyPlugin();
// End Cross Module References
	void ATrueSkyLight::StaticRegisterNativesATrueSkyLight()
	{
	}
	UClass* Z_Construct_UClass_ATrueSkyLight_NoRegister()
	{
		return ATrueSkyLight::StaticClass();
	}
	UClass* Z_Construct_UClass_ATrueSkyLight()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ALight,
				(UObject* (*)())Z_Construct_UPackage__Script_TrueSkyPlugin,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HideCategories", "Input Collision Replication" },
				{ "IncludePath", "TrueSkyLight.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/TrueSkyLight.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ATrueSkyLight>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ATrueSkyLight::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880080u,
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
	IMPLEMENT_CLASS(ATrueSkyLight, 300588273);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATrueSkyLight(Z_Construct_UClass_ATrueSkyLight, &ATrueSkyLight::StaticClass, TEXT("/Script/TrueSkyPlugin"), TEXT("ATrueSkyLight"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATrueSkyLight);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
