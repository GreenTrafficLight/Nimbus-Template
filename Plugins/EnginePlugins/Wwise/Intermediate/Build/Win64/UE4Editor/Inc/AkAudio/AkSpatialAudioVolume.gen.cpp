// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AkSpatialAudioVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkSpatialAudioVolume() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_AAkSpatialAudioVolume_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_AAkSpatialAudioVolume();
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkRoomComponent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkLateReverbComponent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkSurfaceReflectorSetComponent_NoRegister();
// End Cross Module References
	void AAkSpatialAudioVolume::StaticRegisterNativesAAkSpatialAudioVolume()
	{
	}
	UClass* Z_Construct_UClass_AAkSpatialAudioVolume_NoRegister()
	{
		return AAkSpatialAudioVolume::StaticClass();
	}
	UClass* Z_Construct_UClass_AAkSpatialAudioVolume()
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
				{ "IncludePath", "AkSpatialAudioVolume.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/AkSpatialAudioVolume.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Room_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkSpatialAudioVolume" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/AkSpatialAudioVolume.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Room = { UE4CodeGen_Private::EPropertyClass::Object, "Room", RF_Public|RF_Transient|RF_MarkAsNative, 0x001200000008000d, 1, nullptr, STRUCT_OFFSET(AAkSpatialAudioVolume, Room), Z_Construct_UClass_UAkRoomComponent_NoRegister, METADATA_PARAMS(NewProp_Room_MetaData, ARRAY_COUNT(NewProp_Room_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LateReverb_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkSpatialAudioVolume" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/AkSpatialAudioVolume.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LateReverb = { UE4CodeGen_Private::EPropertyClass::Object, "LateReverb", RF_Public|RF_Transient|RF_MarkAsNative, 0x001200000008000d, 1, nullptr, STRUCT_OFFSET(AAkSpatialAudioVolume, LateReverb), Z_Construct_UClass_UAkLateReverbComponent_NoRegister, METADATA_PARAMS(NewProp_LateReverb_MetaData, ARRAY_COUNT(NewProp_LateReverb_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurfaceReflectorSet_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkSpatialAudioVolume" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/AkSpatialAudioVolume.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SurfaceReflectorSet = { UE4CodeGen_Private::EPropertyClass::Object, "SurfaceReflectorSet", RF_Public|RF_Transient|RF_MarkAsNative, 0x001200000008000d, 1, nullptr, STRUCT_OFFSET(AAkSpatialAudioVolume, SurfaceReflectorSet), Z_Construct_UClass_UAkSurfaceReflectorSetComponent_NoRegister, METADATA_PARAMS(NewProp_SurfaceReflectorSet_MetaData, ARRAY_COUNT(NewProp_SurfaceReflectorSet_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Room,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LateReverb,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SurfaceReflectorSet,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AAkSpatialAudioVolume>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AAkSpatialAudioVolume::StaticClass,
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
	IMPLEMENT_CLASS(AAkSpatialAudioVolume, 1779779282);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAkSpatialAudioVolume(Z_Construct_UClass_AAkSpatialAudioVolume, &AAkSpatialAudioVolume::StaticClass, TEXT("/Script/AkAudio"), TEXT("AAkSpatialAudioVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAkSpatialAudioVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
