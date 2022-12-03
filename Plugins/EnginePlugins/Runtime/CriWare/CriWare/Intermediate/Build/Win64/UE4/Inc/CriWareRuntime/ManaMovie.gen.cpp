// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/ManaMovie.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManaMovie() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaMovie_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaMovie();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaSource();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FManaEventPointInfo();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FManaAudioTrackInfo();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FManaVideoTrackInfo();
// End Cross Module References
	void UManaMovie::StaticRegisterNativesUManaMovie()
	{
	}
	UClass* Z_Construct_UClass_UManaMovie_NoRegister()
	{
		return UManaMovie::StaticClass();
	}
	UClass* Z_Construct_UClass_UManaMovie()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UManaSource,
				(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "ManaMovie.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/ManaMovie.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAlpha_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "ManaMovie" },
				{ "ModuleRelativePath", "Public/ManaMovie.h" },
			};
#endif
			auto NewProp_bIsAlpha_SetBit = [](void* Obj){ ((UManaMovie*)Obj)->bIsAlpha = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAlpha = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsAlpha", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UManaMovie), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsAlpha_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsAlpha_MetaData, ARRAY_COUNT(NewProp_bIsAlpha_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSubtitleSize_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "ManaMovie" },
				{ "ModuleRelativePath", "Public/ManaMovie.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxSubtitleSize = { UE4CodeGen_Private::EPropertyClass::Int, "MaxSubtitleSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000005, 1, nullptr, STRUCT_OFFSET(UManaMovie, MaxSubtitleSize), METADATA_PARAMS(NewProp_MaxSubtitleSize_MetaData, ARRAY_COUNT(NewProp_MaxSubtitleSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumSubtitleChannels_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "ManaMovie" },
				{ "ModuleRelativePath", "Public/ManaMovie.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumSubtitleChannels = { UE4CodeGen_Private::EPropertyClass::Int, "NumSubtitleChannels", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000005, 1, nullptr, STRUCT_OFFSET(UManaMovie, NumSubtitleChannels), METADATA_PARAMS(NewProp_NumSubtitleChannels_MetaData, ARRAY_COUNT(NewProp_NumSubtitleChannels_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventPoints_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "ManaMovie" },
				{ "ModuleRelativePath", "Public/ManaMovie.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EventPoints = { UE4CodeGen_Private::EPropertyClass::Array, "EventPoints", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000005, 1, nullptr, STRUCT_OFFSET(UManaMovie, EventPoints), METADATA_PARAMS(NewProp_EventPoints_MetaData, ARRAY_COUNT(NewProp_EventPoints_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_EventPoints_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "EventPoints", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FManaEventPointInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioTracks_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "ManaMovie" },
				{ "ModuleRelativePath", "Public/ManaMovie.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AudioTracks = { UE4CodeGen_Private::EPropertyClass::Array, "AudioTracks", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000005, 1, nullptr, STRUCT_OFFSET(UManaMovie, AudioTracks), METADATA_PARAMS(NewProp_AudioTracks_MetaData, ARRAY_COUNT(NewProp_AudioTracks_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AudioTracks_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "AudioTracks", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FManaAudioTrackInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VideoTracks_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "ManaMovie" },
				{ "ModuleRelativePath", "Public/ManaMovie.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VideoTracks = { UE4CodeGen_Private::EPropertyClass::Array, "VideoTracks", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000005, 1, nullptr, STRUCT_OFFSET(UManaMovie, VideoTracks), METADATA_PARAMS(NewProp_VideoTracks_MetaData, ARRAY_COUNT(NewProp_VideoTracks_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_VideoTracks_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "VideoTracks", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FManaVideoTrackInfo, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsAlpha,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxSubtitleSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NumSubtitleChannels,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EventPoints,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EventPoints_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AudioTracks,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AudioTracks_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VideoTracks,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VideoTracks_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UManaMovie>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UManaMovie::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100081u,
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
	IMPLEMENT_CLASS(UManaMovie, 3295567697);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UManaMovie(Z_Construct_UClass_UManaMovie, &UManaMovie::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UManaMovie"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UManaMovie);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
