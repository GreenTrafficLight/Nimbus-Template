// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AtomAsrRack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomAsrRack() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomAsrRack_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomAsrRack();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UAtomAsrRack_ApplyDspBusSnapshot();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UAtomAsrRack_AttachDspBusSetting();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UAtomAsrRack_DetachDspBusSetting();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UAtomAsrRack_GetAsrRack();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UAtomAsrRack_GetDefaultAsrRack();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UAtomAsrRack_SetBusSendLevelByName();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UAtomAsrRack_SetBusVolumeByName();
// End Cross Module References
	void UAtomAsrRack::StaticRegisterNativesUAtomAsrRack()
	{
		UClass* Class = UAtomAsrRack::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyDspBusSnapshot", (Native)&UAtomAsrRack::execApplyDspBusSnapshot },
			{ "AttachDspBusSetting", (Native)&UAtomAsrRack::execAttachDspBusSetting },
			{ "DetachDspBusSetting", (Native)&UAtomAsrRack::execDetachDspBusSetting },
			{ "GetAsrRack", (Native)&UAtomAsrRack::execGetAsrRack },
			{ "GetDefaultAsrRack", (Native)&UAtomAsrRack::execGetDefaultAsrRack },
			{ "SetBusSendLevelByName", (Native)&UAtomAsrRack::execSetBusSendLevelByName },
			{ "SetBusVolumeByName", (Native)&UAtomAsrRack::execSetBusVolumeByName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UAtomAsrRack_ApplyDspBusSnapshot()
	{
		struct AtomAsrRack_eventApplyDspBusSnapshot_Parms
		{
			FString SnapshotName;
			int32 Milliseconds;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Milliseconds = { UE4CodeGen_Private::EPropertyClass::Int, "Milliseconds", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtomAsrRack_eventApplyDspBusSnapshot_Parms, Milliseconds), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnapshotName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_SnapshotName = { UE4CodeGen_Private::EPropertyClass::Str, "SnapshotName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtomAsrRack_eventApplyDspBusSnapshot_Parms, SnapshotName), METADATA_PARAMS(NewProp_SnapshotName_MetaData, ARRAY_COUNT(NewProp_SnapshotName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Milliseconds,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SnapshotName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AtomAsrRack.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomAsrRack, "ApplyDspBusSnapshot", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AtomAsrRack_eventApplyDspBusSnapshot_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAtomAsrRack_AttachDspBusSetting()
	{
		struct AtomAsrRack_eventAttachDspBusSetting_Parms
		{
			FString SettingName;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SettingName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_SettingName = { UE4CodeGen_Private::EPropertyClass::Str, "SettingName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtomAsrRack_eventAttachDspBusSetting_Parms, SettingName), METADATA_PARAMS(NewProp_SettingName_MetaData, ARRAY_COUNT(NewProp_SettingName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SettingName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AtomAsrRack.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomAsrRack, "AttachDspBusSetting", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AtomAsrRack_eventAttachDspBusSetting_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAtomAsrRack_DetachDspBusSetting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AtomAsrRack.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomAsrRack, "DetachDspBusSetting", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAtomAsrRack_GetAsrRack()
	{
		struct AtomAsrRack_eventGetAsrRack_Parms
		{
			int32 AsrRackId;
			UAtomAsrRack* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AtomAsrRack_eventGetAsrRack_Parms, ReturnValue), Z_Construct_UClass_UAtomAsrRack_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_AsrRackId = { UE4CodeGen_Private::EPropertyClass::Int, "AsrRackId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtomAsrRack_eventGetAsrRack_Parms, AsrRackId), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AsrRackId,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AtomAsrRack.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomAsrRack, "GetAsrRack", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(AtomAsrRack_eventGetAsrRack_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAtomAsrRack_GetDefaultAsrRack()
	{
		struct AtomAsrRack_eventGetDefaultAsrRack_Parms
		{
			UAtomAsrRack* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AtomAsrRack_eventGetDefaultAsrRack_Parms, ReturnValue), Z_Construct_UClass_UAtomAsrRack_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AtomAsrRack.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomAsrRack, "GetDefaultAsrRack", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(AtomAsrRack_eventGetDefaultAsrRack_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAtomAsrRack_SetBusSendLevelByName()
	{
		struct AtomAsrRack_eventSetBusSendLevelByName_Parms
		{
			FString SourceBusName;
			FString DestBusName;
			float Level;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Level = { UE4CodeGen_Private::EPropertyClass::Float, "Level", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtomAsrRack_eventSetBusSendLevelByName_Parms, Level), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestBusName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_DestBusName = { UE4CodeGen_Private::EPropertyClass::Str, "DestBusName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtomAsrRack_eventSetBusSendLevelByName_Parms, DestBusName), METADATA_PARAMS(NewProp_DestBusName_MetaData, ARRAY_COUNT(NewProp_DestBusName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceBusName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_SourceBusName = { UE4CodeGen_Private::EPropertyClass::Str, "SourceBusName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtomAsrRack_eventSetBusSendLevelByName_Parms, SourceBusName), METADATA_PARAMS(NewProp_SourceBusName_MetaData, ARRAY_COUNT(NewProp_SourceBusName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Level,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DestBusName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceBusName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AtomAsrRack.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomAsrRack, "SetBusSendLevelByName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AtomAsrRack_eventSetBusSendLevelByName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAtomAsrRack_SetBusVolumeByName()
	{
		struct AtomAsrRack_eventSetBusVolumeByName_Parms
		{
			FString BusName;
			float Volume;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Volume = { UE4CodeGen_Private::EPropertyClass::Float, "Volume", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtomAsrRack_eventSetBusVolumeByName_Parms, Volume), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BusName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_BusName = { UE4CodeGen_Private::EPropertyClass::Str, "BusName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtomAsrRack_eventSetBusVolumeByName_Parms, BusName), METADATA_PARAMS(NewProp_BusName_MetaData, ARRAY_COUNT(NewProp_BusName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Volume,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BusName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AtomAsrRack.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomAsrRack, "SetBusVolumeByName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AtomAsrRack_eventSetBusVolumeByName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAtomAsrRack_NoRegister()
	{
		return UAtomAsrRack::StaticClass();
	}
	UClass* Z_Construct_UClass_UAtomAsrRack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UAtomAsrRack_ApplyDspBusSnapshot, "ApplyDspBusSnapshot" }, // 1877185880
				{ &Z_Construct_UFunction_UAtomAsrRack_AttachDspBusSetting, "AttachDspBusSetting" }, // 2679464064
				{ &Z_Construct_UFunction_UAtomAsrRack_DetachDspBusSetting, "DetachDspBusSetting" }, // 620612765
				{ &Z_Construct_UFunction_UAtomAsrRack_GetAsrRack, "GetAsrRack" }, // 2441648807
				{ &Z_Construct_UFunction_UAtomAsrRack_GetDefaultAsrRack, "GetDefaultAsrRack" }, // 2369043936
				{ &Z_Construct_UFunction_UAtomAsrRack_SetBusSendLevelByName, "SetBusSendLevelByName" }, // 1626962429
				{ &Z_Construct_UFunction_UAtomAsrRack_SetBusVolumeByName, "SetBusVolumeByName" }, // 4074400722
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "AtomAsrRack.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/AtomAsrRack.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RackId_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AtomAsrRack" },
				{ "ModuleRelativePath", "Public/AtomAsrRack.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_RackId = { UE4CodeGen_Private::EPropertyClass::Int, "RackId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAtomAsrRack, RackId), METADATA_PARAMS(NewProp_RackId_MetaData, ARRAY_COUNT(NewProp_RackId_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RackId,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAtomAsrRack>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAtomAsrRack::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00000080u,
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
	IMPLEMENT_CLASS(UAtomAsrRack, 3553633535);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAtomAsrRack(Z_Construct_UClass_UAtomAsrRack, &UAtomAsrRack::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UAtomAsrRack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomAsrRack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
