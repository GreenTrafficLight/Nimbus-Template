// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AkSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkSettings() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkSettings_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
// End Cross Module References
	void UAkSettings::StaticRegisterNativesUAkSettings()
	{
	}
	UClass* Z_Construct_UClass_UAkSettings_NoRegister()
	{
		return UAkSettings::StaticClass();
	}
	UClass* Z_Construct_UClass_UAkSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "AkSettings.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/AkSettings.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseAlternateObstructionOcclusionFeature_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkSettings" },
				{ "ModuleRelativePath", "Public/AkSettings.h" },
			};
#endif
			auto NewProp_UseAlternateObstructionOcclusionFeature_SetBit = [](void* Obj){ ((UAkSettings*)Obj)->UseAlternateObstructionOcclusionFeature = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseAlternateObstructionOcclusionFeature = { UE4CodeGen_Private::EPropertyClass::Bool, "UseAlternateObstructionOcclusionFeature", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAkSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_UseAlternateObstructionOcclusionFeature_SetBit)>::SetBit, METADATA_PARAMS(NewProp_UseAlternateObstructionOcclusionFeature_MetaData, ARRAY_COUNT(NewProp_UseAlternateObstructionOcclusionFeature_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuppressWwiseProjectPathWarnings_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkSettings" },
				{ "ModuleRelativePath", "Public/AkSettings.h" },
			};
#endif
			auto NewProp_SuppressWwiseProjectPathWarnings_SetBit = [](void* Obj){ ((UAkSettings*)Obj)->SuppressWwiseProjectPathWarnings = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SuppressWwiseProjectPathWarnings = { UE4CodeGen_Private::EPropertyClass::Bool, "SuppressWwiseProjectPathWarnings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAkSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_SuppressWwiseProjectPathWarnings_SetBit)>::SetBit, METADATA_PARAMS(NewProp_SuppressWwiseProjectPathWarnings_MetaData, ARRAY_COUNT(NewProp_SuppressWwiseProjectPathWarnings_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WwiseMacInstallationPath_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkSettings" },
				{ "ModuleRelativePath", "Public/AkSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_WwiseMacInstallationPath = { UE4CodeGen_Private::EPropertyClass::Struct, "WwiseMacInstallationPath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004005, 1, nullptr, STRUCT_OFFSET(UAkSettings, WwiseMacInstallationPath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(NewProp_WwiseMacInstallationPath_MetaData, ARRAY_COUNT(NewProp_WwiseMacInstallationPath_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WwiseWindowsInstallationPath_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkSettings" },
				{ "ModuleRelativePath", "Public/AkSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_WwiseWindowsInstallationPath = { UE4CodeGen_Private::EPropertyClass::Struct, "WwiseWindowsInstallationPath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004005, 1, nullptr, STRUCT_OFFSET(UAkSettings, WwiseWindowsInstallationPath), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(NewProp_WwiseWindowsInstallationPath_MetaData, ARRAY_COUNT(NewProp_WwiseWindowsInstallationPath_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WwiseProjectPath_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkSettings" },
				{ "ModuleRelativePath", "Public/AkSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_WwiseProjectPath = { UE4CodeGen_Private::EPropertyClass::Struct, "WwiseProjectPath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004005, 1, nullptr, STRUCT_OFFSET(UAkSettings, WwiseProjectPath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(NewProp_WwiseProjectPath_MetaData, ARRAY_COUNT(NewProp_WwiseProjectPath_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSimultaneousReverbVolumes_MetaData[] = {
				{ "Category", "AkSettings" },
				{ "ModuleRelativePath", "Public/AkSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_MaxSimultaneousReverbVolumes = { UE4CodeGen_Private::EPropertyClass::Byte, "MaxSimultaneousReverbVolumes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UAkSettings, MaxSimultaneousReverbVolumes), nullptr, METADATA_PARAMS(NewProp_MaxSimultaneousReverbVolumes_MetaData, ARRAY_COUNT(NewProp_MaxSimultaneousReverbVolumes_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UseAlternateObstructionOcclusionFeature,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SuppressWwiseProjectPathWarnings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WwiseMacInstallationPath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WwiseWindowsInstallationPath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WwiseProjectPath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxSimultaneousReverbVolumes,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAkSettings>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAkSettings::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100086u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkSettings, 1982054852);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkSettings(Z_Construct_UClass_UAkSettings, &UAkSettings::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
