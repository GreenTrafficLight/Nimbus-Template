// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AtomCategory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomCategory() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomCategory_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomCategory();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UAtomCategory_GetVolumeByName();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UAtomCategory_IsPausedByName();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UAtomCategory_PauseByName();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UAtomCategory_SetAisacControlByName();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UAtomCategory_SetVolumeByName();
// End Cross Module References
	void UAtomCategory::StaticRegisterNativesUAtomCategory()
	{
		UClass* Class = UAtomCategory::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetVolumeByName", (Native)&UAtomCategory::execGetVolumeByName },
			{ "IsPausedByName", (Native)&UAtomCategory::execIsPausedByName },
			{ "PauseByName", (Native)&UAtomCategory::execPauseByName },
			{ "SetAisacControlByName", (Native)&UAtomCategory::execSetAisacControlByName },
			{ "SetVolumeByName", (Native)&UAtomCategory::execSetVolumeByName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UAtomCategory_GetVolumeByName()
	{
		struct AtomCategory_eventGetVolumeByName_Parms
		{
			FString CategoryName;
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AtomCategory_eventGetVolumeByName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_CategoryName = { UE4CodeGen_Private::EPropertyClass::Str, "CategoryName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtomCategory_eventGetVolumeByName_Parms, CategoryName), METADATA_PARAMS(NewProp_CategoryName_MetaData, ARRAY_COUNT(NewProp_CategoryName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CategoryName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AtomCategory.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomCategory, "GetVolumeByName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(AtomCategory_eventGetVolumeByName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAtomCategory_IsPausedByName()
	{
		struct AtomCategory_eventIsPausedByName_Parms
		{
			FString CategoryName;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((AtomCategory_eventIsPausedByName_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AtomCategory_eventIsPausedByName_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_CategoryName = { UE4CodeGen_Private::EPropertyClass::Str, "CategoryName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtomCategory_eventIsPausedByName_Parms, CategoryName), METADATA_PARAMS(NewProp_CategoryName_MetaData, ARRAY_COUNT(NewProp_CategoryName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CategoryName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AtomCategory.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomCategory, "IsPausedByName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(AtomCategory_eventIsPausedByName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAtomCategory_PauseByName()
	{
		struct AtomCategory_eventPauseByName_Parms
		{
			FString CategoryName;
			bool bPause;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bPause_SetBit = [](void* Obj){ ((AtomCategory_eventPauseByName_Parms*)Obj)->bPause = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPause = { UE4CodeGen_Private::EPropertyClass::Bool, "bPause", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AtomCategory_eventPauseByName_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bPause_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_CategoryName = { UE4CodeGen_Private::EPropertyClass::Str, "CategoryName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtomCategory_eventPauseByName_Parms, CategoryName), METADATA_PARAMS(NewProp_CategoryName_MetaData, ARRAY_COUNT(NewProp_CategoryName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bPause,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CategoryName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AtomCategory.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomCategory, "PauseByName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(AtomCategory_eventPauseByName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAtomCategory_SetAisacControlByName()
	{
		struct AtomCategory_eventSetAisacControlByName_Parms
		{
			FString CategoryName;
			FString AisacName;
			float Value;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Float, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtomCategory_eventSetAisacControlByName_Parms, Value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AisacName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_AisacName = { UE4CodeGen_Private::EPropertyClass::Str, "AisacName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtomCategory_eventSetAisacControlByName_Parms, AisacName), METADATA_PARAMS(NewProp_AisacName_MetaData, ARRAY_COUNT(NewProp_AisacName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_CategoryName = { UE4CodeGen_Private::EPropertyClass::Str, "CategoryName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtomCategory_eventSetAisacControlByName_Parms, CategoryName), METADATA_PARAMS(NewProp_CategoryName_MetaData, ARRAY_COUNT(NewProp_CategoryName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AisacName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CategoryName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AtomCategory.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomCategory, "SetAisacControlByName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(AtomCategory_eventSetAisacControlByName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAtomCategory_SetVolumeByName()
	{
		struct AtomCategory_eventSetVolumeByName_Parms
		{
			FString CategoryName;
			float Volume;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Volume = { UE4CodeGen_Private::EPropertyClass::Float, "Volume", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtomCategory_eventSetVolumeByName_Parms, Volume), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_CategoryName = { UE4CodeGen_Private::EPropertyClass::Str, "CategoryName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtomCategory_eventSetVolumeByName_Parms, CategoryName), METADATA_PARAMS(NewProp_CategoryName_MetaData, ARRAY_COUNT(NewProp_CategoryName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Volume,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CategoryName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AtomCategory.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomCategory, "SetVolumeByName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(AtomCategory_eventSetVolumeByName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAtomCategory_NoRegister()
	{
		return UAtomCategory::StaticClass();
	}
	UClass* Z_Construct_UClass_UAtomCategory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UAtomCategory_GetVolumeByName, "GetVolumeByName" }, // 1246199722
				{ &Z_Construct_UFunction_UAtomCategory_IsPausedByName, "IsPausedByName" }, // 3650323199
				{ &Z_Construct_UFunction_UAtomCategory_PauseByName, "PauseByName" }, // 1194010324
				{ &Z_Construct_UFunction_UAtomCategory_SetAisacControlByName, "SetAisacControlByName" }, // 3286402641
				{ &Z_Construct_UFunction_UAtomCategory_SetVolumeByName, "SetVolumeByName" }, // 26462007
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "AtomCategory.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/AtomCategory.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAtomCategory>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAtomCategory::StaticClass,
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
	IMPLEMENT_CLASS(UAtomCategory, 1342213367);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAtomCategory(Z_Construct_UClass_UAtomCategory, &UAtomCategory::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UAtomCategory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomCategory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
