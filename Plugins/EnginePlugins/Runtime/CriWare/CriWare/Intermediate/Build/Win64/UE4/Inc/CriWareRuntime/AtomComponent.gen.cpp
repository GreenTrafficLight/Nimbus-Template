// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AtomComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomComponent() {}
// Cross Module References
	CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_UAtomComponent_OnAudioFinished__DelegateSignature();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomComponent();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UAtomComponent_GetSequencePosition();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UAtomComponent_GetStatus();
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomComponentStatus();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UAtomComponent_GetTime();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UAtomComponent_IsPaused();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UAtomComponent_IsPlaying();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UAtomComponent_Pause();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UAtomComponent_Play();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UAtomComponent_SetAisacByName();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UAtomComponent_SetBusSendLevel();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UAtomComponent_SetBusSendLevelByName();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UAtomComponent_SetBusSendLevelOffset();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UAtomComponent_SetBusSendLevelOffsetByName();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UAtomComponent_SetNextBlockIndex();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UAtomComponent_SetPitch();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UAtomComponent_SetPitchMultiplier();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UAtomComponent_SetSelectorLabel();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UAtomComponent_SetSound();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCue_NoRegister();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UAtomComponent_SetVolume();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UAtomComponent_Stop();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundAttenuationSettings();
	ENGINE_API UClass* Z_Construct_UClass_USoundAttenuation_NoRegister();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomSelectorParam();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomAisacControlParam();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomSoundObject_NoRegister();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_UAtomComponent_OnAudioFinished__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AtomComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, "OnAudioFinished__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	void UAtomComponent::StaticRegisterNativesUAtomComponent()
	{
		UClass* Class = UAtomComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSequencePosition", (Native)&UAtomComponent::execGetSequencePosition },
			{ "GetStatus", (Native)&UAtomComponent::execGetStatus },
			{ "GetTime", (Native)&UAtomComponent::execGetTime },
			{ "IsPaused", (Native)&UAtomComponent::execIsPaused },
			{ "IsPlaying", (Native)&UAtomComponent::execIsPlaying },
			{ "Pause", (Native)&UAtomComponent::execPause },
			{ "Play", (Native)&UAtomComponent::execPlay },
			{ "SetAisacByName", (Native)&UAtomComponent::execSetAisacByName },
			{ "SetBusSendLevel", (Native)&UAtomComponent::execSetBusSendLevel },
			{ "SetBusSendLevelByName", (Native)&UAtomComponent::execSetBusSendLevelByName },
			{ "SetBusSendLevelOffset", (Native)&UAtomComponent::execSetBusSendLevelOffset },
			{ "SetBusSendLevelOffsetByName", (Native)&UAtomComponent::execSetBusSendLevelOffsetByName },
			{ "SetNextBlockIndex", (Native)&UAtomComponent::execSetNextBlockIndex },
			{ "SetPitch", (Native)&UAtomComponent::execSetPitch },
			{ "SetPitchMultiplier", (Native)&UAtomComponent::execSetPitchMultiplier },
			{ "SetSelectorLabel", (Native)&UAtomComponent::execSetSelectorLabel },
			{ "SetSound", (Native)&UAtomComponent::execSetSound },
			{ "SetVolume", (Native)&UAtomComponent::execSetVolume },
			{ "Stop", (Native)&UAtomComponent::execStop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UAtomComponent_GetSequencePosition()
	{
		struct AtomComponent_eventGetSequencePosition_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AtomComponent_eventGetSequencePosition_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AtomComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, "GetSequencePosition", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AtomComponent_eventGetSequencePosition_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAtomComponent_GetStatus()
	{
		struct AtomComponent_eventGetStatus_Parms
		{
			EAtomComponentStatus ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Enum, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AtomComponent_eventGetStatus_Parms, ReturnValue), Z_Construct_UEnum_CriWareRuntime_EAtomComponentStatus, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AtomComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, "GetStatus", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AtomComponent_eventGetStatus_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAtomComponent_GetTime()
	{
		struct AtomComponent_eventGetTime_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AtomComponent_eventGetTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AtomComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, "GetTime", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AtomComponent_eventGetTime_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAtomComponent_IsPaused()
	{
		struct AtomComponent_eventIsPaused_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((AtomComponent_eventIsPaused_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AtomComponent_eventIsPaused_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AtomComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, "IsPaused", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AtomComponent_eventIsPaused_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAtomComponent_IsPlaying()
	{
		struct AtomComponent_eventIsPlaying_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((AtomComponent_eventIsPlaying_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AtomComponent_eventIsPlaying_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AtomComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, "IsPlaying", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AtomComponent_eventIsPlaying_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAtomComponent_Pause()
	{
		struct AtomComponent_eventPause_Parms
		{
			bool bPause;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bPause_SetBit = [](void* Obj){ ((AtomComponent_eventPause_Parms*)Obj)->bPause = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPause = { UE4CodeGen_Private::EPropertyClass::Bool, "bPause", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AtomComponent_eventPause_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bPause_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bPause,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AtomComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, "Pause", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AtomComponent_eventPause_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAtomComponent_Play()
	{
		struct AtomComponent_eventPlay_Parms
		{
			float StartTime;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartTime = { UE4CodeGen_Private::EPropertyClass::Float, "StartTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtomComponent_eventPlay_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartTime,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AtomComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, "Play", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AtomComponent_eventPlay_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAtomComponent_SetAisacByName()
	{
		struct AtomComponent_eventSetAisacByName_Parms
		{
			FString ControlName;
			float ControlValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ControlValue = { UE4CodeGen_Private::EPropertyClass::Float, "ControlValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtomComponent_eventSetAisacByName_Parms, ControlValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControlName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ControlName = { UE4CodeGen_Private::EPropertyClass::Str, "ControlName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtomComponent_eventSetAisacByName_Parms, ControlName), METADATA_PARAMS(NewProp_ControlName_MetaData, ARRAY_COUNT(NewProp_ControlName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ControlValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ControlName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AtomComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, "SetAisacByName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AtomComponent_eventSetAisacByName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAtomComponent_SetBusSendLevel()
	{
		struct AtomComponent_eventSetBusSendLevel_Parms
		{
			int32 BusId;
			float Level;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Level = { UE4CodeGen_Private::EPropertyClass::Float, "Level", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtomComponent_eventSetBusSendLevel_Parms, Level), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_BusId = { UE4CodeGen_Private::EPropertyClass::Int, "BusId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtomComponent_eventSetBusSendLevel_Parms, BusId), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Level,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BusId,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AtomComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, "SetBusSendLevel", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AtomComponent_eventSetBusSendLevel_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAtomComponent_SetBusSendLevelByName()
	{
		struct AtomComponent_eventSetBusSendLevelByName_Parms
		{
			FString BusName;
			float Level;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Level = { UE4CodeGen_Private::EPropertyClass::Float, "Level", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtomComponent_eventSetBusSendLevelByName_Parms, Level), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BusName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_BusName = { UE4CodeGen_Private::EPropertyClass::Str, "BusName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtomComponent_eventSetBusSendLevelByName_Parms, BusName), METADATA_PARAMS(NewProp_BusName_MetaData, ARRAY_COUNT(NewProp_BusName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Level,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BusName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AtomComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, "SetBusSendLevelByName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AtomComponent_eventSetBusSendLevelByName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAtomComponent_SetBusSendLevelOffset()
	{
		struct AtomComponent_eventSetBusSendLevelOffset_Parms
		{
			int32 BusId;
			float LevelOffset;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LevelOffset = { UE4CodeGen_Private::EPropertyClass::Float, "LevelOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtomComponent_eventSetBusSendLevelOffset_Parms, LevelOffset), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_BusId = { UE4CodeGen_Private::EPropertyClass::Int, "BusId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtomComponent_eventSetBusSendLevelOffset_Parms, BusId), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LevelOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BusId,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AtomComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, "SetBusSendLevelOffset", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AtomComponent_eventSetBusSendLevelOffset_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAtomComponent_SetBusSendLevelOffsetByName()
	{
		struct AtomComponent_eventSetBusSendLevelOffsetByName_Parms
		{
			FString BusName;
			float LevelOffset;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LevelOffset = { UE4CodeGen_Private::EPropertyClass::Float, "LevelOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtomComponent_eventSetBusSendLevelOffsetByName_Parms, LevelOffset), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BusName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_BusName = { UE4CodeGen_Private::EPropertyClass::Str, "BusName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtomComponent_eventSetBusSendLevelOffsetByName_Parms, BusName), METADATA_PARAMS(NewProp_BusName_MetaData, ARRAY_COUNT(NewProp_BusName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LevelOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BusName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AtomComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, "SetBusSendLevelOffsetByName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AtomComponent_eventSetBusSendLevelOffsetByName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAtomComponent_SetNextBlockIndex()
	{
		struct AtomComponent_eventSetNextBlockIndex_Parms
		{
			int32 BlockIndex;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_BlockIndex = { UE4CodeGen_Private::EPropertyClass::Int, "BlockIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtomComponent_eventSetNextBlockIndex_Parms, BlockIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlockIndex,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AtomComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, "SetNextBlockIndex", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AtomComponent_eventSetNextBlockIndex_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAtomComponent_SetPitch()
	{
		struct AtomComponent_eventSetPitch_Parms
		{
			float Pitch;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Pitch = { UE4CodeGen_Private::EPropertyClass::Float, "Pitch", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtomComponent_eventSetPitch_Parms, Pitch), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Pitch,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AtomComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, "SetPitch", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AtomComponent_eventSetPitch_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAtomComponent_SetPitchMultiplier()
	{
		struct AtomComponent_eventSetPitchMultiplier_Parms
		{
			float NewPitchMultiplier;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewPitchMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "NewPitchMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtomComponent_eventSetPitchMultiplier_Parms, NewPitchMultiplier), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewPitchMultiplier,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AtomComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, "SetPitchMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AtomComponent_eventSetPitchMultiplier_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAtomComponent_SetSelectorLabel()
	{
		struct AtomComponent_eventSetSelectorLabel_Parms
		{
			FString selector;
			FString Label;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Label = { UE4CodeGen_Private::EPropertyClass::Str, "Label", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtomComponent_eventSetSelectorLabel_Parms, Label), METADATA_PARAMS(NewProp_Label_MetaData, ARRAY_COUNT(NewProp_Label_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_selector_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_selector = { UE4CodeGen_Private::EPropertyClass::Str, "selector", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtomComponent_eventSetSelectorLabel_Parms, selector), METADATA_PARAMS(NewProp_selector_MetaData, ARRAY_COUNT(NewProp_selector_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Label,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_selector,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AtomComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, "SetSelectorLabel", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AtomComponent_eventSetSelectorLabel_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAtomComponent_SetSound()
	{
		struct AtomComponent_eventSetSound_Parms
		{
			USoundAtomCue* NewSound;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewSound = { UE4CodeGen_Private::EPropertyClass::Object, "NewSound", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtomComponent_eventSetSound_Parms, NewSound), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewSound,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AtomComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, "SetSound", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AtomComponent_eventSetSound_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAtomComponent_SetVolume()
	{
		struct AtomComponent_eventSetVolume_Parms
		{
			float Volume;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Volume = { UE4CodeGen_Private::EPropertyClass::Float, "Volume", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtomComponent_eventSetVolume_Parms, Volume), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Volume,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AtomComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, "SetVolume", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AtomComponent_eventSetVolume_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAtomComponent_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AtomComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, "Stop", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAtomComponent_NoRegister()
	{
		return UAtomComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UAtomComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_USceneComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UAtomComponent_GetSequencePosition, "GetSequencePosition" }, // 1229282953
				{ &Z_Construct_UFunction_UAtomComponent_GetStatus, "GetStatus" }, // 594164809
				{ &Z_Construct_UFunction_UAtomComponent_GetTime, "GetTime" }, // 918535189
				{ &Z_Construct_UFunction_UAtomComponent_IsPaused, "IsPaused" }, // 2782820669
				{ &Z_Construct_UFunction_UAtomComponent_IsPlaying, "IsPlaying" }, // 201200012
				{ &Z_Construct_UDelegateFunction_UAtomComponent_OnAudioFinished__DelegateSignature, "OnAudioFinished__DelegateSignature" }, // 1635072768
				{ &Z_Construct_UFunction_UAtomComponent_Pause, "Pause" }, // 3039729686
				{ &Z_Construct_UFunction_UAtomComponent_Play, "Play" }, // 3040222001
				{ &Z_Construct_UFunction_UAtomComponent_SetAisacByName, "SetAisacByName" }, // 1902907271
				{ &Z_Construct_UFunction_UAtomComponent_SetBusSendLevel, "SetBusSendLevel" }, // 3099384048
				{ &Z_Construct_UFunction_UAtomComponent_SetBusSendLevelByName, "SetBusSendLevelByName" }, // 411731636
				{ &Z_Construct_UFunction_UAtomComponent_SetBusSendLevelOffset, "SetBusSendLevelOffset" }, // 3912605820
				{ &Z_Construct_UFunction_UAtomComponent_SetBusSendLevelOffsetByName, "SetBusSendLevelOffsetByName" }, // 4177661137
				{ &Z_Construct_UFunction_UAtomComponent_SetNextBlockIndex, "SetNextBlockIndex" }, // 883346883
				{ &Z_Construct_UFunction_UAtomComponent_SetPitch, "SetPitch" }, // 1671677046
				{ &Z_Construct_UFunction_UAtomComponent_SetPitchMultiplier, "SetPitchMultiplier" }, // 3487743988
				{ &Z_Construct_UFunction_UAtomComponent_SetSelectorLabel, "SetSelectorLabel" }, // 330076555
				{ &Z_Construct_UFunction_UAtomComponent_SetSound, "SetSound" }, // 798070666
				{ &Z_Construct_UFunction_UAtomComponent_SetVolume, "SetVolume" }, // 850597469
				{ &Z_Construct_UFunction_UAtomComponent_Stop, "Stop" }, // 1383444360
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "BlueprintType", "true" },
				{ "ClassGroupNames", "Custom" },
				{ "HideCategories", "Trigger PhysicsVolume" },
				{ "IncludePath", "AtomComponent.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/AtomComponent.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttenuationOverrides_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AtomComponent" },
				{ "ModuleRelativePath", "Public/AtomComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttenuationOverrides = { UE4CodeGen_Private::EPropertyClass::Struct, "AttenuationOverrides", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAtomComponent, AttenuationOverrides), Z_Construct_UScriptStruct_FSoundAttenuationSettings, METADATA_PARAMS(NewProp_AttenuationOverrides_MetaData, ARRAY_COUNT(NewProp_AttenuationOverrides_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttenuationSettings_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AtomComponent" },
				{ "ModuleRelativePath", "Public/AtomComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttenuationSettings = { UE4CodeGen_Private::EPropertyClass::Object, "AttenuationSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAtomComponent, AttenuationSettings), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(NewProp_AttenuationSettings_MetaData, ARRAY_COUNT(NewProp_AttenuationSettings_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideAttenuation_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AtomComponent" },
				{ "ModuleRelativePath", "Public/AtomComponent.h" },
			};
#endif
			auto NewProp_bOverrideAttenuation_SetBit = [](void* Obj){ ((UAtomComponent*)Obj)->bOverrideAttenuation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideAttenuation = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverrideAttenuation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UAtomComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOverrideAttenuation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOverrideAttenuation_MetaData, ARRAY_COUNT(NewProp_bOverrideAttenuation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAudioFinished_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AtomComponent" },
				{ "ModuleRelativePath", "Public/AtomComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAudioFinished = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnAudioFinished", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080005, 1, nullptr, STRUCT_OFFSET(UAtomComponent, OnAudioFinished), Z_Construct_UDelegateFunction_UAtomComponent_OnAudioFinished__DelegateSignature, METADATA_PARAMS(NewProp_OnAudioFinished_MetaData, ARRAY_COUNT(NewProp_OnAudioFinished_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultSelectorLabel_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AtomComponent" },
				{ "ModuleRelativePath", "Public/AtomComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DefaultSelectorLabel = { UE4CodeGen_Private::EPropertyClass::Array, "DefaultSelectorLabel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAtomComponent, DefaultSelectorLabel), METADATA_PARAMS(NewProp_DefaultSelectorLabel_MetaData, ARRAY_COUNT(NewProp_DefaultSelectorLabel_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultSelectorLabel_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "DefaultSelectorLabel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FAtomSelectorParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultAisacControl_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AtomComponent" },
				{ "ModuleRelativePath", "Public/AtomComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DefaultAisacControl = { UE4CodeGen_Private::EPropertyClass::Array, "DefaultAisacControl", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAtomComponent, DefaultAisacControl), METADATA_PARAMS(NewProp_DefaultAisacControl_MetaData, ARRAY_COUNT(NewProp_DefaultAisacControl_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultAisacControl_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "DefaultAisacControl", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FAtomAisacControlParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultBlockIndex_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AtomComponent" },
				{ "ModuleRelativePath", "Public/AtomComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_DefaultBlockIndex = { UE4CodeGen_Private::EPropertyClass::Int, "DefaultBlockIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAtomComponent, DefaultBlockIndex), METADATA_PARAMS(NewProp_DefaultBlockIndex_MetaData, ARRAY_COUNT(NewProp_DefaultBlockIndex_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultSoundObject_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AtomComponent" },
				{ "ModuleRelativePath", "Public/AtomComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultSoundObject = { UE4CodeGen_Private::EPropertyClass::Object, "DefaultSoundObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAtomComponent, DefaultSoundObject), Z_Construct_UClass_UAtomSoundObject_NoRegister, METADATA_PARAMS(NewProp_DefaultSoundObject_MetaData, ARRAY_COUNT(NewProp_DefaultSoundObject_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableMultipleSoundPlayback_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AtomComponent" },
				{ "ModuleRelativePath", "Public/AtomComponent.h" },
			};
#endif
			auto NewProp_bEnableMultipleSoundPlayback_SetBit = [](void* Obj){ ((UAtomComponent*)Obj)->bEnableMultipleSoundPlayback = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableMultipleSoundPlayback = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableMultipleSoundPlayback", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAtomComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableMultipleSoundPlayback_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableMultipleSoundPlayback_MetaData, ARRAY_COUNT(NewProp_bEnableMultipleSoundPlayback_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultVolume_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AtomComponent" },
				{ "ModuleRelativePath", "Public/AtomComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultVolume = { UE4CodeGen_Private::EPropertyClass::Float, "DefaultVolume", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAtomComponent, DefaultVolume), METADATA_PARAMS(NewProp_DefaultVolume_MetaData, ARRAY_COUNT(NewProp_DefaultVolume_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsUISound_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AtomComponent" },
				{ "ModuleRelativePath", "Public/AtomComponent.h" },
			};
#endif
			auto NewProp_bIsUISound_SetBit = [](void* Obj){ ((UAtomComponent*)Obj)->bIsUISound = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsUISound = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsUISound", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UAtomComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsUISound_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsUISound_MetaData, ARRAY_COUNT(NewProp_bIsUISound_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStopWhenOwnerDestroyed_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AtomComponent" },
				{ "ModuleRelativePath", "Public/AtomComponent.h" },
			};
#endif
			auto NewProp_bStopWhenOwnerDestroyed_SetBit = [](void* Obj){ ((UAtomComponent*)Obj)->bStopWhenOwnerDestroyed = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStopWhenOwnerDestroyed = { UE4CodeGen_Private::EPropertyClass::Bool, "bStopWhenOwnerDestroyed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UAtomComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bStopWhenOwnerDestroyed_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bStopWhenOwnerDestroyed_MetaData, ARRAY_COUNT(NewProp_bStopWhenOwnerDestroyed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPersistAcrossLevelTransition_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AtomComponent" },
				{ "ModuleRelativePath", "Public/AtomComponent.h" },
			};
#endif
			auto NewProp_bPersistAcrossLevelTransition_SetBit = [](void* Obj){ ((UAtomComponent*)Obj)->bPersistAcrossLevelTransition = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPersistAcrossLevelTransition = { UE4CodeGen_Private::EPropertyClass::Bool, "bPersistAcrossLevelTransition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAtomComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bPersistAcrossLevelTransition_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bPersistAcrossLevelTransition_MetaData, ARRAY_COUNT(NewProp_bPersistAcrossLevelTransition_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoDestroy_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AtomComponent" },
				{ "ModuleRelativePath", "Public/AtomComponent.h" },
			};
#endif
			auto NewProp_bAutoDestroy_SetBit = [](void* Obj){ ((UAtomComponent*)Obj)->bAutoDestroy = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoDestroy = { UE4CodeGen_Private::EPropertyClass::Bool, "bAutoDestroy", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UAtomComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAutoDestroy_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAutoDestroy_MetaData, ARRAY_COUNT(NewProp_bAutoDestroy_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AtomComponent" },
				{ "ModuleRelativePath", "Public/AtomComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sound = { UE4CodeGen_Private::EPropertyClass::Object, "Sound", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAtomComponent, Sound), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(NewProp_Sound_MetaData, ARRAY_COUNT(NewProp_Sound_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AttenuationOverrides,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AttenuationSettings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOverrideAttenuation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnAudioFinished,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultSelectorLabel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultSelectorLabel_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultAisacControl,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultAisacControl_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultBlockIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultSoundObject,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableMultipleSoundPlayback,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultVolume,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsUISound,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bStopWhenOwnerDestroyed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bPersistAcrossLevelTransition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAutoDestroy,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Sound,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAtomComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAtomComponent::StaticClass,
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
	IMPLEMENT_CLASS(UAtomComponent, 3375856242);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAtomComponent(Z_Construct_UClass_UAtomComponent, &UAtomComponent::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UAtomComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
