// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/CriWareFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCriWareFunctionLibrary() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UCriWareFunctionLibrary_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UCriWareFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UCriWareFunctionLibrary_SetGameVariableByName();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UCriWareFunctionLibrary_SetGlobalLabelToSelectorByName();
// End Cross Module References
	void UCriWareFunctionLibrary::StaticRegisterNativesUCriWareFunctionLibrary()
	{
		UClass* Class = UCriWareFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetGameVariableByName", (Native)&UCriWareFunctionLibrary::execSetGameVariableByName },
			{ "SetGlobalLabelToSelectorByName", (Native)&UCriWareFunctionLibrary::execSetGlobalLabelToSelectorByName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UCriWareFunctionLibrary_SetGameVariableByName()
	{
		struct CriWareFunctionLibrary_eventSetGameVariableByName_Parms
		{
			FString GameVariableName;
			float Value;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Float, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CriWareFunctionLibrary_eventSetGameVariableByName_Parms, Value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameVariableName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameVariableName = { UE4CodeGen_Private::EPropertyClass::Str, "GameVariableName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CriWareFunctionLibrary_eventSetGameVariableByName_Parms, GameVariableName), METADATA_PARAMS(NewProp_GameVariableName_MetaData, ARRAY_COUNT(NewProp_GameVariableName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GameVariableName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/CriWareFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCriWareFunctionLibrary, "SetGameVariableByName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(CriWareFunctionLibrary_eventSetGameVariableByName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCriWareFunctionLibrary_SetGlobalLabelToSelectorByName()
	{
		struct CriWareFunctionLibrary_eventSetGlobalLabelToSelectorByName_Parms
		{
			FString SelectorName;
			FString LabelName;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LabelName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_LabelName = { UE4CodeGen_Private::EPropertyClass::Str, "LabelName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CriWareFunctionLibrary_eventSetGlobalLabelToSelectorByName_Parms, LabelName), METADATA_PARAMS(NewProp_LabelName_MetaData, ARRAY_COUNT(NewProp_LabelName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectorName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_SelectorName = { UE4CodeGen_Private::EPropertyClass::Str, "SelectorName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CriWareFunctionLibrary_eventSetGlobalLabelToSelectorByName_Parms, SelectorName), METADATA_PARAMS(NewProp_SelectorName_MetaData, ARRAY_COUNT(NewProp_SelectorName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LabelName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SelectorName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/CriWareFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCriWareFunctionLibrary, "SetGlobalLabelToSelectorByName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(CriWareFunctionLibrary_eventSetGlobalLabelToSelectorByName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCriWareFunctionLibrary_NoRegister()
	{
		return UCriWareFunctionLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UCriWareFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UCriWareFunctionLibrary_SetGameVariableByName, "SetGameVariableByName" }, // 3780364466
				{ &Z_Construct_UFunction_UCriWareFunctionLibrary_SetGlobalLabelToSelectorByName, "SetGlobalLabelToSelectorByName" }, // 2050900270
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "CriWareFunctionLibrary.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/CriWareFunctionLibrary.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UCriWareFunctionLibrary>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UCriWareFunctionLibrary::StaticClass,
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
	IMPLEMENT_CLASS(UCriWareFunctionLibrary, 2270665693);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCriWareFunctionLibrary(Z_Construct_UClass_UCriWareFunctionLibrary, &UCriWareFunctionLibrary::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UCriWareFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCriWareFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
