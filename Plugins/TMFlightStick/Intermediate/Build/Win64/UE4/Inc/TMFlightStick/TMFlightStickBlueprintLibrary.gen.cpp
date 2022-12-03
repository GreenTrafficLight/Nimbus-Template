// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/TMFlightStickBlueprintLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTMFlightStickBlueprintLibrary() {}
// Cross Module References
	TMFLIGHTSTICK_API UClass* Z_Construct_UClass_UTMFlightStickBlueprintLibrary_NoRegister();
	TMFLIGHTSTICK_API UClass* Z_Construct_UClass_UTMFlightStickBlueprintLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_TMFlightStick();
	TMFLIGHTSTICK_API UFunction* Z_Construct_UFunction_UTMFlightStickBlueprintLibrary_IsEnableFlightStick();
	TMFLIGHTSTICK_API UFunction* Z_Construct_UFunction_UTMFlightStickBlueprintLibrary_SearchDevice();
// End Cross Module References
	void UTMFlightStickBlueprintLibrary::StaticRegisterNativesUTMFlightStickBlueprintLibrary()
	{
		UClass* Class = UTMFlightStickBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsEnableFlightStick", (Native)&UTMFlightStickBlueprintLibrary::execIsEnableFlightStick },
			{ "SearchDevice", (Native)&UTMFlightStickBlueprintLibrary::execSearchDevice },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UTMFlightStickBlueprintLibrary_IsEnableFlightStick()
	{
		struct TMFlightStickBlueprintLibrary_eventIsEnableFlightStick_Parms
		{
			bool ret;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ret_SetBit = [](void* Obj){ ((TMFlightStickBlueprintLibrary_eventIsEnableFlightStick_Parms*)Obj)->ret = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ret = { UE4CodeGen_Private::EPropertyClass::Bool, "ret", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TMFlightStickBlueprintLibrary_eventIsEnableFlightStick_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ret_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ret,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/TMFlightStickBlueprintLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTMFlightStickBlueprintLibrary, "IsEnableFlightStick", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(TMFlightStickBlueprintLibrary_eventIsEnableFlightStick_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTMFlightStickBlueprintLibrary_SearchDevice()
	{
		struct TMFlightStickBlueprintLibrary_eventSearchDevice_Parms
		{
			bool ret;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ret_SetBit = [](void* Obj){ ((TMFlightStickBlueprintLibrary_eventSearchDevice_Parms*)Obj)->ret = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ret = { UE4CodeGen_Private::EPropertyClass::Bool, "ret", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TMFlightStickBlueprintLibrary_eventSearchDevice_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ret_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ret,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/TMFlightStickBlueprintLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTMFlightStickBlueprintLibrary, "SearchDevice", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(TMFlightStickBlueprintLibrary_eventSearchDevice_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTMFlightStickBlueprintLibrary_NoRegister()
	{
		return UTMFlightStickBlueprintLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UTMFlightStickBlueprintLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_TMFlightStick,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UTMFlightStickBlueprintLibrary_IsEnableFlightStick, "IsEnableFlightStick" }, // 2807271280
				{ &Z_Construct_UFunction_UTMFlightStickBlueprintLibrary_SearchDevice, "SearchDevice" }, // 1910445556
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "TMFlightStickBlueprintLibrary.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/TMFlightStickBlueprintLibrary.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UTMFlightStickBlueprintLibrary>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UTMFlightStickBlueprintLibrary::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00000080u,
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
	IMPLEMENT_CLASS(UTMFlightStickBlueprintLibrary, 2510061586);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTMFlightStickBlueprintLibrary(Z_Construct_UClass_UTMFlightStickBlueprintLibrary, &UTMFlightStickBlueprintLibrary::StaticClass, TEXT("/Script/TMFlightStick"), TEXT("UTMFlightStickBlueprintLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTMFlightStickBlueprintLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
