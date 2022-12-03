// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/InterpTrackAkAudioEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackAkAudioEvent() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UInterpTrackAkAudioEvent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UInterpTrackAkAudioEvent();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackVectorBase();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkAudioEventTrackKey();
// End Cross Module References
	void UInterpTrackAkAudioEvent::StaticRegisterNativesUInterpTrackAkAudioEvent()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackAkAudioEvent_NoRegister()
	{
		return UInterpTrackAkAudioEvent::StaticClass();
	}
	UClass* Z_Construct_UClass_UInterpTrackAkAudioEvent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UInterpTrackVectorBase,
				(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HideCategories", "Object" },
				{ "IncludePath", "InterpTrackAkAudioEvent.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/InterpTrackAkAudioEvent.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bContinueEventOnMatineeEnd_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "InterpTrackAkAudioEvent" },
				{ "ModuleRelativePath", "Public/InterpTrackAkAudioEvent.h" },
			};
#endif
			auto NewProp_bContinueEventOnMatineeEnd_SetBit = [](void* Obj){ ((UInterpTrackAkAudioEvent*)Obj)->bContinueEventOnMatineeEnd = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bContinueEventOnMatineeEnd = { UE4CodeGen_Private::EPropertyClass::Bool, "bContinueEventOnMatineeEnd", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UInterpTrackAkAudioEvent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bContinueEventOnMatineeEnd_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bContinueEventOnMatineeEnd_MetaData, ARRAY_COUNT(NewProp_bContinueEventOnMatineeEnd_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Events_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "InterpTrackAkAudioEvent" },
				{ "ModuleRelativePath", "Public/InterpTrackAkAudioEvent.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Events = { UE4CodeGen_Private::EPropertyClass::Array, "Events", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UInterpTrackAkAudioEvent, Events), METADATA_PARAMS(NewProp_Events_MetaData, ARRAY_COUNT(NewProp_Events_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Events_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Events", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FAkAudioEventTrackKey, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bContinueEventOnMatineeEnd,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Events,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Events_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UInterpTrackAkAudioEvent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UInterpTrackAkAudioEvent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00102080u,
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
	IMPLEMENT_CLASS(UInterpTrackAkAudioEvent, 1751603374);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackAkAudioEvent(Z_Construct_UClass_UInterpTrackAkAudioEvent, &UInterpTrackAkAudioEvent::StaticClass, TEXT("/Script/AkAudio"), TEXT("UInterpTrackAkAudioEvent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackAkAudioEvent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
