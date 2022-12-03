// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SoundAtomCueSheet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundAtomCueSheet() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCueSheet_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCueSheet();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_USoundAtomCueSheet_ApplyDspBusSnapshot();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_USoundAtomCueSheet_AttachDspBusSetting();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_USoundAtomCueSheet_DetachDspBusSetting();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_USoundAtomCueSheet_LoadAcb();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_USoundAtomCueSheet_ReleaseAcb();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
// End Cross Module References
	void USoundAtomCueSheet::StaticRegisterNativesUSoundAtomCueSheet()
	{
		UClass* Class = USoundAtomCueSheet::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyDspBusSnapshot", (Native)&USoundAtomCueSheet::execApplyDspBusSnapshot },
			{ "AttachDspBusSetting", (Native)&USoundAtomCueSheet::execAttachDspBusSetting },
			{ "DetachDspBusSetting", (Native)&USoundAtomCueSheet::execDetachDspBusSetting },
			{ "LoadAcb", (Native)&USoundAtomCueSheet::execLoadAcb },
			{ "ReleaseAcb", (Native)&USoundAtomCueSheet::execReleaseAcb },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_USoundAtomCueSheet_ApplyDspBusSnapshot()
	{
		struct SoundAtomCueSheet_eventApplyDspBusSnapshot_Parms
		{
			FString SnapshotName;
			int32 Milliseconds;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Milliseconds = { UE4CodeGen_Private::EPropertyClass::Int, "Milliseconds", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SoundAtomCueSheet_eventApplyDspBusSnapshot_Parms, Milliseconds), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnapshotName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_SnapshotName = { UE4CodeGen_Private::EPropertyClass::Str, "SnapshotName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SoundAtomCueSheet_eventApplyDspBusSnapshot_Parms, SnapshotName), METADATA_PARAMS(NewProp_SnapshotName_MetaData, ARRAY_COUNT(NewProp_SnapshotName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Milliseconds,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SnapshotName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCueSheet, "ApplyDspBusSnapshot", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(SoundAtomCueSheet_eventApplyDspBusSnapshot_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USoundAtomCueSheet_AttachDspBusSetting()
	{
		struct SoundAtomCueSheet_eventAttachDspBusSetting_Parms
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
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_SettingName = { UE4CodeGen_Private::EPropertyClass::Str, "SettingName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SoundAtomCueSheet_eventAttachDspBusSetting_Parms, SettingName), METADATA_PARAMS(NewProp_SettingName_MetaData, ARRAY_COUNT(NewProp_SettingName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SettingName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCueSheet, "AttachDspBusSetting", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(SoundAtomCueSheet_eventAttachDspBusSetting_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USoundAtomCueSheet_DetachDspBusSetting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCueSheet, "DetachDspBusSetting", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USoundAtomCueSheet_LoadAcb()
	{
		struct SoundAtomCueSheet_eventLoadAcb_Parms
		{
			FName AcbName;
			USoundAtomCueSheet* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SoundAtomCueSheet_eventLoadAcb_Parms, ReturnValue), Z_Construct_UClass_USoundAtomCueSheet_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_AcbName = { UE4CodeGen_Private::EPropertyClass::Name, "AcbName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SoundAtomCueSheet_eventLoadAcb_Parms, AcbName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AcbName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCueSheet, "LoadAcb", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(SoundAtomCueSheet_eventLoadAcb_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USoundAtomCueSheet_ReleaseAcb()
	{
		struct SoundAtomCueSheet_eventReleaseAcb_Parms
		{
			FName AcbName;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_AcbName = { UE4CodeGen_Private::EPropertyClass::Name, "AcbName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SoundAtomCueSheet_eventReleaseAcb_Parms, AcbName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AcbName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCueSheet, "ReleaseAcb", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(SoundAtomCueSheet_eventReleaseAcb_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USoundAtomCueSheet_NoRegister()
	{
		return USoundAtomCueSheet::StaticClass();
	}
	UClass* Z_Construct_UClass_USoundAtomCueSheet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_USoundAtomCueSheet_ApplyDspBusSnapshot, "ApplyDspBusSnapshot" }, // 53029684
				{ &Z_Construct_UFunction_USoundAtomCueSheet_AttachDspBusSetting, "AttachDspBusSetting" }, // 4088982734
				{ &Z_Construct_UFunction_USoundAtomCueSheet_DetachDspBusSetting, "DetachDspBusSetting" }, // 3237576888
				{ &Z_Construct_UFunction_USoundAtomCueSheet_LoadAcb, "LoadAcb" }, // 1810520784
				{ &Z_Construct_UFunction_USoundAtomCueSheet_ReleaseAcb, "ReleaseAcb" }, // 4064553263
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "SoundAtomCueSheet.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CueSheetName_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "SoundAtomCueSheet" },
				{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_CueSheetName = { UE4CodeGen_Private::EPropertyClass::Str, "CueSheetName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USoundAtomCueSheet, CueSheetName), METADATA_PARAMS(NewProp_CueSheetName_MetaData, ARRAY_COUNT(NewProp_CueSheetName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AwbDirectory_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "SoundAtomCueSheet" },
				{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AwbDirectory = { UE4CodeGen_Private::EPropertyClass::Struct, "AwbDirectory", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USoundAtomCueSheet, AwbDirectory), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(NewProp_AwbDirectory_MetaData, ARRAY_COUNT(NewProp_AwbDirectory_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideAwbDirectory_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "SoundAtomCueSheet" },
				{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
			};
#endif
			auto NewProp_bOverrideAwbDirectory_SetBit = [](void* Obj){ ((USoundAtomCueSheet*)Obj)->bOverrideAwbDirectory = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideAwbDirectory = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverrideAwbDirectory", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(USoundAtomCueSheet), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOverrideAwbDirectory_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOverrideAwbDirectory_MetaData, ARRAY_COUNT(NewProp_bOverrideAwbDirectory_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AcbFilePath_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "SoundAtomCueSheet" },
				{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_AcbFilePath = { UE4CodeGen_Private::EPropertyClass::Str, "AcbFilePath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USoundAtomCueSheet, AcbFilePath), METADATA_PARAMS(NewProp_AcbFilePath_MetaData, ARRAY_COUNT(NewProp_AcbFilePath_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Contains_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "SoundAtomCueSheet" },
				{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
			};
#endif
			auto NewProp_Contains_SetBit = [](void* Obj){ ((USoundAtomCueSheet*)Obj)->Contains = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Contains = { UE4CodeGen_Private::EPropertyClass::Bool, "Contains", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(USoundAtomCueSheet), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Contains_SetBit)>::SetBit, METADATA_PARAMS(NewProp_Contains_MetaData, ARRAY_COUNT(NewProp_Contains_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CueSheetName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AwbDirectory,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOverrideAwbDirectory,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AcbFilePath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Contains,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USoundAtomCueSheet>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USoundAtomCueSheet::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
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
	IMPLEMENT_CLASS(USoundAtomCueSheet, 1551052407);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundAtomCueSheet(Z_Construct_UClass_USoundAtomCueSheet, &USoundAtomCueSheet::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("USoundAtomCueSheet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundAtomCueSheet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
