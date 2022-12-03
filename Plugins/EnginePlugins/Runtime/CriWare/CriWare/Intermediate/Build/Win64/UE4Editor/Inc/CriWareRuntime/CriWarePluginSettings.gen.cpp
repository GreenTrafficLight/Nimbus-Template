// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/CriWarePluginSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCriWarePluginSettings() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UCriWarePluginSettings_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UCriWarePluginSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomAsrRackConfig();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomAsrRackConfigUI();
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomSoundRendererType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
// End Cross Module References
	void UCriWarePluginSettings::StaticRegisterNativesUCriWarePluginSettings()
	{
	}
	UClass* Z_Construct_UClass_UCriWarePluginSettings_NoRegister()
	{
		return UCriWarePluginSettings::StaticClass();
	}
	UClass* Z_Construct_UClass_UCriWarePluginSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "CriWarePluginSettings.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartupMovies_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "CriWarePluginSettings" },
				{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StartupMovies = { UE4CodeGen_Private::EPropertyClass::Array, "StartupMovies", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000044005, 1, nullptr, STRUCT_OFFSET(UCriWarePluginSettings, StartupMovies), METADATA_PARAMS(NewProp_StartupMovies_MetaData, ARRAY_COUNT(NewProp_StartupMovies_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_StartupMovies_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "StartupMovies", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000004000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMoviesAreSkippable_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "CriWarePluginSettings" },
				{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
			};
#endif
			auto NewProp_bMoviesAreSkippable_SetBit = [](void* Obj){ ((UCriWarePluginSettings*)Obj)->bMoviesAreSkippable = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMoviesAreSkippable = { UE4CodeGen_Private::EPropertyClass::Bool, "bMoviesAreSkippable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000044005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UCriWarePluginSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bMoviesAreSkippable_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bMoviesAreSkippable_MetaData, ARRAY_COUNT(NewProp_bMoviesAreSkippable_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWaitForMoviesToComplete_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "CriWarePluginSettings" },
				{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
			};
#endif
			auto NewProp_bWaitForMoviesToComplete_SetBit = [](void* Obj){ ((UCriWarePluginSettings*)Obj)->bWaitForMoviesToComplete = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWaitForMoviesToComplete = { UE4CodeGen_Private::EPropertyClass::Bool, "bWaitForMoviesToComplete", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000044005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UCriWarePluginSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bWaitForMoviesToComplete_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bWaitForMoviesToComplete_MetaData, ARRAY_COUNT(NewProp_bWaitForMoviesToComplete_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseManaStartupMovies_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "CriWarePluginSettings" },
				{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
			};
#endif
			auto NewProp_bUseManaStartupMovies_SetBit = [](void* Obj){ ((UCriWarePluginSettings*)Obj)->bUseManaStartupMovies = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseManaStartupMovies = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseManaStartupMovies", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000044005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UCriWarePluginSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseManaStartupMovies_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseManaStartupMovies_MetaData, ARRAY_COUNT(NewProp_bUseManaStartupMovies_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseH264Decoder_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "CriWarePluginSettings" },
				{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
			};
#endif
			auto NewProp_UseH264Decoder_SetBit = [](void* Obj){ ((UCriWarePluginSettings*)Obj)->UseH264Decoder = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseH264Decoder = { UE4CodeGen_Private::EPropertyClass::Bool, "UseH264Decoder", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UCriWarePluginSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_UseH264Decoder_SetBit)>::SetBit, METADATA_PARAMS(NewProp_UseH264Decoder_MetaData, ARRAY_COUNT(NewProp_UseH264Decoder_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxManaBPS_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "CriWarePluginSettings" },
				{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxManaBPS = { UE4CodeGen_Private::EPropertyClass::Int, "MaxManaBPS", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004005, 1, nullptr, STRUCT_OFFSET(UCriWarePluginSettings, MaxManaBPS), METADATA_PARAMS(NewProp_MaxManaBPS_MetaData, ARRAY_COUNT(NewProp_MaxManaBPS_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDecoderHandles_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "CriWarePluginSettings" },
				{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxDecoderHandles = { UE4CodeGen_Private::EPropertyClass::Int, "MaxDecoderHandles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004005, 1, nullptr, STRUCT_OFFSET(UCriWarePluginSettings, MaxDecoderHandles), METADATA_PARAMS(NewProp_MaxDecoderHandles_MetaData, ARRAY_COUNT(NewProp_MaxDecoderHandles_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableDecodeSkip_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "CriWarePluginSettings" },
				{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
			};
#endif
			auto NewProp_EnableDecodeSkip_SetBit = [](void* Obj){ ((UCriWarePluginSettings*)Obj)->EnableDecodeSkip = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableDecodeSkip = { UE4CodeGen_Private::EPropertyClass::Bool, "EnableDecodeSkip", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UCriWarePluginSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_EnableDecodeSkip_SetBit)>::SetBit, METADATA_PARAMS(NewProp_EnableDecodeSkip_MetaData, ARRAY_COUNT(NewProp_EnableDecodeSkip_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitializeMana_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "CriWarePluginSettings" },
				{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
			};
#endif
			auto NewProp_InitializeMana_SetBit = [](void* Obj){ ((UCriWarePluginSettings*)Obj)->InitializeMana = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InitializeMana = { UE4CodeGen_Private::EPropertyClass::Bool, "InitializeMana", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UCriWarePluginSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_InitializeMana_SetBit)>::SetBit, METADATA_PARAMS(NewProp_InitializeMana_MetaData, ARRAY_COUNT(NewProp_InitializeMana_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PS4_SamplingRateOfAudio3dStreamingVoices_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "CriWarePluginSettings" },
				{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_PS4_SamplingRateOfAudio3dStreamingVoices = { UE4CodeGen_Private::EPropertyClass::Int, "PS4_SamplingRateOfAudio3dStreamingVoices", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000004005, 1, nullptr, STRUCT_OFFSET(UCriWarePluginSettings, PS4_SamplingRateOfAudio3dStreamingVoices), METADATA_PARAMS(NewProp_PS4_SamplingRateOfAudio3dStreamingVoices_MetaData, ARRAY_COUNT(NewProp_PS4_SamplingRateOfAudio3dStreamingVoices_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PS4_NumberOfAudio3dStreamingVoices_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "CriWarePluginSettings" },
				{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_PS4_NumberOfAudio3dStreamingVoices = { UE4CodeGen_Private::EPropertyClass::Int, "PS4_NumberOfAudio3dStreamingVoices", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000004005, 1, nullptr, STRUCT_OFFSET(UCriWarePluginSettings, PS4_NumberOfAudio3dStreamingVoices), METADATA_PARAMS(NewProp_PS4_NumberOfAudio3dStreamingVoices_MetaData, ARRAY_COUNT(NewProp_PS4_NumberOfAudio3dStreamingVoices_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PS4_SamplingRateOfAudio3dMemoryVoices_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "CriWarePluginSettings" },
				{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_PS4_SamplingRateOfAudio3dMemoryVoices = { UE4CodeGen_Private::EPropertyClass::Int, "PS4_SamplingRateOfAudio3dMemoryVoices", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000004005, 1, nullptr, STRUCT_OFFSET(UCriWarePluginSettings, PS4_SamplingRateOfAudio3dMemoryVoices), METADATA_PARAMS(NewProp_PS4_SamplingRateOfAudio3dMemoryVoices_MetaData, ARRAY_COUNT(NewProp_PS4_SamplingRateOfAudio3dMemoryVoices_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PS4_NumberOfAudio3dMemoryVoices_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "CriWarePluginSettings" },
				{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_PS4_NumberOfAudio3dMemoryVoices = { UE4CodeGen_Private::EPropertyClass::Int, "PS4_NumberOfAudio3dMemoryVoices", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000004005, 1, nullptr, STRUCT_OFFSET(UCriWarePluginSettings, PS4_NumberOfAudio3dMemoryVoices), METADATA_PARAMS(NewProp_PS4_NumberOfAudio3dMemoryVoices_MetaData, ARRAY_COUNT(NewProp_PS4_NumberOfAudio3dMemoryVoices_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PS4_UseAudio3d_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "CriWarePluginSettings" },
				{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
			};
#endif
			auto NewProp_PS4_UseAudio3d_SetBit = [](void* Obj){ ((UCriWarePluginSettings*)Obj)->PS4_UseAudio3d = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PS4_UseAudio3d = { UE4CodeGen_Private::EPropertyClass::Bool, "PS4_UseAudio3d", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000004005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UCriWarePluginSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_PS4_UseAudio3d_SetBit)>::SetBit, METADATA_PARAMS(NewProp_PS4_UseAudio3d_MetaData, ARRAY_COUNT(NewProp_PS4_UseAudio3d_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PS4_OutputThreadPriority_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "CriWarePluginSettings" },
				{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_PS4_OutputThreadPriority = { UE4CodeGen_Private::EPropertyClass::Int, "PS4_OutputThreadPriority", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000004005, 1, nullptr, STRUCT_OFFSET(UCriWarePluginSettings, PS4_OutputThreadPriority), METADATA_PARAMS(NewProp_PS4_OutputThreadPriority_MetaData, ARRAY_COUNT(NewProp_PS4_OutputThreadPriority_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PS4_ServerThreadPriority_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "CriWarePluginSettings" },
				{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_PS4_ServerThreadPriority = { UE4CodeGen_Private::EPropertyClass::Int, "PS4_ServerThreadPriority", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000004005, 1, nullptr, STRUCT_OFFSET(UCriWarePluginSettings, PS4_ServerThreadPriority), METADATA_PARAMS(NewProp_PS4_ServerThreadPriority_MetaData, ARRAY_COUNT(NewProp_PS4_ServerThreadPriority_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PS4_OutputThreadAffinityMask_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "CriWarePluginSettings" },
				{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_PS4_OutputThreadAffinityMask = { UE4CodeGen_Private::EPropertyClass::Int, "PS4_OutputThreadAffinityMask", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000004005, 1, nullptr, STRUCT_OFFSET(UCriWarePluginSettings, PS4_OutputThreadAffinityMask), METADATA_PARAMS(NewProp_PS4_OutputThreadAffinityMask_MetaData, ARRAY_COUNT(NewProp_PS4_OutputThreadAffinityMask_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PS4_ServerThreadAffinityMask_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "CriWarePluginSettings" },
				{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_PS4_ServerThreadAffinityMask = { UE4CodeGen_Private::EPropertyClass::Int, "PS4_ServerThreadAffinityMask", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000004005, 1, nullptr, STRUCT_OFFSET(UCriWarePluginSettings, PS4_ServerThreadAffinityMask), METADATA_PARAMS(NewProp_PS4_ServerThreadAffinityMask_MetaData, ARRAY_COUNT(NewProp_PS4_ServerThreadAffinityMask_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WASAPI_NumChannels_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "CriWarePluginSettings" },
				{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_WASAPI_NumChannels = { UE4CodeGen_Private::EPropertyClass::Int, "WASAPI_NumChannels", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000004005, 1, nullptr, STRUCT_OFFSET(UCriWarePluginSettings, WASAPI_NumChannels), METADATA_PARAMS(NewProp_WASAPI_NumChannels_MetaData, ARRAY_COUNT(NewProp_WASAPI_NumChannels_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WASAPI_SamplingRate_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "CriWarePluginSettings" },
				{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_WASAPI_SamplingRate = { UE4CodeGen_Private::EPropertyClass::Int, "WASAPI_SamplingRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000004005, 1, nullptr, STRUCT_OFFSET(UCriWarePluginSettings, WASAPI_SamplingRate), METADATA_PARAMS(NewProp_WASAPI_SamplingRate_MetaData, ARRAY_COUNT(NewProp_WASAPI_SamplingRate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WASAPI_BitsPerSample_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "CriWarePluginSettings" },
				{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_WASAPI_BitsPerSample = { UE4CodeGen_Private::EPropertyClass::Int, "WASAPI_BitsPerSample", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000004005, 1, nullptr, STRUCT_OFFSET(UCriWarePluginSettings, WASAPI_BitsPerSample), METADATA_PARAMS(NewProp_WASAPI_BitsPerSample_MetaData, ARRAY_COUNT(NewProp_WASAPI_BitsPerSample_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WASAPI_IsExclusive_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "CriWarePluginSettings" },
				{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
			};
#endif
			auto NewProp_WASAPI_IsExclusive_SetBit = [](void* Obj){ ((UCriWarePluginSettings*)Obj)->WASAPI_IsExclusive = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WASAPI_IsExclusive = { UE4CodeGen_Private::EPropertyClass::Bool, "WASAPI_IsExclusive", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000004005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UCriWarePluginSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_WASAPI_IsExclusive_SetBit)>::SetBit, METADATA_PARAMS(NewProp_WASAPI_IsExclusive_MetaData, ARRAY_COUNT(NewProp_WASAPI_IsExclusive_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HcaMxStreamingVoiceNumChannels_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "CriWarePluginSettings" },
				{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_HcaMxStreamingVoiceNumChannels = { UE4CodeGen_Private::EPropertyClass::Int, "HcaMxStreamingVoiceNumChannels", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000004005, 1, nullptr, STRUCT_OFFSET(UCriWarePluginSettings, HcaMxStreamingVoiceNumChannels), METADATA_PARAMS(NewProp_HcaMxStreamingVoiceNumChannels_MetaData, ARRAY_COUNT(NewProp_HcaMxStreamingVoiceNumChannels_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumHcaMxStreamingVoices_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "CriWarePluginSettings" },
				{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumHcaMxStreamingVoices = { UE4CodeGen_Private::EPropertyClass::Int, "NumHcaMxStreamingVoices", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000004005, 1, nullptr, STRUCT_OFFSET(UCriWarePluginSettings, NumHcaMxStreamingVoices), METADATA_PARAMS(NewProp_NumHcaMxStreamingVoices_MetaData, ARRAY_COUNT(NewProp_NumHcaMxStreamingVoices_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HcaMxMemoryVoiceNumChannels_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "CriWarePluginSettings" },
				{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_HcaMxMemoryVoiceNumChannels = { UE4CodeGen_Private::EPropertyClass::Int, "HcaMxMemoryVoiceNumChannels", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000004005, 1, nullptr, STRUCT_OFFSET(UCriWarePluginSettings, HcaMxMemoryVoiceNumChannels), METADATA_PARAMS(NewProp_HcaMxMemoryVoiceNumChannels_MetaData, ARRAY_COUNT(NewProp_HcaMxMemoryVoiceNumChannels_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumHcaMxMemoryVoices_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "CriWarePluginSettings" },
				{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumHcaMxMemoryVoices = { UE4CodeGen_Private::EPropertyClass::Int, "NumHcaMxMemoryVoices", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000004005, 1, nullptr, STRUCT_OFFSET(UCriWarePluginSettings, NumHcaMxMemoryVoices), METADATA_PARAMS(NewProp_NumHcaMxMemoryVoices_MetaData, ARRAY_COUNT(NewProp_NumHcaMxMemoryVoices_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HcaMxVoiceSamplingRate_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "CriWarePluginSettings" },
				{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_HcaMxVoiceSamplingRate = { UE4CodeGen_Private::EPropertyClass::Int, "HcaMxVoiceSamplingRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000004005, 1, nullptr, STRUCT_OFFSET(UCriWarePluginSettings, HcaMxVoiceSamplingRate), METADATA_PARAMS(NewProp_HcaMxVoiceSamplingRate_MetaData, ARRAY_COUNT(NewProp_HcaMxVoiceSamplingRate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AsrRackConfig_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "CriWarePluginSettings" },
				{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AsrRackConfig = { UE4CodeGen_Private::EPropertyClass::Array, "AsrRackConfig", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004005, 1, nullptr, STRUCT_OFFSET(UCriWarePluginSettings, AsrRackConfig), METADATA_PARAMS(NewProp_AsrRackConfig_MetaData, ARRAY_COUNT(NewProp_AsrRackConfig_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AsrRackConfig_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "AsrRackConfig", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FAtomAsrRackConfig, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AsrRackConfigUI_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "CriWarePluginSettings" },
				{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AsrRackConfigUI = { UE4CodeGen_Private::EPropertyClass::Array, "AsrRackConfigUI", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCriWarePluginSettings, AsrRackConfigUI), METADATA_PARAMS(NewProp_AsrRackConfigUI_MetaData, ARRAY_COUNT(NewProp_AsrRackConfigUI_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AsrRackConfigUI_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "AsrRackConfigUI", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FAtomAsrRackConfigUI, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundRendererType_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "CriWarePluginSettings" },
				{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SoundRendererType = { UE4CodeGen_Private::EPropertyClass::Int, "SoundRendererType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004005, 1, nullptr, STRUCT_OFFSET(UCriWarePluginSettings, SoundRendererType), METADATA_PARAMS(NewProp_SoundRendererType_MetaData, ARRAY_COUNT(NewProp_SoundRendererType_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundRendererTypeUI_MetaData[] = {
				{ "Category", "CriWarePluginSettings" },
				{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_SoundRendererTypeUI = { UE4CodeGen_Private::EPropertyClass::Byte, "SoundRendererTypeUI", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UCriWarePluginSettings, SoundRendererTypeUI), Z_Construct_UEnum_CriWareRuntime_EAtomSoundRendererType, METADATA_PARAMS(NewProp_SoundRendererTypeUI_MetaData, ARRAY_COUNT(NewProp_SoundRendererTypeUI_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceFactor_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "CriWarePluginSettings" },
				{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceFactor = { UE4CodeGen_Private::EPropertyClass::Float, "DistanceFactor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004005, 1, nullptr, STRUCT_OFFSET(UCriWarePluginSettings, DistanceFactor), METADATA_PARAMS(NewProp_DistanceFactor_MetaData, ARRAY_COUNT(NewProp_DistanceFactor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AcfFileName_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "CriWarePluginSettings" },
				{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_AcfFileName = { UE4CodeGen_Private::EPropertyClass::Str, "AcfFileName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004005, 1, nullptr, STRUCT_OFFSET(UCriWarePluginSettings, AcfFileName), METADATA_PARAMS(NewProp_AcfFileName_MetaData, ARRAY_COUNT(NewProp_AcfFileName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtomConfig_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "CriWarePluginSettings" },
				{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AtomConfig = { UE4CodeGen_Private::EPropertyClass::Struct, "AtomConfig", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004005, 1, nullptr, STRUCT_OFFSET(UCriWarePluginSettings, AtomConfig), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(NewProp_AtomConfig_MetaData, ARRAY_COUNT(NewProp_AtomConfig_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StandardStreamingVoiceSamplingRate_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "CriWarePluginSettings" },
				{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_StandardStreamingVoiceSamplingRate = { UE4CodeGen_Private::EPropertyClass::Int, "StandardStreamingVoiceSamplingRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004005, 1, nullptr, STRUCT_OFFSET(UCriWarePluginSettings, StandardStreamingVoiceSamplingRate), METADATA_PARAMS(NewProp_StandardStreamingVoiceSamplingRate_MetaData, ARRAY_COUNT(NewProp_StandardStreamingVoiceSamplingRate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StandardStreamingVoiceNumChannels_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "CriWarePluginSettings" },
				{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_StandardStreamingVoiceNumChannels = { UE4CodeGen_Private::EPropertyClass::Int, "StandardStreamingVoiceNumChannels", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004005, 1, nullptr, STRUCT_OFFSET(UCriWarePluginSettings, StandardStreamingVoiceNumChannels), METADATA_PARAMS(NewProp_StandardStreamingVoiceNumChannels_MetaData, ARRAY_COUNT(NewProp_StandardStreamingVoiceNumChannels_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumStandardStreamingVoices_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "CriWarePluginSettings" },
				{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumStandardStreamingVoices = { UE4CodeGen_Private::EPropertyClass::Int, "NumStandardStreamingVoices", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004005, 1, nullptr, STRUCT_OFFSET(UCriWarePluginSettings, NumStandardStreamingVoices), METADATA_PARAMS(NewProp_NumStandardStreamingVoices_MetaData, ARRAY_COUNT(NewProp_NumStandardStreamingVoices_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StandardMemoryVoiceSamplingRate_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "CriWarePluginSettings" },
				{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_StandardMemoryVoiceSamplingRate = { UE4CodeGen_Private::EPropertyClass::Int, "StandardMemoryVoiceSamplingRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004005, 1, nullptr, STRUCT_OFFSET(UCriWarePluginSettings, StandardMemoryVoiceSamplingRate), METADATA_PARAMS(NewProp_StandardMemoryVoiceSamplingRate_MetaData, ARRAY_COUNT(NewProp_StandardMemoryVoiceSamplingRate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StandardMemoryVoiceNumChannels_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "CriWarePluginSettings" },
				{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_StandardMemoryVoiceNumChannels = { UE4CodeGen_Private::EPropertyClass::Int, "StandardMemoryVoiceNumChannels", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004005, 1, nullptr, STRUCT_OFFSET(UCriWarePluginSettings, StandardMemoryVoiceNumChannels), METADATA_PARAMS(NewProp_StandardMemoryVoiceNumChannels_MetaData, ARRAY_COUNT(NewProp_StandardMemoryVoiceNumChannels_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumStandardMemoryVoices_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "CriWarePluginSettings" },
				{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumStandardMemoryVoices = { UE4CodeGen_Private::EPropertyClass::Int, "NumStandardMemoryVoices", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004005, 1, nullptr, STRUCT_OFFSET(UCriWarePluginSettings, NumStandardMemoryVoices), METADATA_PARAMS(NewProp_NumStandardMemoryVoices_MetaData, ARRAY_COUNT(NewProp_NumStandardMemoryVoices_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputsLogAtom_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "CriWarePluginSettings" },
				{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
			};
#endif
			auto NewProp_OutputsLogAtom_SetBit = [](void* Obj){ ((UCriWarePluginSettings*)Obj)->OutputsLogAtom = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_OutputsLogAtom = { UE4CodeGen_Private::EPropertyClass::Bool, "OutputsLogAtom", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UCriWarePluginSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_OutputsLogAtom_SetBit)>::SetBit, METADATA_PARAMS(NewProp_OutputsLogAtom_MetaData, ARRAY_COUNT(NewProp_OutputsLogAtom_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UsesInGamePreview_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "CriWarePluginSettings" },
				{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
			};
#endif
			auto NewProp_UsesInGamePreview_SetBit = [](void* Obj){ ((UCriWarePluginSettings*)Obj)->UsesInGamePreview = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UsesInGamePreview = { UE4CodeGen_Private::EPropertyClass::Bool, "UsesInGamePreview", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UCriWarePluginSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_UsesInGamePreview_SetBit)>::SetBit, METADATA_PARAMS(NewProp_UsesInGamePreview_MetaData, ARRAY_COUNT(NewProp_UsesInGamePreview_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxVirtualVoices_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "CriWarePluginSettings" },
				{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxVirtualVoices = { UE4CodeGen_Private::EPropertyClass::Int, "MaxVirtualVoices", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004005, 1, nullptr, STRUCT_OFFSET(UCriWarePluginSettings, MaxVirtualVoices), METADATA_PARAMS(NewProp_MaxVirtualVoices_MetaData, ARRAY_COUNT(NewProp_MaxVirtualVoices_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PS4_MemoryFileSystemThreadPriority_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "CriWarePluginSettings" },
				{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_PS4_MemoryFileSystemThreadPriority = { UE4CodeGen_Private::EPropertyClass::Int, "PS4_MemoryFileSystemThreadPriority", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000004005, 1, nullptr, STRUCT_OFFSET(UCriWarePluginSettings, PS4_MemoryFileSystemThreadPriority), METADATA_PARAMS(NewProp_PS4_MemoryFileSystemThreadPriority_MetaData, ARRAY_COUNT(NewProp_PS4_MemoryFileSystemThreadPriority_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PS4_DataDecompressionThreadPriority_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "CriWarePluginSettings" },
				{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_PS4_DataDecompressionThreadPriority = { UE4CodeGen_Private::EPropertyClass::Int, "PS4_DataDecompressionThreadPriority", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000004005, 1, nullptr, STRUCT_OFFSET(UCriWarePluginSettings, PS4_DataDecompressionThreadPriority), METADATA_PARAMS(NewProp_PS4_DataDecompressionThreadPriority_MetaData, ARRAY_COUNT(NewProp_PS4_DataDecompressionThreadPriority_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PS4_FileAccessThreadPriority_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "CriWarePluginSettings" },
				{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_PS4_FileAccessThreadPriority = { UE4CodeGen_Private::EPropertyClass::Int, "PS4_FileAccessThreadPriority", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000004005, 1, nullptr, STRUCT_OFFSET(UCriWarePluginSettings, PS4_FileAccessThreadPriority), METADATA_PARAMS(NewProp_PS4_FileAccessThreadPriority_MetaData, ARRAY_COUNT(NewProp_PS4_FileAccessThreadPriority_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PS4_MemoryFileSystemThreadAffinityMask_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "CriWarePluginSettings" },
				{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_PS4_MemoryFileSystemThreadAffinityMask = { UE4CodeGen_Private::EPropertyClass::Int, "PS4_MemoryFileSystemThreadAffinityMask", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000004005, 1, nullptr, STRUCT_OFFSET(UCriWarePluginSettings, PS4_MemoryFileSystemThreadAffinityMask), METADATA_PARAMS(NewProp_PS4_MemoryFileSystemThreadAffinityMask_MetaData, ARRAY_COUNT(NewProp_PS4_MemoryFileSystemThreadAffinityMask_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PS4_DataDecompressionThreadAffinityMask_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "CriWarePluginSettings" },
				{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_PS4_DataDecompressionThreadAffinityMask = { UE4CodeGen_Private::EPropertyClass::Int, "PS4_DataDecompressionThreadAffinityMask", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000004005, 1, nullptr, STRUCT_OFFSET(UCriWarePluginSettings, PS4_DataDecompressionThreadAffinityMask), METADATA_PARAMS(NewProp_PS4_DataDecompressionThreadAffinityMask_MetaData, ARRAY_COUNT(NewProp_PS4_DataDecompressionThreadAffinityMask_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PS4_FileAccessThreadAffinityMask_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "CriWarePluginSettings" },
				{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_PS4_FileAccessThreadAffinityMask = { UE4CodeGen_Private::EPropertyClass::Int, "PS4_FileAccessThreadAffinityMask", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000004005, 1, nullptr, STRUCT_OFFSET(UCriWarePluginSettings, PS4_FileAccessThreadAffinityMask), METADATA_PARAMS(NewProp_PS4_FileAccessThreadAffinityMask_MetaData, ARRAY_COUNT(NewProp_PS4_FileAccessThreadAffinityMask_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputsLogFileSystem_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "CriWarePluginSettings" },
				{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
			};
#endif
			auto NewProp_OutputsLogFileSystem_SetBit = [](void* Obj){ ((UCriWarePluginSettings*)Obj)->OutputsLogFileSystem = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_OutputsLogFileSystem = { UE4CodeGen_Private::EPropertyClass::Bool, "OutputsLogFileSystem", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UCriWarePluginSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_OutputsLogFileSystem_SetBit)>::SetBit, METADATA_PARAMS(NewProp_OutputsLogFileSystem_MetaData, ARRAY_COUNT(NewProp_OutputsLogFileSystem_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxFiles_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "CriWarePluginSettings" },
				{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxFiles = { UE4CodeGen_Private::EPropertyClass::Int, "MaxFiles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004005, 1, nullptr, STRUCT_OFFSET(UCriWarePluginSettings, MaxFiles), METADATA_PARAMS(NewProp_MaxFiles_MetaData, ARRAY_COUNT(NewProp_MaxFiles_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumLoaders_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "CriWarePluginSettings" },
				{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumLoaders = { UE4CodeGen_Private::EPropertyClass::Int, "NumLoaders", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004005, 1, nullptr, STRUCT_OFFSET(UCriWarePluginSettings, NumLoaders), METADATA_PARAMS(NewProp_NumLoaders_MetaData, ARRAY_COUNT(NewProp_NumLoaders_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxBinds_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "CriWarePluginSettings" },
				{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxBinds = { UE4CodeGen_Private::EPropertyClass::Int, "MaxBinds", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004005, 1, nullptr, STRUCT_OFFSET(UCriWarePluginSettings, MaxBinds), METADATA_PARAMS(NewProp_MaxBinds_MetaData, ARRAY_COUNT(NewProp_MaxBinds_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumBinders_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "CriWarePluginSettings" },
				{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumBinders = { UE4CodeGen_Private::EPropertyClass::Int, "NumBinders", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004005, 1, nullptr, STRUCT_OFFSET(UCriWarePluginSettings, NumBinders), METADATA_PARAMS(NewProp_NumBinders_MetaData, ARRAY_COUNT(NewProp_NumBinders_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContentDir_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "CriWarePluginSettings" },
				{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ContentDir = { UE4CodeGen_Private::EPropertyClass::Str, "ContentDir", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004005, 1, nullptr, STRUCT_OFFSET(UCriWarePluginSettings, ContentDir), METADATA_PARAMS(NewProp_ContentDir_MetaData, ARRAY_COUNT(NewProp_ContentDir_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NonAssetContentDir_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "CriWarePluginSettings" },
				{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NonAssetContentDir = { UE4CodeGen_Private::EPropertyClass::Struct, "NonAssetContentDir", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCriWarePluginSettings, NonAssetContentDir), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(NewProp_NonAssetContentDir_MetaData, ARRAY_COUNT(NewProp_NonAssetContentDir_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNoExistCriWareIni_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "CriWarePluginSettings" },
				{ "ModuleRelativePath", "Public/CriWarePluginSettings.h" },
			};
#endif
			auto NewProp_bNoExistCriWareIni_SetBit = [](void* Obj){ ((UCriWarePluginSettings*)Obj)->bNoExistCriWareIni = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNoExistCriWareIni = { UE4CodeGen_Private::EPropertyClass::Bool, "bNoExistCriWareIni", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000004005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UCriWarePluginSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bNoExistCriWareIni_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bNoExistCriWareIni_MetaData, ARRAY_COUNT(NewProp_bNoExistCriWareIni_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartupMovies,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartupMovies_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bMoviesAreSkippable,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bWaitForMoviesToComplete,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseManaStartupMovies,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UseH264Decoder,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxManaBPS,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxDecoderHandles,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EnableDecodeSkip,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InitializeMana,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PS4_SamplingRateOfAudio3dStreamingVoices,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PS4_NumberOfAudio3dStreamingVoices,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PS4_SamplingRateOfAudio3dMemoryVoices,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PS4_NumberOfAudio3dMemoryVoices,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PS4_UseAudio3d,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PS4_OutputThreadPriority,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PS4_ServerThreadPriority,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PS4_OutputThreadAffinityMask,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PS4_ServerThreadAffinityMask,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WASAPI_NumChannels,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WASAPI_SamplingRate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WASAPI_BitsPerSample,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WASAPI_IsExclusive,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HcaMxStreamingVoiceNumChannels,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NumHcaMxStreamingVoices,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HcaMxMemoryVoiceNumChannels,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NumHcaMxMemoryVoices,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HcaMxVoiceSamplingRate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AsrRackConfig,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AsrRackConfig_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AsrRackConfigUI,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AsrRackConfigUI_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SoundRendererType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SoundRendererTypeUI,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DistanceFactor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AcfFileName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AtomConfig,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StandardStreamingVoiceSamplingRate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StandardStreamingVoiceNumChannels,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NumStandardStreamingVoices,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StandardMemoryVoiceSamplingRate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StandardMemoryVoiceNumChannels,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NumStandardMemoryVoices,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutputsLogAtom,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UsesInGamePreview,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxVirtualVoices,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PS4_MemoryFileSystemThreadPriority,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PS4_DataDecompressionThreadPriority,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PS4_FileAccessThreadPriority,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PS4_MemoryFileSystemThreadAffinityMask,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PS4_DataDecompressionThreadAffinityMask,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PS4_FileAccessThreadAffinityMask,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutputsLogFileSystem,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxFiles,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NumLoaders,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxBinds,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NumBinders,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ContentDir,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NonAssetContentDir,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNoExistCriWareIni,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UCriWarePluginSettings>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UCriWarePluginSettings::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100086u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"Engine",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCriWarePluginSettings, 1197887431);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCriWarePluginSettings(Z_Construct_UClass_UCriWarePluginSettings, &UCriWarePluginSettings::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UCriWarePluginSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCriWarePluginSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
