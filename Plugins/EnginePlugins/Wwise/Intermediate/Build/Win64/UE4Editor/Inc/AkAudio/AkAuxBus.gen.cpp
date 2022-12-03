// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AkAuxBus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkAuxBus() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAuxBus_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAuxBus();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioBank_NoRegister();
// End Cross Module References
	void UAkAuxBus::StaticRegisterNativesUAkAuxBus()
	{
	}
	UClass* Z_Construct_UClass_UAkAuxBus_NoRegister()
	{
		return UAkAuxBus::StaticClass();
	}
	UClass* Z_Construct_UClass_UAkAuxBus()
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
				{ "IncludePath", "AkAuxBus.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/AkAuxBus.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequiredBank_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkAuxBus" },
				{ "ModuleRelativePath", "Public/AkAuxBus.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RequiredBank = { UE4CodeGen_Private::EPropertyClass::Object, "RequiredBank", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAkAuxBus, RequiredBank), Z_Construct_UClass_UAkAudioBank_NoRegister, METADATA_PARAMS(NewProp_RequiredBank_MetaData, ARRAY_COUNT(NewProp_RequiredBank_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RequiredBank,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAkAuxBus>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAkAuxBus::StaticClass,
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
	IMPLEMENT_CLASS(UAkAuxBus, 2664692499);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkAuxBus(Z_Construct_UClass_UAkAuxBus, &UAkAuxBus::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkAuxBus"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkAuxBus);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
