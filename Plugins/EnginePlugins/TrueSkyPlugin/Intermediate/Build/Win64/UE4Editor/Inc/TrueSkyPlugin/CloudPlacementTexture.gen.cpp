// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/CloudPlacementTexture.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCloudPlacementTexture() {}
// Cross Module References
	TRUESKYPLUGIN_API UClass* Z_Construct_UClass_UCloudPlacementTexture_NoRegister();
	TRUESKYPLUGIN_API UClass* Z_Construct_UClass_UCloudPlacementTexture();
	ENGINE_API UClass* Z_Construct_UClass_UShapeComponent();
	UPackage* Z_Construct_UPackage__Script_TrueSkyPlugin();
	TRUESKYPLUGIN_API UFunction* Z_Construct_UFunction_UCloudPlacementTexture_GetScaledBoxExtent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	TRUESKYPLUGIN_API UFunction* Z_Construct_UFunction_UCloudPlacementTexture_GetUnscaledBoxExtent();
	TRUESKYPLUGIN_API UFunction* Z_Construct_UFunction_UCloudPlacementTexture_SetBoxExtent();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	void UCloudPlacementTexture::StaticRegisterNativesUCloudPlacementTexture()
	{
		UClass* Class = UCloudPlacementTexture::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetScaledBoxExtent", (Native)&UCloudPlacementTexture::execGetScaledBoxExtent },
			{ "GetUnscaledBoxExtent", (Native)&UCloudPlacementTexture::execGetUnscaledBoxExtent },
			{ "SetBoxExtent", (Native)&UCloudPlacementTexture::execSetBoxExtent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UCloudPlacementTexture_GetScaledBoxExtent()
	{
		struct CloudPlacementTexture_eventGetScaledBoxExtent_Parms
		{
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CloudPlacementTexture_eventGetScaledBoxExtent_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/CloudPlacementTexture.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCloudPlacementTexture, "GetScaledBoxExtent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(CloudPlacementTexture_eventGetScaledBoxExtent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCloudPlacementTexture_GetUnscaledBoxExtent()
	{
		struct CloudPlacementTexture_eventGetUnscaledBoxExtent_Parms
		{
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CloudPlacementTexture_eventGetUnscaledBoxExtent_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/CloudPlacementTexture.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCloudPlacementTexture, "GetUnscaledBoxExtent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(CloudPlacementTexture_eventGetUnscaledBoxExtent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCloudPlacementTexture_SetBoxExtent()
	{
		struct CloudPlacementTexture_eventSetBoxExtent_Parms
		{
			FVector InBoxExtent;
			bool bUpdateOverlaps;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bUpdateOverlaps_SetBit = [](void* Obj){ ((CloudPlacementTexture_eventSetBoxExtent_Parms*)Obj)->bUpdateOverlaps = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateOverlaps = { UE4CodeGen_Private::EPropertyClass::Bool, "bUpdateOverlaps", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CloudPlacementTexture_eventSetBoxExtent_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUpdateOverlaps_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InBoxExtent = { UE4CodeGen_Private::EPropertyClass::Struct, "InBoxExtent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CloudPlacementTexture_eventSetBoxExtent_Parms, InBoxExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUpdateOverlaps,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InBoxExtent,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/CloudPlacementTexture.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCloudPlacementTexture, "SetBoxExtent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(CloudPlacementTexture_eventSetBoxExtent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCloudPlacementTexture_NoRegister()
	{
		return UCloudPlacementTexture::StaticClass();
	}
	UClass* Z_Construct_UClass_UCloudPlacementTexture()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UShapeComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_TrueSkyPlugin,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UCloudPlacementTexture_GetScaledBoxExtent, "GetScaledBoxExtent" }, // 3992204908
				{ &Z_Construct_UFunction_UCloudPlacementTexture_GetUnscaledBoxExtent, "GetUnscaledBoxExtent" }, // 319271864
				{ &Z_Construct_UFunction_UCloudPlacementTexture_SetBoxExtent, "SetBoxExtent" }, // 2847614847
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "BlueprintType", "true" },
				{ "ClassGroupNames", "Custom" },
				{ "HideCategories", "Object LOD Lighting TextureStreaming Activation Components|Activation Trigger" },
				{ "IncludePath", "CloudPlacementTexture.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/CloudPlacementTexture.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxExtent_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "CloudPlacementTexture" },
				{ "ModuleRelativePath", "Public/CloudPlacementTexture.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoxExtent = { UE4CodeGen_Private::EPropertyClass::Struct, "BoxExtent", RF_Public|RF_Transient|RF_MarkAsNative, 0x002008000000000d, 1, nullptr, STRUCT_OFFSET(UCloudPlacementTexture, BoxExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_BoxExtent_MetaData, ARRAY_COUNT(NewProp_BoxExtent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CloudMapTexture_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "CloudPlacementTexture" },
				{ "ModuleRelativePath", "Public/CloudPlacementTexture.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CloudMapTexture = { UE4CodeGen_Private::EPropertyClass::Object, "CloudMapTexture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCloudPlacementTexture, CloudMapTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(NewProp_CloudMapTexture_MetaData, ARRAY_COUNT(NewProp_CloudMapTexture_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoxExtent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CloudMapTexture,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UCloudPlacementTexture>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UCloudPlacementTexture::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00A01080u,
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
	IMPLEMENT_CLASS(UCloudPlacementTexture, 1608448995);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCloudPlacementTexture(Z_Construct_UClass_UCloudPlacementTexture, &UCloudPlacementTexture::StaticClass, TEXT("/Script/TrueSkyPlugin"), TEXT("UCloudPlacementTexture"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCloudPlacementTexture);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
