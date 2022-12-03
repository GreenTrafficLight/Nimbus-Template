// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/InterpTrackInstAkAudioEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackInstAkAudioEvent() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UInterpTrackInstAkAudioEvent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UInterpTrackInstAkAudioEvent();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInst();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	void UInterpTrackInstAkAudioEvent::StaticRegisterNativesUInterpTrackInstAkAudioEvent()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackInstAkAudioEvent_NoRegister()
	{
		return UInterpTrackInstAkAudioEvent::StaticClass();
	}
	UClass* Z_Construct_UClass_UInterpTrackInstAkAudioEvent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UInterpTrackInst,
				(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "InterpTrackInstAkAudioEvent.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/InterpTrackInstAkAudioEvent.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastUpdatePosition_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "InterpTrackInstAkAudioEvent" },
				{ "ModuleRelativePath", "Public/InterpTrackInstAkAudioEvent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastUpdatePosition = { UE4CodeGen_Private::EPropertyClass::Float, "LastUpdatePosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UInterpTrackInstAkAudioEvent, LastUpdatePosition), METADATA_PARAMS(NewProp_LastUpdatePosition_MetaData, ARRAY_COUNT(NewProp_LastUpdatePosition_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LastUpdatePosition,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UInterpTrackInstAkAudioEvent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UInterpTrackInstAkAudioEvent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00080080u,
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
	IMPLEMENT_CLASS(UInterpTrackInstAkAudioEvent, 1041191378);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackInstAkAudioEvent(Z_Construct_UClass_UInterpTrackInstAkAudioEvent, &UInterpTrackInstAkAudioEvent::StaticClass, TEXT("/Script/AkAudio"), TEXT("UInterpTrackInstAkAudioEvent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackInstAkAudioEvent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
