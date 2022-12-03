// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AkComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkComponent() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_GetAttenuationRadius();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_PostAkEvent();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_PostAkEventByName();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_PostAssociatedAkEvent();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_PostTrigger();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_SetAttenuationScalingFactor();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_SetEarlyReflectionOrder();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_SetListeners();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_SetOutputBusVolume();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_SetRTPCValue();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_SetSwitch();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_Stop();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_UseEarlyReflections();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAuxBus_NoRegister();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_UseReverbVolumes();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
// End Cross Module References
	void UAkComponent::StaticRegisterNativesUAkComponent()
	{
		UClass* Class = UAkComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAttenuationRadius", (Native)&UAkComponent::execGetAttenuationRadius },
			{ "PostAkEvent", (Native)&UAkComponent::execPostAkEvent },
			{ "PostAkEventByName", (Native)&UAkComponent::execPostAkEventByName },
			{ "PostAssociatedAkEvent", (Native)&UAkComponent::execPostAssociatedAkEvent },
			{ "PostTrigger", (Native)&UAkComponent::execPostTrigger },
			{ "SetAttenuationScalingFactor", (Native)&UAkComponent::execSetAttenuationScalingFactor },
			{ "SetEarlyReflectionOrder", (Native)&UAkComponent::execSetEarlyReflectionOrder },
			{ "SetListeners", (Native)&UAkComponent::execSetListeners },
			{ "SetOutputBusVolume", (Native)&UAkComponent::execSetOutputBusVolume },
			{ "SetRTPCValue", (Native)&UAkComponent::execSetRTPCValue },
			{ "SetStopWhenOwnerDestroyed", (Native)&UAkComponent::execSetStopWhenOwnerDestroyed },
			{ "SetSwitch", (Native)&UAkComponent::execSetSwitch },
			{ "Stop", (Native)&UAkComponent::execStop },
			{ "UseEarlyReflections", (Native)&UAkComponent::execUseEarlyReflections },
			{ "UseReverbVolumes", (Native)&UAkComponent::execUseReverbVolumes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UAkComponent_GetAttenuationRadius()
	{
		struct AkComponent_eventGetAttenuationRadius_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AkComponent_eventGetAttenuationRadius_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AkComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, "GetAttenuationRadius", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020409, sizeof(AkComponent_eventGetAttenuationRadius_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkComponent_PostAkEvent()
	{
		struct AkComponent_eventPostAkEvent_Parms
		{
			UAkAudioEvent* akevent;
			FString in_EventName;
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AkComponent_eventPostAkEvent_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_EventName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_EventName = { UE4CodeGen_Private::EPropertyClass::Str, "in_EventName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkComponent_eventPostAkEvent_Parms, in_EventName), METADATA_PARAMS(NewProp_in_EventName_MetaData, ARRAY_COUNT(NewProp_in_EventName_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_akevent = { UE4CodeGen_Private::EPropertyClass::Object, "akevent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkComponent_eventPostAkEvent_Parms, akevent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_in_EventName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_akevent,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AkComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, "PostAkEvent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020409, sizeof(AkComponent_eventPostAkEvent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkComponent_PostAkEventByName()
	{
		struct AkComponent_eventPostAkEventByName_Parms
		{
			FString in_EventName;
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AkComponent_eventPostAkEventByName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_EventName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_EventName = { UE4CodeGen_Private::EPropertyClass::Str, "in_EventName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkComponent_eventPostAkEventByName_Parms, in_EventName), METADATA_PARAMS(NewProp_in_EventName_MetaData, ARRAY_COUNT(NewProp_in_EventName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_in_EventName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AkComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, "PostAkEventByName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020409, sizeof(AkComponent_eventPostAkEventByName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkComponent_PostAssociatedAkEvent()
	{
		struct AkComponent_eventPostAssociatedAkEvent_Parms
		{
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AkComponent_eventPostAssociatedAkEvent_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AkComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, "PostAssociatedAkEvent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020409, sizeof(AkComponent_eventPostAssociatedAkEvent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkComponent_PostTrigger()
	{
		struct AkComponent_eventPostTrigger_Parms
		{
			FString Trigger;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Trigger_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Trigger = { UE4CodeGen_Private::EPropertyClass::Str, "Trigger", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkComponent_eventPostTrigger_Parms, Trigger), METADATA_PARAMS(NewProp_Trigger_MetaData, ARRAY_COUNT(NewProp_Trigger_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Trigger,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AkComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, "PostTrigger", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020409, sizeof(AkComponent_eventPostTrigger_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkComponent_SetAttenuationScalingFactor()
	{
		struct AkComponent_eventSetAttenuationScalingFactor_Parms
		{
			float Value;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Float, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkComponent_eventSetAttenuationScalingFactor_Parms, Value), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AkComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, "SetAttenuationScalingFactor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020409, sizeof(AkComponent_eventSetAttenuationScalingFactor_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkComponent_SetEarlyReflectionOrder()
	{
		struct AkComponent_eventSetEarlyReflectionOrder_Parms
		{
			int32 NewEarlyReflectionOrder;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewEarlyReflectionOrder = { UE4CodeGen_Private::EPropertyClass::Int, "NewEarlyReflectionOrder", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkComponent_eventSetEarlyReflectionOrder_Parms, NewEarlyReflectionOrder), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewEarlyReflectionOrder,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AkComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, "SetEarlyReflectionOrder", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AkComponent_eventSetEarlyReflectionOrder_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkComponent_SetListeners()
	{
		struct AkComponent_eventSetListeners_Parms
		{
			TArray<UAkComponent*> Listeners;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Listeners_MetaData[] = {
				{ "EditInline", "true" },
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Listeners = { UE4CodeGen_Private::EPropertyClass::Array, "Listeners", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008008000182, 1, nullptr, STRUCT_OFFSET(AkComponent_eventSetListeners_Parms, Listeners), METADATA_PARAMS(NewProp_Listeners_MetaData, ARRAY_COUNT(NewProp_Listeners_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Listeners_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Listeners", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000080000, 1, nullptr, 0, Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Listeners,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Listeners_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AkComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, "SetListeners", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420409, sizeof(AkComponent_eventSetListeners_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkComponent_SetOutputBusVolume()
	{
		struct AkComponent_eventSetOutputBusVolume_Parms
		{
			float BusVolume;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BusVolume = { UE4CodeGen_Private::EPropertyClass::Float, "BusVolume", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkComponent_eventSetOutputBusVolume_Parms, BusVolume), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BusVolume,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AkComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, "SetOutputBusVolume", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020409, sizeof(AkComponent_eventSetOutputBusVolume_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkComponent_SetRTPCValue()
	{
		struct AkComponent_eventSetRTPCValue_Parms
		{
			FString RTPC;
			float Value;
			int32 InterpolationTimeMs;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_InterpolationTimeMs = { UE4CodeGen_Private::EPropertyClass::Int, "InterpolationTimeMs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkComponent_eventSetRTPCValue_Parms, InterpolationTimeMs), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Float, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkComponent_eventSetRTPCValue_Parms, Value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RTPC_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_RTPC = { UE4CodeGen_Private::EPropertyClass::Str, "RTPC", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkComponent_eventSetRTPCValue_Parms, RTPC), METADATA_PARAMS(NewProp_RTPC_MetaData, ARRAY_COUNT(NewProp_RTPC_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InterpolationTimeMs,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RTPC,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AkComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, "SetRTPCValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020409, sizeof(AkComponent_eventSetRTPCValue_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed()
	{
		struct AkComponent_eventSetStopWhenOwnerDestroyed_Parms
		{
			bool bStopWhenOwnerDestroyed;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bStopWhenOwnerDestroyed_SetBit = [](void* Obj){ ((AkComponent_eventSetStopWhenOwnerDestroyed_Parms*)Obj)->bStopWhenOwnerDestroyed = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStopWhenOwnerDestroyed = { UE4CodeGen_Private::EPropertyClass::Bool, "bStopWhenOwnerDestroyed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AkComponent_eventSetStopWhenOwnerDestroyed_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bStopWhenOwnerDestroyed_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bStopWhenOwnerDestroyed,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AkComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, "SetStopWhenOwnerDestroyed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020409, sizeof(AkComponent_eventSetStopWhenOwnerDestroyed_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkComponent_SetSwitch()
	{
		struct AkComponent_eventSetSwitch_Parms
		{
			FString SwitchGroup;
			FString SwitchState;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwitchState_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_SwitchState = { UE4CodeGen_Private::EPropertyClass::Str, "SwitchState", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkComponent_eventSetSwitch_Parms, SwitchState), METADATA_PARAMS(NewProp_SwitchState_MetaData, ARRAY_COUNT(NewProp_SwitchState_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwitchGroup_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_SwitchGroup = { UE4CodeGen_Private::EPropertyClass::Str, "SwitchGroup", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkComponent_eventSetSwitch_Parms, SwitchGroup), METADATA_PARAMS(NewProp_SwitchGroup_MetaData, ARRAY_COUNT(NewProp_SwitchGroup_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SwitchState,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SwitchGroup,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AkComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, "SetSwitch", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020409, sizeof(AkComponent_eventSetSwitch_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkComponent_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AkComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, "Stop", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020409, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkComponent_UseEarlyReflections()
	{
		struct AkComponent_eventUseEarlyReflections_Parms
		{
			UAkAuxBus* AuxBus;
			bool Left;
			bool Right;
			bool Floor;
			bool Ceiling;
			bool Back;
			bool Front;
			bool SpotReflectors;
			FString AuxBusName;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuxBusName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_AuxBusName = { UE4CodeGen_Private::EPropertyClass::Str, "AuxBusName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkComponent_eventUseEarlyReflections_Parms, AuxBusName), METADATA_PARAMS(NewProp_AuxBusName_MetaData, ARRAY_COUNT(NewProp_AuxBusName_MetaData)) };
			auto NewProp_SpotReflectors_SetBit = [](void* Obj){ ((AkComponent_eventUseEarlyReflections_Parms*)Obj)->SpotReflectors = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SpotReflectors = { UE4CodeGen_Private::EPropertyClass::Bool, "SpotReflectors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AkComponent_eventUseEarlyReflections_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_SpotReflectors_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_Front_SetBit = [](void* Obj){ ((AkComponent_eventUseEarlyReflections_Parms*)Obj)->Front = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Front = { UE4CodeGen_Private::EPropertyClass::Bool, "Front", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AkComponent_eventUseEarlyReflections_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Front_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_Back_SetBit = [](void* Obj){ ((AkComponent_eventUseEarlyReflections_Parms*)Obj)->Back = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Back = { UE4CodeGen_Private::EPropertyClass::Bool, "Back", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AkComponent_eventUseEarlyReflections_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Back_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_Ceiling_SetBit = [](void* Obj){ ((AkComponent_eventUseEarlyReflections_Parms*)Obj)->Ceiling = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Ceiling = { UE4CodeGen_Private::EPropertyClass::Bool, "Ceiling", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AkComponent_eventUseEarlyReflections_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Ceiling_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_Floor_SetBit = [](void* Obj){ ((AkComponent_eventUseEarlyReflections_Parms*)Obj)->Floor = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Floor = { UE4CodeGen_Private::EPropertyClass::Bool, "Floor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AkComponent_eventUseEarlyReflections_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Floor_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_Right_SetBit = [](void* Obj){ ((AkComponent_eventUseEarlyReflections_Parms*)Obj)->Right = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Right = { UE4CodeGen_Private::EPropertyClass::Bool, "Right", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AkComponent_eventUseEarlyReflections_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Right_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_Left_SetBit = [](void* Obj){ ((AkComponent_eventUseEarlyReflections_Parms*)Obj)->Left = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Left = { UE4CodeGen_Private::EPropertyClass::Bool, "Left", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AkComponent_eventUseEarlyReflections_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Left_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AuxBus = { UE4CodeGen_Private::EPropertyClass::Object, "AuxBus", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkComponent_eventUseEarlyReflections_Parms, AuxBus), Z_Construct_UClass_UAkAuxBus_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AuxBusName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpotReflectors,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Front,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Back,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Ceiling,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Floor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Right,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Left,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AuxBus,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AkComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, "UseEarlyReflections", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AkComponent_eventUseEarlyReflections_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkComponent_UseReverbVolumes()
	{
		struct AkComponent_eventUseReverbVolumes_Parms
		{
			bool inUseReverbVolumes;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_inUseReverbVolumes_SetBit = [](void* Obj){ ((AkComponent_eventUseReverbVolumes_Parms*)Obj)->inUseReverbVolumes = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inUseReverbVolumes = { UE4CodeGen_Private::EPropertyClass::Bool, "inUseReverbVolumes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AkComponent_eventUseReverbVolumes_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_inUseReverbVolumes_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_inUseReverbVolumes,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AkComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, "UseReverbVolumes", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020409, sizeof(AkComponent_eventUseReverbVolumes_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAkComponent_NoRegister()
	{
		return UAkComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UAkComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_USceneComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UAkComponent_GetAttenuationRadius, "GetAttenuationRadius" }, // 3750955720
				{ &Z_Construct_UFunction_UAkComponent_PostAkEvent, "PostAkEvent" }, // 1143906572
				{ &Z_Construct_UFunction_UAkComponent_PostAkEventByName, "PostAkEventByName" }, // 3623806812
				{ &Z_Construct_UFunction_UAkComponent_PostAssociatedAkEvent, "PostAssociatedAkEvent" }, // 623056490
				{ &Z_Construct_UFunction_UAkComponent_PostTrigger, "PostTrigger" }, // 1787102778
				{ &Z_Construct_UFunction_UAkComponent_SetAttenuationScalingFactor, "SetAttenuationScalingFactor" }, // 3528315676
				{ &Z_Construct_UFunction_UAkComponent_SetEarlyReflectionOrder, "SetEarlyReflectionOrder" }, // 1950998922
				{ &Z_Construct_UFunction_UAkComponent_SetListeners, "SetListeners" }, // 4279618395
				{ &Z_Construct_UFunction_UAkComponent_SetOutputBusVolume, "SetOutputBusVolume" }, // 1244767274
				{ &Z_Construct_UFunction_UAkComponent_SetRTPCValue, "SetRTPCValue" }, // 1183610786
				{ &Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed, "SetStopWhenOwnerDestroyed" }, // 238364515
				{ &Z_Construct_UFunction_UAkComponent_SetSwitch, "SetSwitch" }, // 1115647481
				{ &Z_Construct_UFunction_UAkComponent_Stop, "Stop" }, // 3251539914
				{ &Z_Construct_UFunction_UAkComponent_UseEarlyReflections, "UseEarlyReflections" }, // 1918948216
				{ &Z_Construct_UFunction_UAkComponent_UseReverbVolumes, "UseReverbVolumes" }, // 816737453
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "BlueprintType", "true" },
				{ "ClassGroupNames", "Custom" },
				{ "HideCategories", "Trigger PhysicsVolume" },
				{ "IncludePath", "AkComponent.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/AkComponent.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkComponent" },
				{ "ModuleRelativePath", "Public/AkComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_EventName = { UE4CodeGen_Private::EPropertyClass::Str, "EventName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, STRUCT_OFFSET(UAkComponent, EventName), METADATA_PARAMS(NewProp_EventName_MetaData, ARRAY_COUNT(NewProp_EventName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AkAudioEvent_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkComponent" },
				{ "ModuleRelativePath", "Public/AkComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AkAudioEvent = { UE4CodeGen_Private::EPropertyClass::Object, "AkAudioEvent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAkComponent, AkAudioEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(NewProp_AkAudioEvent_MetaData, ARRAY_COUNT(NewProp_AkAudioEvent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OcclusionRefreshInterval_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkComponent" },
				{ "ModuleRelativePath", "Public/AkComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OcclusionRefreshInterval = { UE4CodeGen_Private::EPropertyClass::Float, "OcclusionRefreshInterval", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAkComponent, OcclusionRefreshInterval), METADATA_PARAMS(NewProp_OcclusionRefreshInterval_MetaData, ARRAY_COUNT(NewProp_OcclusionRefreshInterval_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttenuationScalingFactor_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkComponent" },
				{ "ModuleRelativePath", "Public/AkComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttenuationScalingFactor = { UE4CodeGen_Private::EPropertyClass::Float, "AttenuationScalingFactor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAkComponent, AttenuationScalingFactor), METADATA_PARAMS(NewProp_AttenuationScalingFactor_MetaData, ARRAY_COUNT(NewProp_AttenuationScalingFactor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopWhenOwnerDestroyed_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkComponent" },
				{ "ModuleRelativePath", "Public/AkComponent.h" },
			};
#endif
			auto NewProp_StopWhenOwnerDestroyed_SetBit = [](void* Obj){ ((UAkComponent*)Obj)->StopWhenOwnerDestroyed = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_StopWhenOwnerDestroyed = { UE4CodeGen_Private::EPropertyClass::Bool, "StopWhenOwnerDestroyed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAkComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_StopWhenOwnerDestroyed_SetBit)>::SetBit, METADATA_PARAMS(NewProp_StopWhenOwnerDestroyed_MetaData, ARRAY_COUNT(NewProp_StopWhenOwnerDestroyed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawHigherOrderReflections_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkComponent" },
				{ "ModuleRelativePath", "Public/AkComponent.h" },
			};
#endif
			auto NewProp_DrawHigherOrderReflections_SetBit = [](void* Obj){ ((UAkComponent*)Obj)->DrawHigherOrderReflections = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DrawHigherOrderReflections = { UE4CodeGen_Private::EPropertyClass::Bool, "DrawHigherOrderReflections", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UAkComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_DrawHigherOrderReflections_SetBit)>::SetBit, METADATA_PARAMS(NewProp_DrawHigherOrderReflections_MetaData, ARRAY_COUNT(NewProp_DrawHigherOrderReflections_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawSecondOrderReflections_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkComponent" },
				{ "ModuleRelativePath", "Public/AkComponent.h" },
			};
#endif
			auto NewProp_DrawSecondOrderReflections_SetBit = [](void* Obj){ ((UAkComponent*)Obj)->DrawSecondOrderReflections = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DrawSecondOrderReflections = { UE4CodeGen_Private::EPropertyClass::Bool, "DrawSecondOrderReflections", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UAkComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_DrawSecondOrderReflections_SetBit)>::SetBit, METADATA_PARAMS(NewProp_DrawSecondOrderReflections_MetaData, ARRAY_COUNT(NewProp_DrawSecondOrderReflections_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawFirstOrderReflections_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkComponent" },
				{ "ModuleRelativePath", "Public/AkComponent.h" },
			};
#endif
			auto NewProp_DrawFirstOrderReflections_SetBit = [](void* Obj){ ((UAkComponent*)Obj)->DrawFirstOrderReflections = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DrawFirstOrderReflections = { UE4CodeGen_Private::EPropertyClass::Bool, "DrawFirstOrderReflections", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UAkComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_DrawFirstOrderReflections_SetBit)>::SetBit, METADATA_PARAMS(NewProp_DrawFirstOrderReflections_MetaData, ARRAY_COUNT(NewProp_DrawFirstOrderReflections_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableSpotReflectors_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkComponent" },
				{ "ModuleRelativePath", "Public/AkComponent.h" },
			};
#endif
			auto NewProp_EnableSpotReflectors_SetBit = [](void* Obj){ ((UAkComponent*)Obj)->EnableSpotReflectors = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableSpotReflectors = { UE4CodeGen_Private::EPropertyClass::Bool, "EnableSpotReflectors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UAkComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_EnableSpotReflectors_SetBit)>::SetBit, METADATA_PARAMS(NewProp_EnableSpotReflectors_MetaData, ARRAY_COUNT(NewProp_EnableSpotReflectors_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OcclusionCollisionChannel_MetaData[] = {
				{ "Category", "AkComponent" },
				{ "ModuleRelativePath", "Public/AkComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_OcclusionCollisionChannel = { UE4CodeGen_Private::EPropertyClass::Byte, "OcclusionCollisionChannel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UAkComponent, OcclusionCollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(NewProp_OcclusionCollisionChannel_MetaData, ARRAY_COUNT(NewProp_OcclusionCollisionChannel_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EarlyReflectionMaxPathLength_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkComponent" },
				{ "ModuleRelativePath", "Public/AkComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EarlyReflectionMaxPathLength = { UE4CodeGen_Private::EPropertyClass::Float, "EarlyReflectionMaxPathLength", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, STRUCT_OFFSET(UAkComponent, EarlyReflectionMaxPathLength), METADATA_PARAMS(NewProp_EarlyReflectionMaxPathLength_MetaData, ARRAY_COUNT(NewProp_EarlyReflectionMaxPathLength_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EarlyReflectionBusSendGain_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkComponent" },
				{ "ModuleRelativePath", "Public/AkComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EarlyReflectionBusSendGain = { UE4CodeGen_Private::EPropertyClass::Float, "EarlyReflectionBusSendGain", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, STRUCT_OFFSET(UAkComponent, EarlyReflectionBusSendGain), METADATA_PARAMS(NewProp_EarlyReflectionBusSendGain_MetaData, ARRAY_COUNT(NewProp_EarlyReflectionBusSendGain_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EarlyReflectionOrder_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkComponent" },
				{ "ModuleRelativePath", "Public/AkComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_EarlyReflectionOrder = { UE4CodeGen_Private::EPropertyClass::Int, "EarlyReflectionOrder", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, STRUCT_OFFSET(UAkComponent, EarlyReflectionOrder), METADATA_PARAMS(NewProp_EarlyReflectionOrder_MetaData, ARRAY_COUNT(NewProp_EarlyReflectionOrder_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EarlyReflectionAuxBusName_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkComponent" },
				{ "ModuleRelativePath", "Public/AkComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_EarlyReflectionAuxBusName = { UE4CodeGen_Private::EPropertyClass::Str, "EarlyReflectionAuxBusName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, STRUCT_OFFSET(UAkComponent, EarlyReflectionAuxBusName), METADATA_PARAMS(NewProp_EarlyReflectionAuxBusName_MetaData, ARRAY_COUNT(NewProp_EarlyReflectionAuxBusName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EarlyReflectionAuxBus_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkComponent" },
				{ "ModuleRelativePath", "Public/AkComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EarlyReflectionAuxBus = { UE4CodeGen_Private::EPropertyClass::Object, "EarlyReflectionAuxBus", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, STRUCT_OFFSET(UAkComponent, EarlyReflectionAuxBus), Z_Construct_UClass_UAkAuxBus_NoRegister, METADATA_PARAMS(NewProp_EarlyReflectionAuxBus_MetaData, ARRAY_COUNT(NewProp_EarlyReflectionAuxBus_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EventName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AkAudioEvent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OcclusionRefreshInterval,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AttenuationScalingFactor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StopWhenOwnerDestroyed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DrawHigherOrderReflections,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DrawSecondOrderReflections,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DrawFirstOrderReflections,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EnableSpotReflectors,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OcclusionCollisionChannel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EarlyReflectionMaxPathLength,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EarlyReflectionBusSendGain,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EarlyReflectionOrder,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EarlyReflectionAuxBusName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EarlyReflectionAuxBus,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAkComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAkComponent::StaticClass,
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
	IMPLEMENT_CLASS(UAkComponent, 396111657);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkComponent(Z_Construct_UClass_UAkComponent, &UAkComponent::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
