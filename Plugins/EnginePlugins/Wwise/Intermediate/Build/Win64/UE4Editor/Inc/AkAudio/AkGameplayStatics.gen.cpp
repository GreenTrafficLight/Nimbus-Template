// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AkGameplayStatics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkGameplayStatics() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkGameplayStatics_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkGameplayStatics();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_AddOutputCaptureMarker();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_ClearBanks();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAttachLocation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_GetAudioSpectrum();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_GetOcclusionScalingFactor();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_IsEditor();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_IsGame();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_LoadBank();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioBank_NoRegister();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_LoadBankByName();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_LoadBanks();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_LoadInitBank();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_PostEvent();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocationByName();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_PostEventAttached();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_PostEventByName();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_PostTrigger();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetBusConfig();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_AkChannelConfiguration();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetOcclusionRefreshInterval();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetOcclusionScalingFactor();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetOutputBusVolume();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetPanningRule();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_PanningRule();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetState();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetSwitch();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAuxBus_NoRegister();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_StartAllAmbientSounds();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_StartOutputCapture();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_StartProfilerCapture();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_StopActor();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_StopAll();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_StopAllAmbientSounds();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_StopOutputCapture();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_StopProfilerCapture();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_UnloadBank();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_UnloadBankByName();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_UseEarlyReflections();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameplayStatics_UseReverbVolumes();
// End Cross Module References
	void UAkGameplayStatics::StaticRegisterNativesUAkGameplayStatics()
	{
		UClass* Class = UAkGameplayStatics::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddOutputCaptureMarker", (Native)&UAkGameplayStatics::execAddOutputCaptureMarker },
			{ "ClearBanks", (Native)&UAkGameplayStatics::execClearBanks },
			{ "GetAkComponent", (Native)&UAkGameplayStatics::execGetAkComponent },
			{ "GetAudioSpectrum", (Native)&UAkGameplayStatics::execGetAudioSpectrum },
			{ "GetOcclusionScalingFactor", (Native)&UAkGameplayStatics::execGetOcclusionScalingFactor },
			{ "IsEditor", (Native)&UAkGameplayStatics::execIsEditor },
			{ "IsGame", (Native)&UAkGameplayStatics::execIsGame },
			{ "LoadBank", (Native)&UAkGameplayStatics::execLoadBank },
			{ "LoadBankByName", (Native)&UAkGameplayStatics::execLoadBankByName },
			{ "LoadBanks", (Native)&UAkGameplayStatics::execLoadBanks },
			{ "LoadInitBank", (Native)&UAkGameplayStatics::execLoadInitBank },
			{ "PostEvent", (Native)&UAkGameplayStatics::execPostEvent },
			{ "PostEventAtLocation", (Native)&UAkGameplayStatics::execPostEventAtLocation },
			{ "PostEventAtLocationByName", (Native)&UAkGameplayStatics::execPostEventAtLocationByName },
			{ "PostEventAttached", (Native)&UAkGameplayStatics::execPostEventAttached },
			{ "PostEventByName", (Native)&UAkGameplayStatics::execPostEventByName },
			{ "PostTrigger", (Native)&UAkGameplayStatics::execPostTrigger },
			{ "SetBusConfig", (Native)&UAkGameplayStatics::execSetBusConfig },
			{ "SetOcclusionRefreshInterval", (Native)&UAkGameplayStatics::execSetOcclusionRefreshInterval },
			{ "SetOcclusionScalingFactor", (Native)&UAkGameplayStatics::execSetOcclusionScalingFactor },
			{ "SetOutputBusVolume", (Native)&UAkGameplayStatics::execSetOutputBusVolume },
			{ "SetPanningRule", (Native)&UAkGameplayStatics::execSetPanningRule },
			{ "SetRTPCValue", (Native)&UAkGameplayStatics::execSetRTPCValue },
			{ "SetState", (Native)&UAkGameplayStatics::execSetState },
			{ "SetSwitch", (Native)&UAkGameplayStatics::execSetSwitch },
			{ "SpawnAkComponentAtLocation", (Native)&UAkGameplayStatics::execSpawnAkComponentAtLocation },
			{ "StartAllAmbientSounds", (Native)&UAkGameplayStatics::execStartAllAmbientSounds },
			{ "StartOutputCapture", (Native)&UAkGameplayStatics::execStartOutputCapture },
			{ "StartProfilerCapture", (Native)&UAkGameplayStatics::execStartProfilerCapture },
			{ "StopActor", (Native)&UAkGameplayStatics::execStopActor },
			{ "StopAll", (Native)&UAkGameplayStatics::execStopAll },
			{ "StopAllAmbientSounds", (Native)&UAkGameplayStatics::execStopAllAmbientSounds },
			{ "StopOutputCapture", (Native)&UAkGameplayStatics::execStopOutputCapture },
			{ "StopProfilerCapture", (Native)&UAkGameplayStatics::execStopProfilerCapture },
			{ "UnloadBank", (Native)&UAkGameplayStatics::execUnloadBank },
			{ "UnloadBankByName", (Native)&UAkGameplayStatics::execUnloadBankByName },
			{ "UseEarlyReflections", (Native)&UAkGameplayStatics::execUseEarlyReflections },
			{ "UseReverbVolumes", (Native)&UAkGameplayStatics::execUseReverbVolumes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_AddOutputCaptureMarker()
	{
		struct AkGameplayStatics_eventAddOutputCaptureMarker_Parms
		{
			FString MarkerText;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarkerText_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_MarkerText = { UE4CodeGen_Private::EPropertyClass::Str, "MarkerText", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventAddOutputCaptureMarker_Parms, MarkerText), METADATA_PARAMS(NewProp_MarkerText_MetaData, ARRAY_COUNT(NewProp_MarkerText_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MarkerText,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, "AddOutputCaptureMarker", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022409, sizeof(AkGameplayStatics_eventAddOutputCaptureMarker_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_ClearBanks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, "ClearBanks", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022409, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent()
	{
		struct AkGameplayStatics_eventGetAkComponent_Parms
		{
			USceneComponent* AttachToComponent;
			FName AttachPointName;
			FVector Location;
			TEnumAsByte<EAttachLocation::Type> LocationType;
			UAkComponent* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080588, 1, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventGetAkComponent_Parms, ReturnValue), Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(NewProp_ReturnValue_MetaData, ARRAY_COUNT(NewProp_ReturnValue_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_LocationType = { UE4CodeGen_Private::EPropertyClass::Byte, "LocationType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventGetAkComponent_Parms, LocationType), Z_Construct_UEnum_Engine_EAttachLocation, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location = { UE4CodeGen_Private::EPropertyClass::Struct, "Location", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventGetAkComponent_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_AttachPointName = { UE4CodeGen_Private::EPropertyClass::Name, "AttachPointName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventGetAkComponent_Parms, AttachPointName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachToComponent_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttachToComponent = { UE4CodeGen_Private::EPropertyClass::Object, "AttachToComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventGetAkComponent_Parms, AttachToComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_AttachToComponent_MetaData, ARRAY_COUNT(NewProp_AttachToComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LocationType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Location,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AttachPointName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AttachToComponent,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, "GetAkComponent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04822401, sizeof(AkGameplayStatics_eventGetAkComponent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_GetAudioSpectrum()
	{
		struct AkGameplayStatics_eventGetAudioSpectrum_Parms
		{
			TArray<float> arry;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_arry = { UE4CodeGen_Private::EPropertyClass::Array, "arry", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventGetAudioSpectrum_Parms, arry), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_arry_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "arry", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_arry,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_arry_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, "GetAudioSpectrum", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422409, sizeof(AkGameplayStatics_eventGetAudioSpectrum_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_GetOcclusionScalingFactor()
	{
		struct AkGameplayStatics_eventGetOcclusionScalingFactor_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventGetOcclusionScalingFactor_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, "GetOcclusionScalingFactor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(AkGameplayStatics_eventGetOcclusionScalingFactor_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_IsEditor()
	{
		struct AkGameplayStatics_eventIsEditor_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((AkGameplayStatics_eventIsEditor_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AkGameplayStatics_eventIsEditor_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, "IsEditor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(AkGameplayStatics_eventIsEditor_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_IsGame()
	{
		struct AkGameplayStatics_eventIsGame_Parms
		{
			UObject* WorldContextObject;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((AkGameplayStatics_eventIsGame_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AkGameplayStatics_eventIsGame_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventIsGame_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, "IsGame", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(AkGameplayStatics_eventIsGame_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_LoadBank()
	{
		struct AkGameplayStatics_eventLoadBank_Parms
		{
			UAkAudioBank* Bank;
			FString BankName;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BankName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_BankName = { UE4CodeGen_Private::EPropertyClass::Str, "BankName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventLoadBank_Parms, BankName), METADATA_PARAMS(NewProp_BankName_MetaData, ARRAY_COUNT(NewProp_BankName_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Bank = { UE4CodeGen_Private::EPropertyClass::Object, "Bank", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventLoadBank_Parms, Bank), Z_Construct_UClass_UAkAudioBank_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BankName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Bank,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, "LoadBank", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022409, sizeof(AkGameplayStatics_eventLoadBank_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_LoadBankByName()
	{
		struct AkGameplayStatics_eventLoadBankByName_Parms
		{
			FString BankName;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BankName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_BankName = { UE4CodeGen_Private::EPropertyClass::Str, "BankName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventLoadBankByName_Parms, BankName), METADATA_PARAMS(NewProp_BankName_MetaData, ARRAY_COUNT(NewProp_BankName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BankName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, "LoadBankByName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022409, sizeof(AkGameplayStatics_eventLoadBankByName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_LoadBanks()
	{
		struct AkGameplayStatics_eventLoadBanks_Parms
		{
			TArray<UAkAudioBank*> SoundBanks;
			bool SynchronizeSoundBanks;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_SynchronizeSoundBanks_SetBit = [](void* Obj){ ((AkGameplayStatics_eventLoadBanks_Parms*)Obj)->SynchronizeSoundBanks = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SynchronizeSoundBanks = { UE4CodeGen_Private::EPropertyClass::Bool, "SynchronizeSoundBanks", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AkGameplayStatics_eventLoadBanks_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_SynchronizeSoundBanks_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundBanks_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SoundBanks = { UE4CodeGen_Private::EPropertyClass::Array, "SoundBanks", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventLoadBanks_Parms, SoundBanks), METADATA_PARAMS(NewProp_SoundBanks_MetaData, ARRAY_COUNT(NewProp_SoundBanks_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundBanks_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "SoundBanks", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UAkAudioBank_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SynchronizeSoundBanks,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SoundBanks,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SoundBanks_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, "LoadBanks", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422409, sizeof(AkGameplayStatics_eventLoadBanks_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_LoadInitBank()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, "LoadInitBank", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022409, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_PostEvent()
	{
		struct AkGameplayStatics_eventPostEvent_Parms
		{
			UAkAudioEvent* akevent;
			AActor* Actor;
			bool bStopWhenAttachedToDestroyed;
			FString EventName;
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventPostEvent_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_EventName = { UE4CodeGen_Private::EPropertyClass::Str, "EventName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventPostEvent_Parms, EventName), METADATA_PARAMS(NewProp_EventName_MetaData, ARRAY_COUNT(NewProp_EventName_MetaData)) };
			auto NewProp_bStopWhenAttachedToDestroyed_SetBit = [](void* Obj){ ((AkGameplayStatics_eventPostEvent_Parms*)Obj)->bStopWhenAttachedToDestroyed = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStopWhenAttachedToDestroyed = { UE4CodeGen_Private::EPropertyClass::Bool, "bStopWhenAttachedToDestroyed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AkGameplayStatics_eventPostEvent_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bStopWhenAttachedToDestroyed_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor = { UE4CodeGen_Private::EPropertyClass::Object, "Actor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventPostEvent_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_akevent = { UE4CodeGen_Private::EPropertyClass::Object, "akevent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventPostEvent_Parms, akevent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EventName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bStopWhenAttachedToDestroyed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Actor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_akevent,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, "PostEvent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022409, sizeof(AkGameplayStatics_eventPostEvent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation()
	{
		struct AkGameplayStatics_eventPostEventAtLocation_Parms
		{
			UAkAudioEvent* akevent;
			FVector Location;
			FRotator Orientation;
			FString EventName;
			UObject* WorldContextObject;
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventPostEventAtLocation_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventPostEventAtLocation_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_EventName = { UE4CodeGen_Private::EPropertyClass::Str, "EventName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventPostEventAtLocation_Parms, EventName), METADATA_PARAMS(NewProp_EventName_MetaData, ARRAY_COUNT(NewProp_EventName_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Orientation = { UE4CodeGen_Private::EPropertyClass::Struct, "Orientation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventPostEventAtLocation_Parms, Orientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location = { UE4CodeGen_Private::EPropertyClass::Struct, "Location", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventPostEventAtLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_akevent = { UE4CodeGen_Private::EPropertyClass::Object, "akevent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventPostEventAtLocation_Parms, akevent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EventName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Orientation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Location,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_akevent,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, "PostEventAtLocation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04822409, sizeof(AkGameplayStatics_eventPostEventAtLocation_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocationByName()
	{
		struct AkGameplayStatics_eventPostEventAtLocationByName_Parms
		{
			FString EventName;
			FVector Location;
			FRotator Orientation;
			UObject* WorldContextObject;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventPostEventAtLocationByName_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Orientation = { UE4CodeGen_Private::EPropertyClass::Struct, "Orientation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventPostEventAtLocationByName_Parms, Orientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location = { UE4CodeGen_Private::EPropertyClass::Struct, "Location", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventPostEventAtLocationByName_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_EventName = { UE4CodeGen_Private::EPropertyClass::Str, "EventName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventPostEventAtLocationByName_Parms, EventName), METADATA_PARAMS(NewProp_EventName_MetaData, ARRAY_COUNT(NewProp_EventName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Orientation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Location,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EventName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, "PostEventAtLocationByName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04822409, sizeof(AkGameplayStatics_eventPostEventAtLocationByName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_PostEventAttached()
	{
		struct AkGameplayStatics_eventPostEventAttached_Parms
		{
			UAkAudioEvent* akevent;
			AActor* Actor;
			FName AttachPointName;
			bool bStopWhenAttachedToDestroyed;
			FString EventName;
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventPostEventAttached_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_EventName = { UE4CodeGen_Private::EPropertyClass::Str, "EventName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventPostEventAttached_Parms, EventName), METADATA_PARAMS(NewProp_EventName_MetaData, ARRAY_COUNT(NewProp_EventName_MetaData)) };
			auto NewProp_bStopWhenAttachedToDestroyed_SetBit = [](void* Obj){ ((AkGameplayStatics_eventPostEventAttached_Parms*)Obj)->bStopWhenAttachedToDestroyed = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStopWhenAttachedToDestroyed = { UE4CodeGen_Private::EPropertyClass::Bool, "bStopWhenAttachedToDestroyed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AkGameplayStatics_eventPostEventAttached_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bStopWhenAttachedToDestroyed_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_AttachPointName = { UE4CodeGen_Private::EPropertyClass::Name, "AttachPointName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventPostEventAttached_Parms, AttachPointName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor = { UE4CodeGen_Private::EPropertyClass::Object, "Actor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventPostEventAttached_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_akevent = { UE4CodeGen_Private::EPropertyClass::Object, "akevent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventPostEventAttached_Parms, akevent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EventName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bStopWhenAttachedToDestroyed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AttachPointName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Actor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_akevent,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, "PostEventAttached", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022409, sizeof(AkGameplayStatics_eventPostEventAttached_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_PostEventByName()
	{
		struct AkGameplayStatics_eventPostEventByName_Parms
		{
			FString EventName;
			AActor* Actor;
			bool bStopWhenAttachedToDestroyed;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bStopWhenAttachedToDestroyed_SetBit = [](void* Obj){ ((AkGameplayStatics_eventPostEventByName_Parms*)Obj)->bStopWhenAttachedToDestroyed = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStopWhenAttachedToDestroyed = { UE4CodeGen_Private::EPropertyClass::Bool, "bStopWhenAttachedToDestroyed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AkGameplayStatics_eventPostEventByName_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bStopWhenAttachedToDestroyed_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor = { UE4CodeGen_Private::EPropertyClass::Object, "Actor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventPostEventByName_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_EventName = { UE4CodeGen_Private::EPropertyClass::Str, "EventName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventPostEventByName_Parms, EventName), METADATA_PARAMS(NewProp_EventName_MetaData, ARRAY_COUNT(NewProp_EventName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bStopWhenAttachedToDestroyed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Actor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EventName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, "PostEventByName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022409, sizeof(AkGameplayStatics_eventPostEventByName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_PostTrigger()
	{
		struct AkGameplayStatics_eventPostTrigger_Parms
		{
			FName Trigger;
			AActor* Actor;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor = { UE4CodeGen_Private::EPropertyClass::Object, "Actor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventPostTrigger_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_Trigger = { UE4CodeGen_Private::EPropertyClass::Name, "Trigger", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventPostTrigger_Parms, Trigger), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Actor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Trigger,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, "PostTrigger", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022409, sizeof(AkGameplayStatics_eventPostTrigger_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetBusConfig()
	{
		struct AkGameplayStatics_eventSetBusConfig_Parms
		{
			FString BusName;
			AkChannelConfiguration ChannelConfiguration;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ChannelConfiguration = { UE4CodeGen_Private::EPropertyClass::Enum, "ChannelConfiguration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSetBusConfig_Parms, ChannelConfiguration), Z_Construct_UEnum_AkAudio_AkChannelConfiguration, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ChannelConfiguration_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BusName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_BusName = { UE4CodeGen_Private::EPropertyClass::Str, "BusName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSetBusConfig_Parms, BusName), METADATA_PARAMS(NewProp_BusName_MetaData, ARRAY_COUNT(NewProp_BusName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ChannelConfiguration,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ChannelConfiguration_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BusName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, "SetBusConfig", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(AkGameplayStatics_eventSetBusConfig_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetOcclusionRefreshInterval()
	{
		struct AkGameplayStatics_eventSetOcclusionRefreshInterval_Parms
		{
			float RefreshInterval;
			AActor* Actor;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor = { UE4CodeGen_Private::EPropertyClass::Object, "Actor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSetOcclusionRefreshInterval_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RefreshInterval = { UE4CodeGen_Private::EPropertyClass::Float, "RefreshInterval", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSetOcclusionRefreshInterval_Parms, RefreshInterval), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Actor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RefreshInterval,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, "SetOcclusionRefreshInterval", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022409, sizeof(AkGameplayStatics_eventSetOcclusionRefreshInterval_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetOcclusionScalingFactor()
	{
		struct AkGameplayStatics_eventSetOcclusionScalingFactor_Parms
		{
			float ScalingFactor;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScalingFactor = { UE4CodeGen_Private::EPropertyClass::Float, "ScalingFactor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSetOcclusionScalingFactor_Parms, ScalingFactor), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScalingFactor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, "SetOcclusionScalingFactor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(AkGameplayStatics_eventSetOcclusionScalingFactor_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetOutputBusVolume()
	{
		struct AkGameplayStatics_eventSetOutputBusVolume_Parms
		{
			float BusVolume;
			AActor* Actor;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor = { UE4CodeGen_Private::EPropertyClass::Object, "Actor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSetOutputBusVolume_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BusVolume = { UE4CodeGen_Private::EPropertyClass::Float, "BusVolume", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSetOutputBusVolume_Parms, BusVolume), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Actor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BusVolume,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, "SetOutputBusVolume", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022409, sizeof(AkGameplayStatics_eventSetOutputBusVolume_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetPanningRule()
	{
		struct AkGameplayStatics_eventSetPanningRule_Parms
		{
			PanningRule PanRule;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PanRule = { UE4CodeGen_Private::EPropertyClass::Enum, "PanRule", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSetPanningRule_Parms, PanRule), Z_Construct_UEnum_AkAudio_PanningRule, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_PanRule_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PanRule,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PanRule_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, "SetPanningRule", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(AkGameplayStatics_eventSetPanningRule_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue()
	{
		struct AkGameplayStatics_eventSetRTPCValue_Parms
		{
			FName RTPC;
			float Value;
			int32 InterpolationTimeMs;
			AActor* Actor;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor = { UE4CodeGen_Private::EPropertyClass::Object, "Actor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSetRTPCValue_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_InterpolationTimeMs = { UE4CodeGen_Private::EPropertyClass::Int, "InterpolationTimeMs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSetRTPCValue_Parms, InterpolationTimeMs), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Float, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSetRTPCValue_Parms, Value), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_RTPC = { UE4CodeGen_Private::EPropertyClass::Name, "RTPC", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSetRTPCValue_Parms, RTPC), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Actor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InterpolationTimeMs,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RTPC,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, "SetRTPCValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022409, sizeof(AkGameplayStatics_eventSetRTPCValue_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetState()
	{
		struct AkGameplayStatics_eventSetState_Parms
		{
			FName StateGroup;
			FName State;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_State = { UE4CodeGen_Private::EPropertyClass::Name, "State", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSetState_Parms, State), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_StateGroup = { UE4CodeGen_Private::EPropertyClass::Name, "StateGroup", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSetState_Parms, StateGroup), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_State,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StateGroup,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, "SetState", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022409, sizeof(AkGameplayStatics_eventSetState_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetSwitch()
	{
		struct AkGameplayStatics_eventSetSwitch_Parms
		{
			FName SwitchGroup;
			FName SwitchState;
			AActor* Actor;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor = { UE4CodeGen_Private::EPropertyClass::Object, "Actor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSetSwitch_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_SwitchState = { UE4CodeGen_Private::EPropertyClass::Name, "SwitchState", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSetSwitch_Parms, SwitchState), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_SwitchGroup = { UE4CodeGen_Private::EPropertyClass::Name, "SwitchGroup", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSetSwitch_Parms, SwitchGroup), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Actor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SwitchState,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SwitchGroup,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, "SetSwitch", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022409, sizeof(AkGameplayStatics_eventSetSwitch_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation()
	{
		struct AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms
		{
			UObject* WorldContextObject;
			UAkAudioEvent* akevent;
			UAkAuxBus* EarlyReflectionsBus;
			FVector Location;
			FRotator Orientation;
			bool AutoPost;
			FString EventName;
			FString EarlyReflectionsBusName;
			bool AutoDestroy;
			UAkComponent* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080588, 1, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms, ReturnValue), Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(NewProp_ReturnValue_MetaData, ARRAY_COUNT(NewProp_ReturnValue_MetaData)) };
			auto NewProp_AutoDestroy_SetBit = [](void* Obj){ ((AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms*)Obj)->AutoDestroy = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AutoDestroy = { UE4CodeGen_Private::EPropertyClass::Bool, "AutoDestroy", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_AutoDestroy_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EarlyReflectionsBusName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_EarlyReflectionsBusName = { UE4CodeGen_Private::EPropertyClass::Str, "EarlyReflectionsBusName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms, EarlyReflectionsBusName), METADATA_PARAMS(NewProp_EarlyReflectionsBusName_MetaData, ARRAY_COUNT(NewProp_EarlyReflectionsBusName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_EventName = { UE4CodeGen_Private::EPropertyClass::Str, "EventName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms, EventName), METADATA_PARAMS(NewProp_EventName_MetaData, ARRAY_COUNT(NewProp_EventName_MetaData)) };
			auto NewProp_AutoPost_SetBit = [](void* Obj){ ((AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms*)Obj)->AutoPost = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AutoPost = { UE4CodeGen_Private::EPropertyClass::Bool, "AutoPost", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_AutoPost_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Orientation = { UE4CodeGen_Private::EPropertyClass::Struct, "Orientation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms, Orientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location = { UE4CodeGen_Private::EPropertyClass::Struct, "Location", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EarlyReflectionsBus = { UE4CodeGen_Private::EPropertyClass::Object, "EarlyReflectionsBus", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms, EarlyReflectionsBus), Z_Construct_UClass_UAkAuxBus_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_akevent = { UE4CodeGen_Private::EPropertyClass::Object, "akevent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms, akevent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AutoDestroy,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EarlyReflectionsBusName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EventName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AutoPost,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Orientation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Location,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EarlyReflectionsBus,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_akevent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, "SpawnAkComponentAtLocation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04822409, sizeof(AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_StartAllAmbientSounds()
	{
		struct AkGameplayStatics_eventStartAllAmbientSounds_Parms
		{
			UObject* WorldContextObject;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventStartAllAmbientSounds_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, "StartAllAmbientSounds", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022409, sizeof(AkGameplayStatics_eventStartAllAmbientSounds_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_StartOutputCapture()
	{
		struct AkGameplayStatics_eventStartOutputCapture_Parms
		{
			FString Filename;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filename = { UE4CodeGen_Private::EPropertyClass::Str, "Filename", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventStartOutputCapture_Parms, Filename), METADATA_PARAMS(NewProp_Filename_MetaData, ARRAY_COUNT(NewProp_Filename_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Filename,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, "StartOutputCapture", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022409, sizeof(AkGameplayStatics_eventStartOutputCapture_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_StartProfilerCapture()
	{
		struct AkGameplayStatics_eventStartProfilerCapture_Parms
		{
			FString Filename;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filename = { UE4CodeGen_Private::EPropertyClass::Str, "Filename", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventStartProfilerCapture_Parms, Filename), METADATA_PARAMS(NewProp_Filename_MetaData, ARRAY_COUNT(NewProp_Filename_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Filename,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, "StartProfilerCapture", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022409, sizeof(AkGameplayStatics_eventStartProfilerCapture_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_StopActor()
	{
		struct AkGameplayStatics_eventStopActor_Parms
		{
			AActor* Actor;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor = { UE4CodeGen_Private::EPropertyClass::Object, "Actor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventStopActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Actor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, "StopActor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022409, sizeof(AkGameplayStatics_eventStopActor_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_StopAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, "StopAll", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022409, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_StopAllAmbientSounds()
	{
		struct AkGameplayStatics_eventStopAllAmbientSounds_Parms
		{
			UObject* WorldContextObject;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventStopAllAmbientSounds_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, "StopAllAmbientSounds", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022409, sizeof(AkGameplayStatics_eventStopAllAmbientSounds_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_StopOutputCapture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, "StopOutputCapture", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022409, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_StopProfilerCapture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, "StopProfilerCapture", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022409, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_UnloadBank()
	{
		struct AkGameplayStatics_eventUnloadBank_Parms
		{
			UAkAudioBank* Bank;
			FString BankName;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BankName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_BankName = { UE4CodeGen_Private::EPropertyClass::Str, "BankName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventUnloadBank_Parms, BankName), METADATA_PARAMS(NewProp_BankName_MetaData, ARRAY_COUNT(NewProp_BankName_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Bank = { UE4CodeGen_Private::EPropertyClass::Object, "Bank", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventUnloadBank_Parms, Bank), Z_Construct_UClass_UAkAudioBank_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BankName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Bank,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, "UnloadBank", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022409, sizeof(AkGameplayStatics_eventUnloadBank_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_UnloadBankByName()
	{
		struct AkGameplayStatics_eventUnloadBankByName_Parms
		{
			FString BankName;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BankName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_BankName = { UE4CodeGen_Private::EPropertyClass::Str, "BankName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventUnloadBankByName_Parms, BankName), METADATA_PARAMS(NewProp_BankName_MetaData, ARRAY_COUNT(NewProp_BankName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BankName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, "UnloadBankByName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022409, sizeof(AkGameplayStatics_eventUnloadBankByName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_UseEarlyReflections()
	{
		struct AkGameplayStatics_eventUseEarlyReflections_Parms
		{
			AActor* Actor;
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
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_AuxBusName = { UE4CodeGen_Private::EPropertyClass::Str, "AuxBusName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventUseEarlyReflections_Parms, AuxBusName), METADATA_PARAMS(NewProp_AuxBusName_MetaData, ARRAY_COUNT(NewProp_AuxBusName_MetaData)) };
			auto NewProp_SpotReflectors_SetBit = [](void* Obj){ ((AkGameplayStatics_eventUseEarlyReflections_Parms*)Obj)->SpotReflectors = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SpotReflectors = { UE4CodeGen_Private::EPropertyClass::Bool, "SpotReflectors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AkGameplayStatics_eventUseEarlyReflections_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_SpotReflectors_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_Front_SetBit = [](void* Obj){ ((AkGameplayStatics_eventUseEarlyReflections_Parms*)Obj)->Front = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Front = { UE4CodeGen_Private::EPropertyClass::Bool, "Front", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AkGameplayStatics_eventUseEarlyReflections_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Front_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_Back_SetBit = [](void* Obj){ ((AkGameplayStatics_eventUseEarlyReflections_Parms*)Obj)->Back = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Back = { UE4CodeGen_Private::EPropertyClass::Bool, "Back", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AkGameplayStatics_eventUseEarlyReflections_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Back_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_Ceiling_SetBit = [](void* Obj){ ((AkGameplayStatics_eventUseEarlyReflections_Parms*)Obj)->Ceiling = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Ceiling = { UE4CodeGen_Private::EPropertyClass::Bool, "Ceiling", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AkGameplayStatics_eventUseEarlyReflections_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Ceiling_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_Floor_SetBit = [](void* Obj){ ((AkGameplayStatics_eventUseEarlyReflections_Parms*)Obj)->Floor = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Floor = { UE4CodeGen_Private::EPropertyClass::Bool, "Floor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AkGameplayStatics_eventUseEarlyReflections_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Floor_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_Right_SetBit = [](void* Obj){ ((AkGameplayStatics_eventUseEarlyReflections_Parms*)Obj)->Right = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Right = { UE4CodeGen_Private::EPropertyClass::Bool, "Right", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AkGameplayStatics_eventUseEarlyReflections_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Right_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_Left_SetBit = [](void* Obj){ ((AkGameplayStatics_eventUseEarlyReflections_Parms*)Obj)->Left = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Left = { UE4CodeGen_Private::EPropertyClass::Bool, "Left", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AkGameplayStatics_eventUseEarlyReflections_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Left_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AuxBus = { UE4CodeGen_Private::EPropertyClass::Object, "AuxBus", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventUseEarlyReflections_Parms, AuxBus), Z_Construct_UClass_UAkAuxBus_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor = { UE4CodeGen_Private::EPropertyClass::Object, "Actor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventUseEarlyReflections_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
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
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Actor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, "UseEarlyReflections", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(AkGameplayStatics_eventUseEarlyReflections_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_UseReverbVolumes()
	{
		struct AkGameplayStatics_eventUseReverbVolumes_Parms
		{
			bool inUseReverbVolumes;
			AActor* Actor;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor = { UE4CodeGen_Private::EPropertyClass::Object, "Actor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AkGameplayStatics_eventUseReverbVolumes_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_inUseReverbVolumes_SetBit = [](void* Obj){ ((AkGameplayStatics_eventUseReverbVolumes_Parms*)Obj)->inUseReverbVolumes = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inUseReverbVolumes = { UE4CodeGen_Private::EPropertyClass::Bool, "inUseReverbVolumes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AkGameplayStatics_eventUseReverbVolumes_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_inUseReverbVolumes_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Actor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_inUseReverbVolumes,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, "UseReverbVolumes", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022409, sizeof(AkGameplayStatics_eventUseReverbVolumes_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAkGameplayStatics_NoRegister()
	{
		return UAkGameplayStatics::StaticClass();
	}
	UClass* Z_Construct_UClass_UAkGameplayStatics()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UAkGameplayStatics_AddOutputCaptureMarker, "AddOutputCaptureMarker" }, // 2513421858
				{ &Z_Construct_UFunction_UAkGameplayStatics_ClearBanks, "ClearBanks" }, // 4254051837
				{ &Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent, "GetAkComponent" }, // 3556123688
				{ &Z_Construct_UFunction_UAkGameplayStatics_GetAudioSpectrum, "GetAudioSpectrum" }, // 2631387862
				{ &Z_Construct_UFunction_UAkGameplayStatics_GetOcclusionScalingFactor, "GetOcclusionScalingFactor" }, // 2145868630
				{ &Z_Construct_UFunction_UAkGameplayStatics_IsEditor, "IsEditor" }, // 1212341620
				{ &Z_Construct_UFunction_UAkGameplayStatics_IsGame, "IsGame" }, // 1326774783
				{ &Z_Construct_UFunction_UAkGameplayStatics_LoadBank, "LoadBank" }, // 158510501
				{ &Z_Construct_UFunction_UAkGameplayStatics_LoadBankByName, "LoadBankByName" }, // 3892972155
				{ &Z_Construct_UFunction_UAkGameplayStatics_LoadBanks, "LoadBanks" }, // 1993999446
				{ &Z_Construct_UFunction_UAkGameplayStatics_LoadInitBank, "LoadInitBank" }, // 1204985964
				{ &Z_Construct_UFunction_UAkGameplayStatics_PostEvent, "PostEvent" }, // 1647687553
				{ &Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation, "PostEventAtLocation" }, // 455870826
				{ &Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocationByName, "PostEventAtLocationByName" }, // 4270162818
				{ &Z_Construct_UFunction_UAkGameplayStatics_PostEventAttached, "PostEventAttached" }, // 3533515841
				{ &Z_Construct_UFunction_UAkGameplayStatics_PostEventByName, "PostEventByName" }, // 3665023471
				{ &Z_Construct_UFunction_UAkGameplayStatics_PostTrigger, "PostTrigger" }, // 1584687918
				{ &Z_Construct_UFunction_UAkGameplayStatics_SetBusConfig, "SetBusConfig" }, // 1230926547
				{ &Z_Construct_UFunction_UAkGameplayStatics_SetOcclusionRefreshInterval, "SetOcclusionRefreshInterval" }, // 3824522164
				{ &Z_Construct_UFunction_UAkGameplayStatics_SetOcclusionScalingFactor, "SetOcclusionScalingFactor" }, // 2812770777
				{ &Z_Construct_UFunction_UAkGameplayStatics_SetOutputBusVolume, "SetOutputBusVolume" }, // 2048996785
				{ &Z_Construct_UFunction_UAkGameplayStatics_SetPanningRule, "SetPanningRule" }, // 631212717
				{ &Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue, "SetRTPCValue" }, // 2884286002
				{ &Z_Construct_UFunction_UAkGameplayStatics_SetState, "SetState" }, // 3692873133
				{ &Z_Construct_UFunction_UAkGameplayStatics_SetSwitch, "SetSwitch" }, // 4071170918
				{ &Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation, "SpawnAkComponentAtLocation" }, // 839743179
				{ &Z_Construct_UFunction_UAkGameplayStatics_StartAllAmbientSounds, "StartAllAmbientSounds" }, // 1253530605
				{ &Z_Construct_UFunction_UAkGameplayStatics_StartOutputCapture, "StartOutputCapture" }, // 1235273225
				{ &Z_Construct_UFunction_UAkGameplayStatics_StartProfilerCapture, "StartProfilerCapture" }, // 959504801
				{ &Z_Construct_UFunction_UAkGameplayStatics_StopActor, "StopActor" }, // 3127459378
				{ &Z_Construct_UFunction_UAkGameplayStatics_StopAll, "StopAll" }, // 2856969003
				{ &Z_Construct_UFunction_UAkGameplayStatics_StopAllAmbientSounds, "StopAllAmbientSounds" }, // 276719897
				{ &Z_Construct_UFunction_UAkGameplayStatics_StopOutputCapture, "StopOutputCapture" }, // 1177634061
				{ &Z_Construct_UFunction_UAkGameplayStatics_StopProfilerCapture, "StopProfilerCapture" }, // 3572401711
				{ &Z_Construct_UFunction_UAkGameplayStatics_UnloadBank, "UnloadBank" }, // 4154316607
				{ &Z_Construct_UFunction_UAkGameplayStatics_UnloadBankByName, "UnloadBankByName" }, // 4142313479
				{ &Z_Construct_UFunction_UAkGameplayStatics_UseEarlyReflections, "UseEarlyReflections" }, // 61002144
				{ &Z_Construct_UFunction_UAkGameplayStatics_UseReverbVolumes, "UseReverbVolumes" }, // 3731088281
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "AkGameplayStatics.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/AkGameplayStatics.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAkGameplayStatics>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAkGameplayStatics::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkGameplayStatics, 1147099805);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkGameplayStatics(Z_Construct_UClass_UAkGameplayStatics, &UAkGameplayStatics::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkGameplayStatics"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkGameplayStatics);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
