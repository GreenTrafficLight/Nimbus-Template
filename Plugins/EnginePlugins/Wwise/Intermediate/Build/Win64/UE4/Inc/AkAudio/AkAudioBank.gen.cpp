// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AkAudioBank.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkAudioBank() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioBank_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioBank();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	void UAkAudioBank::StaticRegisterNativesUAkAudioBank()
	{
	}
	UClass* Z_Construct_UClass_UAkAudioBank_NoRegister()
	{
		return UAkAudioBank::StaticClass();
	}
	UClass* Z_Construct_UClass_UAkAudioBank()
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
				{ "IncludePath", "AkAudioBank.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/AkAudioBank.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoLoad_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkAudioBank" },
				{ "ModuleRelativePath", "Public/AkAudioBank.h" },
			};
#endif
			auto NewProp_AutoLoad_SetBit = [](void* Obj){ ((UAkAudioBank*)Obj)->AutoLoad = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AutoLoad = { UE4CodeGen_Private::EPropertyClass::Bool, "AutoLoad", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAkAudioBank), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_AutoLoad_SetBit)>::SetBit, METADATA_PARAMS(NewProp_AutoLoad_MetaData, ARRAY_COUNT(NewProp_AutoLoad_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AutoLoad,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAkAudioBank>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAkAudioBank::StaticClass,
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
	IMPLEMENT_CLASS(UAkAudioBank, 3566999748);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkAudioBank(Z_Construct_UClass_UAkAudioBank, &UAkAudioBank::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkAudioBank"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkAudioBank);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
