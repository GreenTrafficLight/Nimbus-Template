// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AtomStatics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomStatics() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomStatics_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomStatics();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UAtomStatics_PauseAudioOutput();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UAtomStatics_PlaySoundAtLocation();
	ENGINE_API UClass* Z_Construct_UClass_USoundConcurrency_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundAttenuation_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCue_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UAtomStatics_PlaySoundAttached();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAttachLocation();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UAtomStatics_SpawnSound2D();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached();
// End Cross Module References
	void UAtomStatics::StaticRegisterNativesUAtomStatics()
	{
		UClass* Class = UAtomStatics::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PauseAudioOutput", (Native)&UAtomStatics::execPauseAudioOutput },
			{ "PlaySoundAtLocation", (Native)&UAtomStatics::execPlaySoundAtLocation },
			{ "PlaySoundAttached", (Native)&UAtomStatics::execPlaySoundAttached },
			{ "SpawnSound2D", (Native)&UAtomStatics::execSpawnSound2D },
			{ "SpawnSoundAtLocation", (Native)&UAtomStatics::execSpawnSoundAtLocation },
			{ "SpawnSoundAttached", (Native)&UAtomStatics::execSpawnSoundAttached },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UAtomStatics_PauseAudioOutput()
	{
		struct AtomStatics_eventPauseAudioOutput_Parms
		{
			bool bPause;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bPause_SetBit = [](void* Obj){ ((AtomStatics_eventPauseAudioOutput_Parms*)Obj)->bPause = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPause = { UE4CodeGen_Private::EPropertyClass::Bool, "bPause", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AtomStatics_eventPauseAudioOutput_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bPause_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bPause,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AtomStatics.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomStatics, "PauseAudioOutput", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(AtomStatics_eventPauseAudioOutput_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAtomStatics_PlaySoundAtLocation()
	{
		struct AtomStatics_eventPlaySoundAtLocation_Parms
		{
			UObject* WorldContextObject;
			USoundAtomCue* Sound;
			FVector Location;
			FRotator Rotation;
			float VolumeMultiplier;
			float PitchMultiplier;
			float StartTime;
			USoundAttenuation* AttenuationSettings;
			USoundConcurrency* ConcurrencySettings;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConcurrencySettings = { UE4CodeGen_Private::EPropertyClass::Object, "ConcurrencySettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtomStatics_eventPlaySoundAtLocation_Parms, ConcurrencySettings), Z_Construct_UClass_USoundConcurrency_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttenuationSettings = { UE4CodeGen_Private::EPropertyClass::Object, "AttenuationSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtomStatics_eventPlaySoundAtLocation_Parms, AttenuationSettings), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartTime = { UE4CodeGen_Private::EPropertyClass::Float, "StartTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtomStatics_eventPlaySoundAtLocation_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "PitchMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtomStatics_eventPlaySoundAtLocation_Parms, PitchMultiplier), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "VolumeMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtomStatics_eventPlaySoundAtLocation_Parms, VolumeMultiplier), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation = { UE4CodeGen_Private::EPropertyClass::Struct, "Rotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtomStatics_eventPlaySoundAtLocation_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location = { UE4CodeGen_Private::EPropertyClass::Struct, "Location", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtomStatics_eventPlaySoundAtLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sound = { UE4CodeGen_Private::EPropertyClass::Object, "Sound", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtomStatics_eventPlaySoundAtLocation_Parms, Sound), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtomStatics_eventPlaySoundAtLocation_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConcurrencySettings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AttenuationSettings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PitchMultiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VolumeMultiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Rotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Location,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Sound,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AtomStatics.h" },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomStatics, "PlaySoundAtLocation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04822401, sizeof(AtomStatics_eventPlaySoundAtLocation_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAtomStatics_PlaySoundAttached()
	{
		struct AtomStatics_eventPlaySoundAttached_Parms
		{
			USoundAtomCue* Sound;
			USceneComponent* AttachToComponent;
			FName AttachPointName;
			FVector Location;
			TEnumAsByte<EAttachLocation::Type> LocationType;
			bool bStopWhenAttachedToDestroyed;
			float VolumeMultiplier;
			float PitchMultiplier;
			float StartTime;
			USoundAttenuation* AttenuationSettings;
			UAtomComponent* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080588, 1, nullptr, STRUCT_OFFSET(AtomStatics_eventPlaySoundAttached_Parms, ReturnValue), Z_Construct_UClass_UAtomComponent_NoRegister, METADATA_PARAMS(NewProp_ReturnValue_MetaData, ARRAY_COUNT(NewProp_ReturnValue_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttenuationSettings = { UE4CodeGen_Private::EPropertyClass::Object, "AttenuationSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtomStatics_eventPlaySoundAttached_Parms, AttenuationSettings), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartTime = { UE4CodeGen_Private::EPropertyClass::Float, "StartTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtomStatics_eventPlaySoundAttached_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "PitchMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtomStatics_eventPlaySoundAttached_Parms, PitchMultiplier), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "VolumeMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtomStatics_eventPlaySoundAttached_Parms, VolumeMultiplier), METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bStopWhenAttachedToDestroyed_SetBit = [](void* Obj){ ((AtomStatics_eventPlaySoundAttached_Parms*)Obj)->bStopWhenAttachedToDestroyed = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStopWhenAttachedToDestroyed = { UE4CodeGen_Private::EPropertyClass::Bool, "bStopWhenAttachedToDestroyed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AtomStatics_eventPlaySoundAttached_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bStopWhenAttachedToDestroyed_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_LocationType = { UE4CodeGen_Private::EPropertyClass::Byte, "LocationType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtomStatics_eventPlaySoundAttached_Parms, LocationType), Z_Construct_UEnum_Engine_EAttachLocation, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location = { UE4CodeGen_Private::EPropertyClass::Struct, "Location", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtomStatics_eventPlaySoundAttached_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_AttachPointName = { UE4CodeGen_Private::EPropertyClass::Name, "AttachPointName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtomStatics_eventPlaySoundAttached_Parms, AttachPointName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachToComponent_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttachToComponent = { UE4CodeGen_Private::EPropertyClass::Object, "AttachToComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(AtomStatics_eventPlaySoundAttached_Parms, AttachToComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_AttachToComponent_MetaData, ARRAY_COUNT(NewProp_AttachToComponent_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sound = { UE4CodeGen_Private::EPropertyClass::Object, "Sound", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtomStatics_eventPlaySoundAttached_Parms, Sound), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AttenuationSettings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PitchMultiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VolumeMultiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bStopWhenAttachedToDestroyed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LocationType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Location,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AttachPointName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AttachToComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Sound,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AtomStatics.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomStatics, "PlaySoundAttached", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04822401, sizeof(AtomStatics_eventPlaySoundAttached_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAtomStatics_SpawnSound2D()
	{
		struct AtomStatics_eventSpawnSound2D_Parms
		{
			const UObject* WorldContextObject;
			USoundAtomCue* Sound;
			float PitchMultiplier;
			float StartTime;
			bool bPersistAcrossLevelTransition;
			bool bAutoDestroy;
			UAtomComponent* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080588, 1, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnSound2D_Parms, ReturnValue), Z_Construct_UClass_UAtomComponent_NoRegister, METADATA_PARAMS(NewProp_ReturnValue_MetaData, ARRAY_COUNT(NewProp_ReturnValue_MetaData)) };
			auto NewProp_bAutoDestroy_SetBit = [](void* Obj){ ((AtomStatics_eventSpawnSound2D_Parms*)Obj)->bAutoDestroy = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoDestroy = { UE4CodeGen_Private::EPropertyClass::Bool, "bAutoDestroy", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AtomStatics_eventSpawnSound2D_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAutoDestroy_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bPersistAcrossLevelTransition_SetBit = [](void* Obj){ ((AtomStatics_eventSpawnSound2D_Parms*)Obj)->bPersistAcrossLevelTransition = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPersistAcrossLevelTransition = { UE4CodeGen_Private::EPropertyClass::Bool, "bPersistAcrossLevelTransition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AtomStatics_eventSpawnSound2D_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bPersistAcrossLevelTransition_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartTime = { UE4CodeGen_Private::EPropertyClass::Float, "StartTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnSound2D_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "PitchMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnSound2D_Parms, PitchMultiplier), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sound = { UE4CodeGen_Private::EPropertyClass::Object, "Sound", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnSound2D_Parms, Sound), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnSound2D_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(NewProp_WorldContextObject_MetaData, ARRAY_COUNT(NewProp_WorldContextObject_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAutoDestroy,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bPersistAcrossLevelTransition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PitchMultiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Sound,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AtomStatics.h" },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomStatics, "SpawnSound2D", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022409, sizeof(AtomStatics_eventSpawnSound2D_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation()
	{
		struct AtomStatics_eventSpawnSoundAtLocation_Parms
		{
			const UObject* WorldContextObject;
			USoundAtomCue* Sound;
			FVector Location;
			FRotator Rotation;
			float VolumeMultiplier;
			float PitchMultiplier;
			float StartTime;
			USoundAttenuation* AttenuationSettings;
			USoundConcurrency* ConcurrencySettings;
			bool bAutoDestroy;
			UAtomComponent* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080588, 1, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnSoundAtLocation_Parms, ReturnValue), Z_Construct_UClass_UAtomComponent_NoRegister, METADATA_PARAMS(NewProp_ReturnValue_MetaData, ARRAY_COUNT(NewProp_ReturnValue_MetaData)) };
			auto NewProp_bAutoDestroy_SetBit = [](void* Obj){ ((AtomStatics_eventSpawnSoundAtLocation_Parms*)Obj)->bAutoDestroy = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoDestroy = { UE4CodeGen_Private::EPropertyClass::Bool, "bAutoDestroy", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AtomStatics_eventSpawnSoundAtLocation_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAutoDestroy_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConcurrencySettings = { UE4CodeGen_Private::EPropertyClass::Object, "ConcurrencySettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnSoundAtLocation_Parms, ConcurrencySettings), Z_Construct_UClass_USoundConcurrency_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttenuationSettings = { UE4CodeGen_Private::EPropertyClass::Object, "AttenuationSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnSoundAtLocation_Parms, AttenuationSettings), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartTime = { UE4CodeGen_Private::EPropertyClass::Float, "StartTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnSoundAtLocation_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "PitchMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnSoundAtLocation_Parms, PitchMultiplier), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "VolumeMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnSoundAtLocation_Parms, VolumeMultiplier), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation = { UE4CodeGen_Private::EPropertyClass::Struct, "Rotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnSoundAtLocation_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location = { UE4CodeGen_Private::EPropertyClass::Struct, "Location", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnSoundAtLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sound = { UE4CodeGen_Private::EPropertyClass::Object, "Sound", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnSoundAtLocation_Parms, Sound), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnSoundAtLocation_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(NewProp_WorldContextObject_MetaData, ARRAY_COUNT(NewProp_WorldContextObject_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAutoDestroy,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConcurrencySettings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AttenuationSettings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PitchMultiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VolumeMultiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Rotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Location,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Sound,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AtomStatics.h" },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomStatics, "SpawnSoundAtLocation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04822401, sizeof(AtomStatics_eventSpawnSoundAtLocation_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached()
	{
		struct AtomStatics_eventSpawnSoundAttached_Parms
		{
			USoundAtomCue* Sound;
			USceneComponent* AttachToComponent;
			FName AttachPointName;
			FVector Location;
			FRotator Rotation;
			TEnumAsByte<EAttachLocation::Type> LocationType;
			bool bStopWhenAttachedToDestroyed;
			float VolumeMultiplier;
			float PitchMultiplier;
			float StartTime;
			USoundAttenuation* AttenuationSettings;
			USoundConcurrency* ConcurrencySettings;
			bool bAutoDestroy;
			UAtomComponent* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080588, 1, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnSoundAttached_Parms, ReturnValue), Z_Construct_UClass_UAtomComponent_NoRegister, METADATA_PARAMS(NewProp_ReturnValue_MetaData, ARRAY_COUNT(NewProp_ReturnValue_MetaData)) };
			auto NewProp_bAutoDestroy_SetBit = [](void* Obj){ ((AtomStatics_eventSpawnSoundAttached_Parms*)Obj)->bAutoDestroy = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoDestroy = { UE4CodeGen_Private::EPropertyClass::Bool, "bAutoDestroy", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AtomStatics_eventSpawnSoundAttached_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAutoDestroy_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConcurrencySettings = { UE4CodeGen_Private::EPropertyClass::Object, "ConcurrencySettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnSoundAttached_Parms, ConcurrencySettings), Z_Construct_UClass_USoundConcurrency_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttenuationSettings = { UE4CodeGen_Private::EPropertyClass::Object, "AttenuationSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnSoundAttached_Parms, AttenuationSettings), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartTime = { UE4CodeGen_Private::EPropertyClass::Float, "StartTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnSoundAttached_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "PitchMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnSoundAttached_Parms, PitchMultiplier), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "VolumeMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnSoundAttached_Parms, VolumeMultiplier), METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bStopWhenAttachedToDestroyed_SetBit = [](void* Obj){ ((AtomStatics_eventSpawnSoundAttached_Parms*)Obj)->bStopWhenAttachedToDestroyed = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStopWhenAttachedToDestroyed = { UE4CodeGen_Private::EPropertyClass::Bool, "bStopWhenAttachedToDestroyed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AtomStatics_eventSpawnSoundAttached_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bStopWhenAttachedToDestroyed_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_LocationType = { UE4CodeGen_Private::EPropertyClass::Byte, "LocationType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnSoundAttached_Parms, LocationType), Z_Construct_UEnum_Engine_EAttachLocation, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation = { UE4CodeGen_Private::EPropertyClass::Struct, "Rotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnSoundAttached_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location = { UE4CodeGen_Private::EPropertyClass::Struct, "Location", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnSoundAttached_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_AttachPointName = { UE4CodeGen_Private::EPropertyClass::Name, "AttachPointName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnSoundAttached_Parms, AttachPointName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachToComponent_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttachToComponent = { UE4CodeGen_Private::EPropertyClass::Object, "AttachToComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnSoundAttached_Parms, AttachToComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_AttachToComponent_MetaData, ARRAY_COUNT(NewProp_AttachToComponent_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sound = { UE4CodeGen_Private::EPropertyClass::Object, "Sound", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtomStatics_eventSpawnSoundAttached_Parms, Sound), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAutoDestroy,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConcurrencySettings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AttenuationSettings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PitchMultiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VolumeMultiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bStopWhenAttachedToDestroyed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LocationType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Rotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Location,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AttachPointName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AttachToComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Sound,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AtomStatics.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomStatics, "SpawnSoundAttached", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04822401, sizeof(AtomStatics_eventSpawnSoundAttached_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAtomStatics_NoRegister()
	{
		return UAtomStatics::StaticClass();
	}
	UClass* Z_Construct_UClass_UAtomStatics()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UAtomStatics_PauseAudioOutput, "PauseAudioOutput" }, // 3739213663
				{ &Z_Construct_UFunction_UAtomStatics_PlaySoundAtLocation, "PlaySoundAtLocation" }, // 1523254416
				{ &Z_Construct_UFunction_UAtomStatics_PlaySoundAttached, "PlaySoundAttached" }, // 473700871
				{ &Z_Construct_UFunction_UAtomStatics_SpawnSound2D, "SpawnSound2D" }, // 3187579722
				{ &Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation, "SpawnSoundAtLocation" }, // 3685767991
				{ &Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached, "SpawnSoundAttached" }, // 3480234559
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "AtomStatics.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/AtomStatics.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAtomStatics>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAtomStatics::StaticClass,
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
	IMPLEMENT_CLASS(UAtomStatics, 4047415617);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAtomStatics(Z_Construct_UClass_UAtomStatics, &UAtomStatics::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UAtomStatics"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomStatics);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
