// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/CriFsLoaderComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCriFsLoaderComponent() {}
// Cross Module References
	CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_UCriFsLoaderComponent_OnLoadCompleted__DelegateSignature();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UCriFsLoaderComponent();
	CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_UCriFsLoaderComponent_OnLoadError__DelegateSignature();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UCriFsLoaderComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UCriFsLoaderComponent_GetDataArray();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UCriFsLoaderComponent_GetStatus();
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_ECriFsLoaderStatus();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UCriFsLoaderComponent_Load();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_UCriFsLoaderComponent_OnLoadCompleted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/CriFsLoaderComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCriFsLoaderComponent, "OnLoadCompleted__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00120000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_UCriFsLoaderComponent_OnLoadError__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/CriFsLoaderComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCriFsLoaderComponent, "OnLoadError__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00120000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	void UCriFsLoaderComponent::StaticRegisterNativesUCriFsLoaderComponent()
	{
		UClass* Class = UCriFsLoaderComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDataArray", (Native)&UCriFsLoaderComponent::execGetDataArray },
			{ "GetStatus", (Native)&UCriFsLoaderComponent::execGetStatus },
			{ "Load", (Native)&UCriFsLoaderComponent::execLoad },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UCriFsLoaderComponent_GetDataArray()
	{
		struct CriFsLoaderComponent_eventGetDataArray_Parms
		{
			TArray<uint8> ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CriFsLoaderComponent_eventGetDataArray_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/CriFsLoaderComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCriFsLoaderComponent, "GetDataArray", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CriFsLoaderComponent_eventGetDataArray_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCriFsLoaderComponent_GetStatus()
	{
		struct CriFsLoaderComponent_eventGetStatus_Parms
		{
			ECriFsLoaderStatus ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Enum, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CriFsLoaderComponent_eventGetStatus_Parms, ReturnValue), Z_Construct_UEnum_CriWareRuntime_ECriFsLoaderStatus, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/CriFsLoaderComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCriFsLoaderComponent, "GetStatus", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CriFsLoaderComponent_eventGetStatus_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCriFsLoaderComponent_Load()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/CriFsLoaderComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCriFsLoaderComponent, "Load", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCriFsLoaderComponent_NoRegister()
	{
		return UCriFsLoaderComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UCriFsLoaderComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_USceneComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UCriFsLoaderComponent_GetDataArray, "GetDataArray" }, // 680599163
				{ &Z_Construct_UFunction_UCriFsLoaderComponent_GetStatus, "GetStatus" }, // 1538014830
				{ &Z_Construct_UFunction_UCriFsLoaderComponent_Load, "Load" }, // 87482953
				{ &Z_Construct_UDelegateFunction_UCriFsLoaderComponent_OnLoadCompleted__DelegateSignature, "OnLoadCompleted__DelegateSignature" }, // 253756065
				{ &Z_Construct_UDelegateFunction_UCriFsLoaderComponent_OnLoadError__DelegateSignature, "OnLoadError__DelegateSignature" }, // 1632579041
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "BlueprintType", "true" },
				{ "ClassGroupNames", "Custom" },
				{ "HideCategories", "Trigger PhysicsVolume" },
				{ "IncludePath", "CriFsLoaderComponent.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/CriFsLoaderComponent.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnLoadError_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "CriFsLoaderComponent" },
				{ "ModuleRelativePath", "Public/CriFsLoaderComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnLoadError = { UE4CodeGen_Private::EPropertyClass::Delegate, "OnLoadError", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080005, 1, nullptr, STRUCT_OFFSET(UCriFsLoaderComponent, OnLoadError), Z_Construct_UDelegateFunction_UCriFsLoaderComponent_OnLoadError__DelegateSignature, METADATA_PARAMS(NewProp_OnLoadError_MetaData, ARRAY_COUNT(NewProp_OnLoadError_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnLoadCompleted_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "CriFsLoaderComponent" },
				{ "ModuleRelativePath", "Public/CriFsLoaderComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnLoadCompleted = { UE4CodeGen_Private::EPropertyClass::Delegate, "OnLoadCompleted", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080005, 1, nullptr, STRUCT_OFFSET(UCriFsLoaderComponent, OnLoadCompleted), Z_Construct_UDelegateFunction_UCriFsLoaderComponent_OnLoadCompleted__DelegateSignature, METADATA_PARAMS(NewProp_OnLoadCompleted_MetaData, ARRAY_COUNT(NewProp_OnLoadCompleted_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "CriFsLoaderComponent" },
				{ "ModuleRelativePath", "Public/CriFsLoaderComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_FilePath = { UE4CodeGen_Private::EPropertyClass::Str, "FilePath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCriFsLoaderComponent, FilePath), METADATA_PARAMS(NewProp_FilePath_MetaData, ARRAY_COUNT(NewProp_FilePath_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnLoadError,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnLoadCompleted,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FilePath,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UCriFsLoaderComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UCriFsLoaderComponent::StaticClass,
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
	IMPLEMENT_CLASS(UCriFsLoaderComponent, 3470198224);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCriFsLoaderComponent(Z_Construct_UClass_UCriFsLoaderComponent, &UCriFsLoaderComponent::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UCriFsLoaderComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCriFsLoaderComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
