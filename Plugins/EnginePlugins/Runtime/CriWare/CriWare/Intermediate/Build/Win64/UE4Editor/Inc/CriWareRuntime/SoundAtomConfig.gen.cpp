// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SoundAtomConfig.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundAtomConfig() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomConfig_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomConfig();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	void USoundAtomConfig::StaticRegisterNativesUSoundAtomConfig()
	{
	}
	UClass* Z_Construct_UClass_USoundAtomConfig_NoRegister()
	{
		return USoundAtomConfig::StaticClass();
	}
	UClass* Z_Construct_UClass_USoundAtomConfig()
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
				{ "IncludePath", "SoundAtomConfig.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/SoundAtomConfig.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AcfFilePath_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "SoundAtomConfig" },
				{ "ModuleRelativePath", "Public/SoundAtomConfig.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_AcfFilePath = { UE4CodeGen_Private::EPropertyClass::Str, "AcfFilePath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USoundAtomConfig, AcfFilePath), METADATA_PARAMS(NewProp_AcfFilePath_MetaData, ARRAY_COUNT(NewProp_AcfFilePath_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AcfFilePath,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USoundAtomConfig>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USoundAtomConfig::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
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
	IMPLEMENT_CLASS(USoundAtomConfig, 2094111954);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundAtomConfig(Z_Construct_UClass_USoundAtomConfig, &USoundAtomConfig::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("USoundAtomConfig"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundAtomConfig);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
