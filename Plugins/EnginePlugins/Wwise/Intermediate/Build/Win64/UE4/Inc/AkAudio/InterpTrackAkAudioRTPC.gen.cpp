// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/InterpTrackAkAudioRTPC.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackAkAudioRTPC() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UInterpTrackAkAudioRTPC_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UInterpTrackAkAudioRTPC();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackFloatBase();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	void UInterpTrackAkAudioRTPC::StaticRegisterNativesUInterpTrackAkAudioRTPC()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackAkAudioRTPC_NoRegister()
	{
		return UInterpTrackAkAudioRTPC::StaticClass();
	}
	UClass* Z_Construct_UClass_UInterpTrackAkAudioRTPC()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UInterpTrackFloatBase,
				(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HideCategories", "Object" },
				{ "IncludePath", "InterpTrackAkAudioRTPC.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/InterpTrackAkAudioRTPC.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bContinueRTPCOnMatineeEnd_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "InterpTrackAkAudioRTPC" },
				{ "ModuleRelativePath", "Public/InterpTrackAkAudioRTPC.h" },
			};
#endif
			auto NewProp_bContinueRTPCOnMatineeEnd_SetBit = [](void* Obj){ ((UInterpTrackAkAudioRTPC*)Obj)->bContinueRTPCOnMatineeEnd = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bContinueRTPCOnMatineeEnd = { UE4CodeGen_Private::EPropertyClass::Bool, "bContinueRTPCOnMatineeEnd", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UInterpTrackAkAudioRTPC), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bContinueRTPCOnMatineeEnd_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bContinueRTPCOnMatineeEnd_MetaData, ARRAY_COUNT(NewProp_bContinueRTPCOnMatineeEnd_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPlayOnReverse_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "InterpTrackAkAudioRTPC" },
				{ "ModuleRelativePath", "Public/InterpTrackAkAudioRTPC.h" },
			};
#endif
			auto NewProp_bPlayOnReverse_SetBit = [](void* Obj){ ((UInterpTrackAkAudioRTPC*)Obj)->bPlayOnReverse = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlayOnReverse = { UE4CodeGen_Private::EPropertyClass::Bool, "bPlayOnReverse", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UInterpTrackAkAudioRTPC), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bPlayOnReverse_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bPlayOnReverse_MetaData, ARRAY_COUNT(NewProp_bPlayOnReverse_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Param_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "InterpTrackAkAudioRTPC" },
				{ "ModuleRelativePath", "Public/InterpTrackAkAudioRTPC.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Param = { UE4CodeGen_Private::EPropertyClass::Str, "Param", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UInterpTrackAkAudioRTPC, Param), METADATA_PARAMS(NewProp_Param_MetaData, ARRAY_COUNT(NewProp_Param_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bContinueRTPCOnMatineeEnd,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bPlayOnReverse,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Param,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UInterpTrackAkAudioRTPC>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UInterpTrackAkAudioRTPC::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00082080u,
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
	IMPLEMENT_CLASS(UInterpTrackAkAudioRTPC, 956872118);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackAkAudioRTPC(Z_Construct_UClass_UInterpTrackAkAudioRTPC, &UInterpTrackAkAudioRTPC::StaticClass, TEXT("/Script/AkAudio"), TEXT("UInterpTrackAkAudioRTPC"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackAkAudioRTPC);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
