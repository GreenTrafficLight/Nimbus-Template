// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AkAudioEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkAudioEvent() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioBank_NoRegister();
// End Cross Module References
	void UAkAudioEvent::StaticRegisterNativesUAkAudioEvent()
	{
	}
	UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister()
	{
		return UAkAudioEvent::StaticClass();
	}
	UClass* Z_Construct_UClass_UAkAudioEvent()
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
				{ "IncludePath", "AkAudioEvent.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/AkAudioEvent.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumDuration_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkAudioEvent" },
				{ "ModuleRelativePath", "Public/AkAudioEvent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaximumDuration = { UE4CodeGen_Private::EPropertyClass::Float, "MaximumDuration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAkAudioEvent, MaximumDuration), METADATA_PARAMS(NewProp_MaximumDuration_MetaData, ARRAY_COUNT(NewProp_MaximumDuration_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumDuration_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkAudioEvent" },
				{ "ModuleRelativePath", "Public/AkAudioEvent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinimumDuration = { UE4CodeGen_Private::EPropertyClass::Float, "MinimumDuration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAkAudioEvent, MinimumDuration), METADATA_PARAMS(NewProp_MinimumDuration_MetaData, ARRAY_COUNT(NewProp_MinimumDuration_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsInfinite_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkAudioEvent" },
				{ "ModuleRelativePath", "Public/AkAudioEvent.h" },
			};
#endif
			auto NewProp_IsInfinite_SetBit = [](void* Obj){ ((UAkAudioEvent*)Obj)->IsInfinite = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsInfinite = { UE4CodeGen_Private::EPropertyClass::Bool, "IsInfinite", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAkAudioEvent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_IsInfinite_SetBit)>::SetBit, METADATA_PARAMS(NewProp_IsInfinite_MetaData, ARRAY_COUNT(NewProp_IsInfinite_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAttenuationRadius_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkAudioEvent" },
				{ "ModuleRelativePath", "Public/AkAudioEvent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxAttenuationRadius = { UE4CodeGen_Private::EPropertyClass::Float, "MaxAttenuationRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAkAudioEvent, MaxAttenuationRadius), METADATA_PARAMS(NewProp_MaxAttenuationRadius_MetaData, ARRAY_COUNT(NewProp_MaxAttenuationRadius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequiredBank_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkAudioEvent" },
				{ "ModuleRelativePath", "Public/AkAudioEvent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RequiredBank = { UE4CodeGen_Private::EPropertyClass::Object, "RequiredBank", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAkAudioEvent, RequiredBank), Z_Construct_UClass_UAkAudioBank_NoRegister, METADATA_PARAMS(NewProp_RequiredBank_MetaData, ARRAY_COUNT(NewProp_RequiredBank_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaximumDuration,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinimumDuration,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IsInfinite,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxAttenuationRadius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RequiredBank,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAkAudioEvent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAkAudioEvent::StaticClass,
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
	IMPLEMENT_CLASS(UAkAudioEvent, 3497502585);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkAudioEvent(Z_Construct_UClass_UAkAudioEvent, &UAkAudioEvent::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkAudioEvent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkAudioEvent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
