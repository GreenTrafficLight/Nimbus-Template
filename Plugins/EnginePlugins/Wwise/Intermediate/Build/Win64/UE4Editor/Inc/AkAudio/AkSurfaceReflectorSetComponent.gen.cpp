// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AkSurfaceReflectorSetComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkSurfaceReflectorSetComponent() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkSurfaceReflectorSetComponent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkSurfaceReflectorSetComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_RemoveSurfaceReflectorSet();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SendSurfaceReflectorSet();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateSurfaceReflectorSet();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkPoly();
// End Cross Module References
	void UAkSurfaceReflectorSetComponent::StaticRegisterNativesUAkSurfaceReflectorSetComponent()
	{
		UClass* Class = UAkSurfaceReflectorSetComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RemoveSurfaceReflectorSet", (Native)&UAkSurfaceReflectorSetComponent::execRemoveSurfaceReflectorSet },
			{ "SendSurfaceReflectorSet", (Native)&UAkSurfaceReflectorSetComponent::execSendSurfaceReflectorSet },
			{ "UpdateSurfaceReflectorSet", (Native)&UAkSurfaceReflectorSetComponent::execUpdateSurfaceReflectorSet },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_RemoveSurfaceReflectorSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AkSurfaceReflectorSetComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkSurfaceReflectorSetComponent, "RemoveSurfaceReflectorSet", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SendSurfaceReflectorSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AkSurfaceReflectorSetComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkSurfaceReflectorSetComponent, "SendSurfaceReflectorSet", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateSurfaceReflectorSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AkSurfaceReflectorSetComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkSurfaceReflectorSetComponent, "UpdateSurfaceReflectorSet", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAkSurfaceReflectorSetComponent_NoRegister()
	{
		return UAkSurfaceReflectorSetComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UAkSurfaceReflectorSetComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_USceneComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_RemoveSurfaceReflectorSet, "RemoveSurfaceReflectorSet" }, // 75682396
				{ &Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SendSurfaceReflectorSet, "SendSurfaceReflectorSet" }, // 3349308049
				{ &Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateSurfaceReflectorSet, "UpdateSurfaceReflectorSet" }, // 1301852737
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "BlueprintType", "true" },
				{ "ClassGroupNames", "Custom" },
				{ "HideCategories", "Trigger PhysicsVolume" },
				{ "IncludePath", "AkSurfaceReflectorSetComponent.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/AkSurfaceReflectorSetComponent.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AcousticPolys_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkSurfaceReflectorSetComponent" },
				{ "ModuleRelativePath", "Public/AkSurfaceReflectorSetComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AcousticPolys = { UE4CodeGen_Private::EPropertyClass::Array, "AcousticPolys", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAkSurfaceReflectorSetComponent, AcousticPolys), METADATA_PARAMS(NewProp_AcousticPolys_MetaData, ARRAY_COUNT(NewProp_AcousticPolys_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AcousticPolys_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "AcousticPolys", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FAkPoly, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableSurfaceReflectors_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkSurfaceReflectorSetComponent" },
				{ "ModuleRelativePath", "Public/AkSurfaceReflectorSetComponent.h" },
			};
#endif
			auto NewProp_bEnableSurfaceReflectors_SetBit = [](void* Obj){ ((UAkSurfaceReflectorSetComponent*)Obj)->bEnableSurfaceReflectors = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableSurfaceReflectors = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableSurfaceReflectors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UAkSurfaceReflectorSetComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableSurfaceReflectors_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableSurfaceReflectors_MetaData, ARRAY_COUNT(NewProp_bEnableSurfaceReflectors_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AcousticPolys,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AcousticPolys_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableSurfaceReflectors,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAkSurfaceReflectorSetComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAkSurfaceReflectorSetComponent::StaticClass,
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
	IMPLEMENT_CLASS(UAkSurfaceReflectorSetComponent, 388813695);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkSurfaceReflectorSetComponent(Z_Construct_UClass_UAkSurfaceReflectorSetComponent, &UAkSurfaceReflectorSetComponent::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkSurfaceReflectorSetComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkSurfaceReflectorSetComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
