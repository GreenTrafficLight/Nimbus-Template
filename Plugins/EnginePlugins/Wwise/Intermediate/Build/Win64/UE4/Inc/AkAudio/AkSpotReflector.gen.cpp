// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AkSpotReflector.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkSpotReflector() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_AAkSpotReflector_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_AAkSpotReflector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAcousticTexture_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAuxBus_NoRegister();
// End Cross Module References
	void AAkSpotReflector::StaticRegisterNativesAAkSpotReflector()
	{
	}
	UClass* Z_Construct_UClass_AAkSpotReflector_NoRegister()
	{
		return AAkSpotReflector::StaticClass();
	}
	UClass* Z_Construct_UClass_AAkSpotReflector()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "AkSpotReflector.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/AkSpotReflector.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkSpotReflector" },
				{ "ModuleRelativePath", "Public/AkSpotReflector.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Level = { UE4CodeGen_Private::EPropertyClass::Float, "Level", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AAkSpotReflector, Level), METADATA_PARAMS(NewProp_Level_MetaData, ARRAY_COUNT(NewProp_Level_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceScalingFactor_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkSpotReflector" },
				{ "ModuleRelativePath", "Public/AkSpotReflector.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceScalingFactor = { UE4CodeGen_Private::EPropertyClass::Float, "DistanceScalingFactor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AAkSpotReflector, DistanceScalingFactor), METADATA_PARAMS(NewProp_DistanceScalingFactor_MetaData, ARRAY_COUNT(NewProp_DistanceScalingFactor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AcousticTexture_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkSpotReflector" },
				{ "ModuleRelativePath", "Public/AkSpotReflector.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AcousticTexture = { UE4CodeGen_Private::EPropertyClass::Object, "AcousticTexture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AAkSpotReflector, AcousticTexture), Z_Construct_UClass_UAkAcousticTexture_NoRegister, METADATA_PARAMS(NewProp_AcousticTexture_MetaData, ARRAY_COUNT(NewProp_AcousticTexture_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuxBusName_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkSpotReflector" },
				{ "ModuleRelativePath", "Public/AkSpotReflector.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_AuxBusName = { UE4CodeGen_Private::EPropertyClass::Str, "AuxBusName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, STRUCT_OFFSET(AAkSpotReflector, AuxBusName), METADATA_PARAMS(NewProp_AuxBusName_MetaData, ARRAY_COUNT(NewProp_AuxBusName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuxBus_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkSpotReflector" },
				{ "ModuleRelativePath", "Public/AkSpotReflector.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AuxBus = { UE4CodeGen_Private::EPropertyClass::Object, "AuxBus", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AAkSpotReflector, AuxBus), Z_Construct_UClass_UAkAuxBus_NoRegister, METADATA_PARAMS(NewProp_AuxBus_MetaData, ARRAY_COUNT(NewProp_AuxBus_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Level,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DistanceScalingFactor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AcousticTexture,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AuxBusName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AuxBus,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AAkSpotReflector>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AAkSpotReflector::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
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
	IMPLEMENT_CLASS(AAkSpotReflector, 713151282);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAkSpotReflector(Z_Construct_UClass_AAkSpotReflector, &AAkSpotReflector::StaticClass, TEXT("/Script/AkAudio"), TEXT("AAkSpotReflector"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAkSpotReflector);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
