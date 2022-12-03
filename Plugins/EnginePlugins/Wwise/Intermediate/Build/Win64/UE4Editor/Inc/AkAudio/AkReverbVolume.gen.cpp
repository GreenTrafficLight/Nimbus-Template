// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AkReverbVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkReverbVolume() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_AAkReverbVolume_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_AAkReverbVolume();
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkLateReverbComponent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAuxBus_NoRegister();
// End Cross Module References
	void AAkReverbVolume::StaticRegisterNativesAAkReverbVolume()
	{
	}
	UClass* Z_Construct_UClass_AAkReverbVolume_NoRegister()
	{
		return AAkReverbVolume::StaticClass();
	}
	UClass* Z_Construct_UClass_AAkReverbVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AVolume,
				(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HideCategories", "Brush Physics Object Display Rendering Physics Input Blueprint" },
				{ "IncludePath", "AkReverbVolume.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/AkReverbVolume.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LateReverbComponent_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkReverbVolume" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/AkReverbVolume.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LateReverbComponent = { UE4CodeGen_Private::EPropertyClass::Object, "LateReverbComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x001200000008000d, 1, nullptr, STRUCT_OFFSET(AAkReverbVolume, LateReverbComponent), Z_Construct_UClass_UAkLateReverbComponent_NoRegister, METADATA_PARAMS(NewProp_LateReverbComponent_MetaData, ARRAY_COUNT(NewProp_LateReverbComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkReverbVolume" },
				{ "ModuleRelativePath", "Public/AkReverbVolume.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Priority = { UE4CodeGen_Private::EPropertyClass::Float, "Priority", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AAkReverbVolume, Priority), METADATA_PARAMS(NewProp_Priority_MetaData, ARRAY_COUNT(NewProp_Priority_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FadeRate_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkReverbVolume" },
				{ "ModuleRelativePath", "Public/AkReverbVolume.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeRate = { UE4CodeGen_Private::EPropertyClass::Float, "FadeRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AAkReverbVolume, FadeRate), METADATA_PARAMS(NewProp_FadeRate_MetaData, ARRAY_COUNT(NewProp_FadeRate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SendLevel_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkReverbVolume" },
				{ "ModuleRelativePath", "Public/AkReverbVolume.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SendLevel = { UE4CodeGen_Private::EPropertyClass::Float, "SendLevel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AAkReverbVolume, SendLevel), METADATA_PARAMS(NewProp_SendLevel_MetaData, ARRAY_COUNT(NewProp_SendLevel_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuxBusName_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkReverbVolume" },
				{ "ModuleRelativePath", "Public/AkReverbVolume.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_AuxBusName = { UE4CodeGen_Private::EPropertyClass::Str, "AuxBusName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AAkReverbVolume, AuxBusName), METADATA_PARAMS(NewProp_AuxBusName_MetaData, ARRAY_COUNT(NewProp_AuxBusName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuxBus_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkReverbVolume" },
				{ "ModuleRelativePath", "Public/AkReverbVolume.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AuxBus = { UE4CodeGen_Private::EPropertyClass::Object, "AuxBus", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AAkReverbVolume, AuxBus), Z_Construct_UClass_UAkAuxBus_NoRegister, METADATA_PARAMS(NewProp_AuxBus_MetaData, ARRAY_COUNT(NewProp_AuxBus_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkReverbVolume" },
				{ "ModuleRelativePath", "Public/AkReverbVolume.h" },
			};
#endif
			auto NewProp_bEnabled_SetBit = [](void* Obj){ ((AAkReverbVolume*)Obj)->bEnabled = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnabled", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(AAkReverbVolume), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnabled_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnabled_MetaData, ARRAY_COUNT(NewProp_bEnabled_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LateReverbComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Priority,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FadeRate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SendLevel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AuxBusName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AuxBus,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnabled,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AAkReverbVolume>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AAkReverbVolume::StaticClass,
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
	IMPLEMENT_CLASS(AAkReverbVolume, 578826614);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAkReverbVolume(Z_Construct_UClass_AAkReverbVolume, &AAkReverbVolume::StaticClass, TEXT("/Script/AkAudio"), TEXT("AAkReverbVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAkReverbVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
