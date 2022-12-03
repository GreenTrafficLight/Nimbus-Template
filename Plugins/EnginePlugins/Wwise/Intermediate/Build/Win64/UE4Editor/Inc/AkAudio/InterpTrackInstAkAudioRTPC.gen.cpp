// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/InterpTrackInstAkAudioRTPC.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackInstAkAudioRTPC() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UInterpTrackInstAkAudioRTPC_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UInterpTrackInstAkAudioRTPC();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInst();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	void UInterpTrackInstAkAudioRTPC::StaticRegisterNativesUInterpTrackInstAkAudioRTPC()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackInstAkAudioRTPC_NoRegister()
	{
		return UInterpTrackInstAkAudioRTPC::StaticClass();
	}
	UClass* Z_Construct_UClass_UInterpTrackInstAkAudioRTPC()
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
				{ "IncludePath", "InterpTrackInstAkAudioRTPC.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/InterpTrackInstAkAudioRTPC.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastUpdatePosition_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "InterpTrackInstAkAudioRTPC" },
				{ "ModuleRelativePath", "Public/InterpTrackInstAkAudioRTPC.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastUpdatePosition = { UE4CodeGen_Private::EPropertyClass::Float, "LastUpdatePosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UInterpTrackInstAkAudioRTPC, LastUpdatePosition), METADATA_PARAMS(NewProp_LastUpdatePosition_MetaData, ARRAY_COUNT(NewProp_LastUpdatePosition_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LastUpdatePosition,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UInterpTrackInstAkAudioRTPC>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UInterpTrackInstAkAudioRTPC::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00000080u,
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
	IMPLEMENT_CLASS(UInterpTrackInstAkAudioRTPC, 2230827732);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackInstAkAudioRTPC(Z_Construct_UClass_UInterpTrackInstAkAudioRTPC, &UInterpTrackInstAkAudioRTPC::StaticClass, TEXT("/Script/AkAudio"), TEXT("UInterpTrackInstAkAudioRTPC"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackInstAkAudioRTPC);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
