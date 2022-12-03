// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/ManaComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManaComponent() {}
// Cross Module References
	CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_UManaComponent_OnEventPoint__DelegateSignature();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaComponent();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FManaEventPointInfo();
	CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_UManaComponent_OnRequestData__DelegateSignature();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaComponent_NoRegister();
	CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_UManaComponent_OnStatusChanged__DelegateSignature();
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EManaComponentStatus();
	CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_UManaComponent_OnSubtitleChanged__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UManaComponent_ChangeSubtitlesChannel();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UManaComponent_EnableSeamless();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UManaComponent_EnableSubtitles();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UManaComponent_GetFrameNumber();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UManaComponent_GetSource();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaMovie_NoRegister();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UManaComponent_GetStatus();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UManaComponent_GetTexture();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaTexture_NoRegister();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UManaComponent_GetTime();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UManaComponent_GetVolume();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UManaComponent_IsLooping();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UManaComponent_IsPaused();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UManaComponent_IsPlaying();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UManaComponent_IsPreparing();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UManaComponent_IsReady();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UManaComponent_Next();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UManaComponent_Pause();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UManaComponent_Play();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UManaComponent_Prepare();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UManaComponent_PreparePlaylistIndex();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UManaComponent_Previous();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UManaComponent_ResetCachedData();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UManaComponent_SeekToPosition();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UManaComponent_SetCachedData();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UManaComponent_SetFile();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UManaComponent_SetTexture();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UManaComponent_SetVolume();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UManaComponent_Stop();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UManaComponent_StopAndWaitCompletion();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UManaComponent_ToIndex();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaPlaylist_NoRegister();
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EManaFrameAction();
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EManaSubtitlesEncoding();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_UManaComponent_OnEventPoint__DelegateSignature()
	{
		struct ManaComponent_eventOnEventPoint_Parms
		{
			FManaEventPointInfo EventPointInfo;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_EventPointInfo = { UE4CodeGen_Private::EPropertyClass::Struct, "EventPointInfo", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ManaComponent_eventOnEventPoint_Parms, EventPointInfo), Z_Construct_UScriptStruct_FManaEventPointInfo, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EventPointInfo,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ManaComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, "OnEventPoint__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00120000, sizeof(ManaComponent_eventOnEventPoint_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_UManaComponent_OnRequestData__DelegateSignature()
	{
		struct ManaComponent_eventOnRequestData_Parms
		{
			UManaComponent* ManaComponent;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ManaComponent_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ManaComponent = { UE4CodeGen_Private::EPropertyClass::Object, "ManaComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(ManaComponent_eventOnRequestData_Parms, ManaComponent), Z_Construct_UClass_UManaComponent_NoRegister, METADATA_PARAMS(NewProp_ManaComponent_MetaData, ARRAY_COUNT(NewProp_ManaComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ManaComponent,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ManaComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, "OnRequestData__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00120000, sizeof(ManaComponent_eventOnRequestData_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_UManaComponent_OnStatusChanged__DelegateSignature()
	{
		struct ManaComponent_eventOnStatusChanged_Parms
		{
			EManaComponentStatus Status;
			UManaComponent* ManaComponent;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ManaComponent_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ManaComponent = { UE4CodeGen_Private::EPropertyClass::Object, "ManaComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(ManaComponent_eventOnStatusChanged_Parms, ManaComponent), Z_Construct_UClass_UManaComponent_NoRegister, METADATA_PARAMS(NewProp_ManaComponent_MetaData, ARRAY_COUNT(NewProp_ManaComponent_MetaData)) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Status = { UE4CodeGen_Private::EPropertyClass::Enum, "Status", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ManaComponent_eventOnStatusChanged_Parms, Status), Z_Construct_UEnum_CriWareRuntime_EManaComponentStatus, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Status_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ManaComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Status,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Status_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ManaComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, "OnStatusChanged__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(ManaComponent_eventOnStatusChanged_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_UManaComponent_OnSubtitleChanged__DelegateSignature()
	{
		struct ManaComponent_eventOnSubtitleChanged_Parms
		{
			FText Subtitle;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_Subtitle = { UE4CodeGen_Private::EPropertyClass::Text, "Subtitle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ManaComponent_eventOnSubtitleChanged_Parms, Subtitle), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Subtitle,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ManaComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, "OnSubtitleChanged__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(ManaComponent_eventOnSubtitleChanged_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	void UManaComponent::StaticRegisterNativesUManaComponent()
	{
		UClass* Class = UManaComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeSubtitlesChannel", (Native)&UManaComponent::execChangeSubtitlesChannel },
			{ "EnableSeamless", (Native)&UManaComponent::execEnableSeamless },
			{ "EnableSubtitles", (Native)&UManaComponent::execEnableSubtitles },
			{ "GetFrameNumber", (Native)&UManaComponent::execGetFrameNumber },
			{ "GetSource", (Native)&UManaComponent::execGetSource },
			{ "GetStatus", (Native)&UManaComponent::execGetStatus },
			{ "GetTexture", (Native)&UManaComponent::execGetTexture },
			{ "GetTime", (Native)&UManaComponent::execGetTime },
			{ "GetVolume", (Native)&UManaComponent::execGetVolume },
			{ "IsLooping", (Native)&UManaComponent::execIsLooping },
			{ "IsPaused", (Native)&UManaComponent::execIsPaused },
			{ "IsPlaying", (Native)&UManaComponent::execIsPlaying },
			{ "IsPreparing", (Native)&UManaComponent::execIsPreparing },
			{ "IsReady", (Native)&UManaComponent::execIsReady },
			{ "Next", (Native)&UManaComponent::execNext },
			{ "Pause", (Native)&UManaComponent::execPause },
			{ "Play", (Native)&UManaComponent::execPlay },
			{ "Prepare", (Native)&UManaComponent::execPrepare },
			{ "PreparePlaylistIndex", (Native)&UManaComponent::execPreparePlaylistIndex },
			{ "Previous", (Native)&UManaComponent::execPrevious },
			{ "ResetCachedData", (Native)&UManaComponent::execResetCachedData },
			{ "SeekToPosition", (Native)&UManaComponent::execSeekToPosition },
			{ "SetCachedData", (Native)&UManaComponent::execSetCachedData },
			{ "SetFile", (Native)&UManaComponent::execSetFile },
			{ "SetTexture", (Native)&UManaComponent::execSetTexture },
			{ "SetVolume", (Native)&UManaComponent::execSetVolume },
			{ "Stop", (Native)&UManaComponent::execStop },
			{ "StopAndWaitCompletion", (Native)&UManaComponent::execStopAndWaitCompletion },
			{ "ToIndex", (Native)&UManaComponent::execToIndex },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UManaComponent_ChangeSubtitlesChannel()
	{
		struct ManaComponent_eventChangeSubtitlesChannel_Parms
		{
			int32 Channel;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Channel = { UE4CodeGen_Private::EPropertyClass::Int, "Channel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ManaComponent_eventChangeSubtitlesChannel_Parms, Channel), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Channel,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ManaComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, "ChangeSubtitlesChannel", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ManaComponent_eventChangeSubtitlesChannel_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UManaComponent_EnableSeamless()
	{
		struct ManaComponent_eventEnableSeamless_Parms
		{
			bool bEnable;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bEnable_SetBit = [](void* Obj){ ((ManaComponent_eventEnableSeamless_Parms*)Obj)->bEnable = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ManaComponent_eventEnableSeamless_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnable_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnable,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ManaComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, "EnableSeamless", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ManaComponent_eventEnableSeamless_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UManaComponent_EnableSubtitles()
	{
		struct ManaComponent_eventEnableSubtitles_Parms
		{
			bool bEnable;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bEnable_SetBit = [](void* Obj){ ((ManaComponent_eventEnableSubtitles_Parms*)Obj)->bEnable = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ManaComponent_eventEnableSubtitles_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnable_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnable,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ManaComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, "EnableSubtitles", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ManaComponent_eventEnableSubtitles_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UManaComponent_GetFrameNumber()
	{
		struct ManaComponent_eventGetFrameNumber_Parms
		{
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ManaComponent_eventGetFrameNumber_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ManaComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, "GetFrameNumber", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ManaComponent_eventGetFrameNumber_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UManaComponent_GetSource()
	{
		struct ManaComponent_eventGetSource_Parms
		{
			UManaMovie* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ManaComponent_eventGetSource_Parms, ReturnValue), Z_Construct_UClass_UManaMovie_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ManaComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, "GetSource", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ManaComponent_eventGetSource_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UManaComponent_GetStatus()
	{
		struct ManaComponent_eventGetStatus_Parms
		{
			EManaComponentStatus ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Enum, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ManaComponent_eventGetStatus_Parms, ReturnValue), Z_Construct_UEnum_CriWareRuntime_EManaComponentStatus, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ManaComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, "GetStatus", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ManaComponent_eventGetStatus_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UManaComponent_GetTexture()
	{
		struct ManaComponent_eventGetTexture_Parms
		{
			UManaTexture* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ManaComponent_eventGetTexture_Parms, ReturnValue), Z_Construct_UClass_UManaTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ManaComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, "GetTexture", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ManaComponent_eventGetTexture_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UManaComponent_GetTime()
	{
		struct ManaComponent_eventGetTime_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ManaComponent_eventGetTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ManaComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, "GetTime", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ManaComponent_eventGetTime_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UManaComponent_GetVolume()
	{
		struct ManaComponent_eventGetVolume_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ManaComponent_eventGetVolume_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ManaComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, "GetVolume", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ManaComponent_eventGetVolume_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UManaComponent_IsLooping()
	{
		struct ManaComponent_eventIsLooping_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((ManaComponent_eventIsLooping_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ManaComponent_eventIsLooping_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ManaComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, "IsLooping", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(ManaComponent_eventIsLooping_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UManaComponent_IsPaused()
	{
		struct ManaComponent_eventIsPaused_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((ManaComponent_eventIsPaused_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ManaComponent_eventIsPaused_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ManaComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, "IsPaused", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(ManaComponent_eventIsPaused_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UManaComponent_IsPlaying()
	{
		struct ManaComponent_eventIsPlaying_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((ManaComponent_eventIsPlaying_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ManaComponent_eventIsPlaying_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ManaComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, "IsPlaying", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(ManaComponent_eventIsPlaying_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UManaComponent_IsPreparing()
	{
		struct ManaComponent_eventIsPreparing_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((ManaComponent_eventIsPreparing_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ManaComponent_eventIsPreparing_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ManaComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, "IsPreparing", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(ManaComponent_eventIsPreparing_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UManaComponent_IsReady()
	{
		struct ManaComponent_eventIsReady_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((ManaComponent_eventIsReady_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ManaComponent_eventIsReady_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ManaComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, "IsReady", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(ManaComponent_eventIsReady_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UManaComponent_Next()
	{
		struct ManaComponent_eventNext_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((ManaComponent_eventNext_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ManaComponent_eventNext_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ManaComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, "Next", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ManaComponent_eventNext_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UManaComponent_Pause()
	{
		struct ManaComponent_eventPause_Parms
		{
			bool bPause;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bPause_SetBit = [](void* Obj){ ((ManaComponent_eventPause_Parms*)Obj)->bPause = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPause = { UE4CodeGen_Private::EPropertyClass::Bool, "bPause", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ManaComponent_eventPause_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bPause_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bPause,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ManaComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, "Pause", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ManaComponent_eventPause_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UManaComponent_Play()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ManaComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, "Play", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UManaComponent_Prepare()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ManaComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, "Prepare", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UManaComponent_PreparePlaylistIndex()
	{
		struct ManaComponent_eventPreparePlaylistIndex_Parms
		{
			int32 Index;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index = { UE4CodeGen_Private::EPropertyClass::Int, "Index", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ManaComponent_eventPreparePlaylistIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Index,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ManaComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, "PreparePlaylistIndex", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ManaComponent_eventPreparePlaylistIndex_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UManaComponent_Previous()
	{
		struct ManaComponent_eventPrevious_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((ManaComponent_eventPrevious_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ManaComponent_eventPrevious_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ManaComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, "Previous", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ManaComponent_eventPrevious_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UManaComponent_ResetCachedData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ManaComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, "ResetCachedData", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UManaComponent_SeekToPosition()
	{
		struct ManaComponent_eventSeekToPosition_Parms
		{
			int32 FrameNumber;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_FrameNumber = { UE4CodeGen_Private::EPropertyClass::Int, "FrameNumber", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ManaComponent_eventSeekToPosition_Parms, FrameNumber), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FrameNumber,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ManaComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, "SeekToPosition", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ManaComponent_eventSeekToPosition_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UManaComponent_SetCachedData()
	{
		struct ManaComponent_eventSetCachedData_Parms
		{
			TArray<uint8> DataArray;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataArray_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DataArray = { UE4CodeGen_Private::EPropertyClass::Array, "DataArray", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(ManaComponent_eventSetCachedData_Parms, DataArray), METADATA_PARAMS(NewProp_DataArray_MetaData, ARRAY_COUNT(NewProp_DataArray_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_DataArray_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "DataArray", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DataArray,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DataArray_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ManaComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, "SetCachedData", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(ManaComponent_eventSetCachedData_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UManaComponent_SetFile()
	{
		struct ManaComponent_eventSetFile_Parms
		{
			FString MovieFilePath;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovieFilePath_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_MovieFilePath = { UE4CodeGen_Private::EPropertyClass::Str, "MovieFilePath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ManaComponent_eventSetFile_Parms, MovieFilePath), METADATA_PARAMS(NewProp_MovieFilePath_MetaData, ARRAY_COUNT(NewProp_MovieFilePath_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MovieFilePath,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ManaComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, "SetFile", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ManaComponent_eventSetFile_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UManaComponent_SetTexture()
	{
		struct ManaComponent_eventSetTexture_Parms
		{
			UManaTexture* Texture;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture = { UE4CodeGen_Private::EPropertyClass::Object, "Texture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ManaComponent_eventSetTexture_Parms, Texture), Z_Construct_UClass_UManaTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Texture,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ManaComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, "SetTexture", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ManaComponent_eventSetTexture_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UManaComponent_SetVolume()
	{
		struct ManaComponent_eventSetVolume_Parms
		{
			float Volume;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Volume = { UE4CodeGen_Private::EPropertyClass::Float, "Volume", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ManaComponent_eventSetVolume_Parms, Volume), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Volume,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ManaComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, "SetVolume", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ManaComponent_eventSetVolume_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UManaComponent_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ManaComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, "Stop", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UManaComponent_StopAndWaitCompletion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ManaComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, "StopAndWaitCompletion", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UManaComponent_ToIndex()
	{
		struct ManaComponent_eventToIndex_Parms
		{
			int32 Index;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((ManaComponent_eventToIndex_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ManaComponent_eventToIndex_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index = { UE4CodeGen_Private::EPropertyClass::Int, "Index", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ManaComponent_eventToIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Index,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ManaComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, "ToIndex", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ManaComponent_eventToIndex_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UManaComponent_NoRegister()
	{
		return UManaComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UManaComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UActorComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UManaComponent_ChangeSubtitlesChannel, "ChangeSubtitlesChannel" }, // 1356604984
				{ &Z_Construct_UFunction_UManaComponent_EnableSeamless, "EnableSeamless" }, // 115255212
				{ &Z_Construct_UFunction_UManaComponent_EnableSubtitles, "EnableSubtitles" }, // 3221214240
				{ &Z_Construct_UFunction_UManaComponent_GetFrameNumber, "GetFrameNumber" }, // 1426082636
				{ &Z_Construct_UFunction_UManaComponent_GetSource, "GetSource" }, // 2203271234
				{ &Z_Construct_UFunction_UManaComponent_GetStatus, "GetStatus" }, // 2872735502
				{ &Z_Construct_UFunction_UManaComponent_GetTexture, "GetTexture" }, // 345221967
				{ &Z_Construct_UFunction_UManaComponent_GetTime, "GetTime" }, // 2516093866
				{ &Z_Construct_UFunction_UManaComponent_GetVolume, "GetVolume" }, // 3218929315
				{ &Z_Construct_UFunction_UManaComponent_IsLooping, "IsLooping" }, // 748060833
				{ &Z_Construct_UFunction_UManaComponent_IsPaused, "IsPaused" }, // 2089561031
				{ &Z_Construct_UFunction_UManaComponent_IsPlaying, "IsPlaying" }, // 158066227
				{ &Z_Construct_UFunction_UManaComponent_IsPreparing, "IsPreparing" }, // 732616893
				{ &Z_Construct_UFunction_UManaComponent_IsReady, "IsReady" }, // 2615956571
				{ &Z_Construct_UFunction_UManaComponent_Next, "Next" }, // 441743449
				{ &Z_Construct_UDelegateFunction_UManaComponent_OnEventPoint__DelegateSignature, "OnEventPoint__DelegateSignature" }, // 2845215190
				{ &Z_Construct_UDelegateFunction_UManaComponent_OnRequestData__DelegateSignature, "OnRequestData__DelegateSignature" }, // 3457721613
				{ &Z_Construct_UDelegateFunction_UManaComponent_OnStatusChanged__DelegateSignature, "OnStatusChanged__DelegateSignature" }, // 2450492466
				{ &Z_Construct_UDelegateFunction_UManaComponent_OnSubtitleChanged__DelegateSignature, "OnSubtitleChanged__DelegateSignature" }, // 3500018677
				{ &Z_Construct_UFunction_UManaComponent_Pause, "Pause" }, // 36214205
				{ &Z_Construct_UFunction_UManaComponent_Play, "Play" }, // 1896246932
				{ &Z_Construct_UFunction_UManaComponent_Prepare, "Prepare" }, // 1857388731
				{ &Z_Construct_UFunction_UManaComponent_PreparePlaylistIndex, "PreparePlaylistIndex" }, // 3586338373
				{ &Z_Construct_UFunction_UManaComponent_Previous, "Previous" }, // 3722807014
				{ &Z_Construct_UFunction_UManaComponent_ResetCachedData, "ResetCachedData" }, // 2143537334
				{ &Z_Construct_UFunction_UManaComponent_SeekToPosition, "SeekToPosition" }, // 4255344098
				{ &Z_Construct_UFunction_UManaComponent_SetCachedData, "SetCachedData" }, // 2583614260
				{ &Z_Construct_UFunction_UManaComponent_SetFile, "SetFile" }, // 2978088027
				{ &Z_Construct_UFunction_UManaComponent_SetTexture, "SetTexture" }, // 3425744934
				{ &Z_Construct_UFunction_UManaComponent_SetVolume, "SetVolume" }, // 2594010892
				{ &Z_Construct_UFunction_UManaComponent_Stop, "Stop" }, // 4021491970
				{ &Z_Construct_UFunction_UManaComponent_StopAndWaitCompletion, "StopAndWaitCompletion" }, // 1478865037
				{ &Z_Construct_UFunction_UManaComponent_ToIndex, "ToIndex" }, // 2572785209
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "BlueprintType", "true" },
				{ "ClassGroupNames", "Custom" },
				{ "IncludePath", "ManaComponent.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/ManaComponent.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaylistIndex_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "ManaComponent" },
				{ "ModuleRelativePath", "Public/ManaComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlaylistIndex = { UE4CodeGen_Private::EPropertyClass::Int, "PlaylistIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000005, 1, nullptr, STRUCT_OFFSET(UManaComponent, PlaylistIndex), METADATA_PARAMS(NewProp_PlaylistIndex_MetaData, ARRAY_COUNT(NewProp_PlaylistIndex_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Playlist_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "ManaComponent" },
				{ "ModuleRelativePath", "Public/ManaComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Playlist = { UE4CodeGen_Private::EPropertyClass::Object, "Playlist", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000002005, 1, nullptr, STRUCT_OFFSET(UManaComponent, Playlist), Z_Construct_UClass_UManaPlaylist_NoRegister, METADATA_PARAMS(NewProp_Playlist_MetaData, ARRAY_COUNT(NewProp_Playlist_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnRequestData_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "ManaComponent" },
				{ "ModuleRelativePath", "Public/ManaComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnRequestData = { UE4CodeGen_Private::EPropertyClass::Delegate, "OnRequestData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080005, 1, nullptr, STRUCT_OFFSET(UManaComponent, OnRequestData), Z_Construct_UDelegateFunction_UManaComponent_OnRequestData__DelegateSignature, METADATA_PARAMS(NewProp_OnRequestData_MetaData, ARRAY_COUNT(NewProp_OnRequestData_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndFrameAction_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "ManaComponent" },
				{ "ModuleRelativePath", "Public/ManaComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EndFrameAction = { UE4CodeGen_Private::EPropertyClass::Enum, "EndFrameAction", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UManaComponent, EndFrameAction), Z_Construct_UEnum_CriWareRuntime_EManaFrameAction, METADATA_PARAMS(NewProp_EndFrameAction_MetaData, ARRAY_COUNT(NewProp_EndFrameAction_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_EndFrameAction_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnStatusChanged_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "ManaComponent" },
				{ "ModuleRelativePath", "Public/ManaComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStatusChanged = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnStatusChanged", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080005, 1, nullptr, STRUCT_OFFSET(UManaComponent, OnStatusChanged), Z_Construct_UDelegateFunction_UManaComponent_OnStatusChanged__DelegateSignature, METADATA_PARAMS(NewProp_OnStatusChanged_MetaData, ARRAY_COUNT(NewProp_OnStatusChanged_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSubtitleChanged_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "ManaComponent" },
				{ "ModuleRelativePath", "Public/ManaComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSubtitleChanged = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnSubtitleChanged", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080005, 1, nullptr, STRUCT_OFFSET(UManaComponent, OnSubtitleChanged), Z_Construct_UDelegateFunction_UManaComponent_OnSubtitleChanged__DelegateSignature, METADATA_PARAMS(NewProp_OnSubtitleChanged_MetaData, ARRAY_COUNT(NewProp_OnSubtitleChanged_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubtitlesEncoding_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "ManaComponent" },
				{ "ModuleRelativePath", "Public/ManaComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SubtitlesEncoding = { UE4CodeGen_Private::EPropertyClass::Enum, "SubtitlesEncoding", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UManaComponent, SubtitlesEncoding), Z_Construct_UEnum_CriWareRuntime_EManaSubtitlesEncoding, METADATA_PARAMS(NewProp_SubtitlesEncoding_MetaData, ARRAY_COUNT(NewProp_SubtitlesEncoding_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_SubtitlesEncoding_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubtitlesChannel_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "ManaComponent" },
				{ "ModuleRelativePath", "Public/ManaComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SubtitlesChannel = { UE4CodeGen_Private::EPropertyClass::Int, "SubtitlesChannel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UManaComponent, SubtitlesChannel), METADATA_PARAMS(NewProp_SubtitlesChannel_MetaData, ARRAY_COUNT(NewProp_SubtitlesChannel_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSubtitlesEnabled_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "ManaComponent" },
				{ "ModuleRelativePath", "Public/ManaComponent.h" },
			};
#endif
			auto NewProp_bSubtitlesEnabled_SetBit = [](void* Obj){ ((UManaComponent*)Obj)->bSubtitlesEnabled = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSubtitlesEnabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bSubtitlesEnabled", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UManaComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSubtitlesEnabled_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSubtitlesEnabled_MetaData, ARRAY_COUNT(NewProp_bSubtitlesEnabled_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnEventPoint_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "ManaComponent" },
				{ "ModuleRelativePath", "Public/ManaComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnEventPoint = { UE4CodeGen_Private::EPropertyClass::Delegate, "OnEventPoint", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080005, 1, nullptr, STRUCT_OFFSET(UManaComponent, OnEventPoint), Z_Construct_UDelegateFunction_UManaComponent_OnEventPoint__DelegateSignature, METADATA_PARAMS(NewProp_OnEventPoint_MetaData, ARRAY_COUNT(NewProp_OnEventPoint_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLoop_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "ManaComponent" },
				{ "ModuleRelativePath", "Public/ManaComponent.h" },
			};
#endif
			auto NewProp_bLoop_SetBit = [](void* Obj){ ((UManaComponent*)Obj)->bLoop = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLoop = { UE4CodeGen_Private::EPropertyClass::Bool, "bLoop", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UManaComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLoop_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bLoop_MetaData, ARRAY_COUNT(NewProp_bLoop_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Movie_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "ManaComponent" },
				{ "ModuleRelativePath", "Public/ManaComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Movie = { UE4CodeGen_Private::EPropertyClass::Object, "Movie", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UManaComponent, Movie), Z_Construct_UClass_UManaTexture_NoRegister, METADATA_PARAMS(NewProp_Movie_MetaData, ARRAY_COUNT(NewProp_Movie_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlaylistIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Playlist,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnRequestData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EndFrameAction,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EndFrameAction_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnStatusChanged,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnSubtitleChanged,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SubtitlesEncoding,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SubtitlesEncoding_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SubtitlesChannel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSubtitlesEnabled,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnEventPoint,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLoop,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Movie,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UManaComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UManaComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(UManaComponent, 4029315231);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UManaComponent(Z_Construct_UClass_UManaComponent, &UManaComponent::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UManaComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UManaComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
