// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/CloudSpheroid.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCloudSpheroid() {}
// Cross Module References
	TRUESKYPLUGIN_API UClass* Z_Construct_UClass_UCloudSpheroid_NoRegister();
	TRUESKYPLUGIN_API UClass* Z_Construct_UClass_UCloudSpheroid();
	ENGINE_API UClass* Z_Construct_UClass_UShapeComponent();
	UPackage* Z_Construct_UPackage__Script_TrueSkyPlugin();
	TRUESKYPLUGIN_API UFunction* Z_Construct_UFunction_UCloudSpheroid_GetScaledSpheroidRadii();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	TRUESKYPLUGIN_API UFunction* Z_Construct_UFunction_UCloudSpheroid_GetShapeScale();
	TRUESKYPLUGIN_API UFunction* Z_Construct_UFunction_UCloudSpheroid_GetUnscaledSpheroidRadii();
	TRUESKYPLUGIN_API UFunction* Z_Construct_UFunction_UCloudSpheroid_SetSpheroidRadii();
// End Cross Module References
	void UCloudSpheroid::StaticRegisterNativesUCloudSpheroid()
	{
		UClass* Class = UCloudSpheroid::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetScaledSpheroidRadii", (Native)&UCloudSpheroid::execGetScaledSpheroidRadii },
			{ "GetShapeScale", (Native)&UCloudSpheroid::execGetShapeScale },
			{ "GetUnscaledSpheroidRadii", (Native)&UCloudSpheroid::execGetUnscaledSpheroidRadii },
			{ "SetSpheroidRadii", (Native)&UCloudSpheroid::execSetSpheroidRadii },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UCloudSpheroid_GetScaledSpheroidRadii()
	{
		struct CloudSpheroid_eventGetScaledSpheroidRadii_Parms
		{
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CloudSpheroid_eventGetScaledSpheroidRadii_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/CloudSpheroid.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCloudSpheroid, "GetScaledSpheroidRadii", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(CloudSpheroid_eventGetScaledSpheroidRadii_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCloudSpheroid_GetShapeScale()
	{
		struct CloudSpheroid_eventGetShapeScale_Parms
		{
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CloudSpheroid_eventGetShapeScale_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/CloudSpheroid.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCloudSpheroid, "GetShapeScale", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(CloudSpheroid_eventGetShapeScale_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCloudSpheroid_GetUnscaledSpheroidRadii()
	{
		struct CloudSpheroid_eventGetUnscaledSpheroidRadii_Parms
		{
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CloudSpheroid_eventGetUnscaledSpheroidRadii_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/CloudSpheroid.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCloudSpheroid, "GetUnscaledSpheroidRadii", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(CloudSpheroid_eventGetUnscaledSpheroidRadii_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCloudSpheroid_SetSpheroidRadii()
	{
		struct CloudSpheroid_eventSetSpheroidRadii_Parms
		{
			FVector InSpheroidRadii;
			bool bUpdateOverlaps;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bUpdateOverlaps_SetBit = [](void* Obj){ ((CloudSpheroid_eventSetSpheroidRadii_Parms*)Obj)->bUpdateOverlaps = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateOverlaps = { UE4CodeGen_Private::EPropertyClass::Bool, "bUpdateOverlaps", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CloudSpheroid_eventSetSpheroidRadii_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUpdateOverlaps_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InSpheroidRadii = { UE4CodeGen_Private::EPropertyClass::Struct, "InSpheroidRadii", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CloudSpheroid_eventSetSpheroidRadii_Parms, InSpheroidRadii), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUpdateOverlaps,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InSpheroidRadii,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/CloudSpheroid.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCloudSpheroid, "SetSpheroidRadii", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(CloudSpheroid_eventSetSpheroidRadii_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCloudSpheroid_NoRegister()
	{
		return UCloudSpheroid::StaticClass();
	}
	UClass* Z_Construct_UClass_UCloudSpheroid()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UShapeComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_TrueSkyPlugin,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UCloudSpheroid_GetScaledSpheroidRadii, "GetScaledSpheroidRadii" }, // 3341573870
				{ &Z_Construct_UFunction_UCloudSpheroid_GetShapeScale, "GetShapeScale" }, // 3111988638
				{ &Z_Construct_UFunction_UCloudSpheroid_GetUnscaledSpheroidRadii, "GetUnscaledSpheroidRadii" }, // 1211984890
				{ &Z_Construct_UFunction_UCloudSpheroid_SetSpheroidRadii, "SetSpheroidRadii" }, // 3054962846
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "BlueprintType", "true" },
				{ "ClassGroupNames", "Custom" },
				{ "HideCategories", "Object LOD Lighting TextureStreaming Activation Components|Activation Trigger" },
				{ "IncludePath", "CloudSpheroid.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/CloudSpheroid.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpheroidRadii_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "CloudSpheroid" },
				{ "ModuleRelativePath", "Public/CloudSpheroid.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpheroidRadii = { UE4CodeGen_Private::EPropertyClass::Struct, "SpheroidRadii", RF_Public|RF_Transient|RF_MarkAsNative, 0x002008000000000d, 1, nullptr, STRUCT_OFFSET(UCloudSpheroid, SpheroidRadii), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_SpheroidRadii_MetaData, ARRAY_COUNT(NewProp_SpheroidRadii_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpheroidRadii,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UCloudSpheroid>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UCloudSpheroid::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B01080u,
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
	IMPLEMENT_CLASS(UCloudSpheroid, 4215725447);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCloudSpheroid(Z_Construct_UClass_UCloudSpheroid, &UCloudSpheroid::StaticClass, TEXT("/Script/TrueSkyPlugin"), TEXT("UCloudSpheroid"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCloudSpheroid);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
