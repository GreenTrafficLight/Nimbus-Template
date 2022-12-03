// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AkLateReverbComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkLateReverbComponent() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkLateReverbComponent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkLateReverbComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAuxBus_NoRegister();
// End Cross Module References
	void UAkLateReverbComponent::StaticRegisterNativesUAkLateReverbComponent()
	{
	}
	UClass* Z_Construct_UClass_UAkLateReverbComponent_NoRegister()
	{
		return UAkLateReverbComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UAkLateReverbComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_USceneComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "BlueprintType", "true" },
				{ "ClassGroupNames", "Custom" },
				{ "HideCategories", "Trigger PhysicsVolume" },
				{ "IncludePath", "AkLateReverbComponent.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/AkLateReverbComponent.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkLateReverbComponent" },
				{ "ModuleRelativePath", "Public/AkLateReverbComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Priority = { UE4CodeGen_Private::EPropertyClass::Float, "Priority", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAkLateReverbComponent, Priority), METADATA_PARAMS(NewProp_Priority_MetaData, ARRAY_COUNT(NewProp_Priority_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FadeRate_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkLateReverbComponent" },
				{ "ModuleRelativePath", "Public/AkLateReverbComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeRate = { UE4CodeGen_Private::EPropertyClass::Float, "FadeRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAkLateReverbComponent, FadeRate), METADATA_PARAMS(NewProp_FadeRate_MetaData, ARRAY_COUNT(NewProp_FadeRate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SendLevel_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkLateReverbComponent" },
				{ "ModuleRelativePath", "Public/AkLateReverbComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SendLevel = { UE4CodeGen_Private::EPropertyClass::Float, "SendLevel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAkLateReverbComponent, SendLevel), METADATA_PARAMS(NewProp_SendLevel_MetaData, ARRAY_COUNT(NewProp_SendLevel_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuxBusName_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkLateReverbComponent" },
				{ "ModuleRelativePath", "Public/AkLateReverbComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_AuxBusName = { UE4CodeGen_Private::EPropertyClass::Str, "AuxBusName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, STRUCT_OFFSET(UAkLateReverbComponent, AuxBusName), METADATA_PARAMS(NewProp_AuxBusName_MetaData, ARRAY_COUNT(NewProp_AuxBusName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuxBus_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkLateReverbComponent" },
				{ "ModuleRelativePath", "Public/AkLateReverbComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AuxBus = { UE4CodeGen_Private::EPropertyClass::Object, "AuxBus", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAkLateReverbComponent, AuxBus), Z_Construct_UClass_UAkAuxBus_NoRegister, METADATA_PARAMS(NewProp_AuxBus_MetaData, ARRAY_COUNT(NewProp_AuxBus_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnable_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkLateReverbComponent" },
				{ "ModuleRelativePath", "Public/AkLateReverbComponent.h" },
			};
#endif
			auto NewProp_bEnable_SetBit = [](void* Obj){ ((UAkLateReverbComponent*)Obj)->bEnable = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UAkLateReverbComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnable_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnable_MetaData, ARRAY_COUNT(NewProp_bEnable_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Priority,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FadeRate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SendLevel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AuxBusName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AuxBus,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnable,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAkLateReverbComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAkLateReverbComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
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
	IMPLEMENT_CLASS(UAkLateReverbComponent, 1799012943);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkLateReverbComponent(Z_Construct_UClass_UAkLateReverbComponent, &UAkLateReverbComponent::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkLateReverbComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkLateReverbComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
