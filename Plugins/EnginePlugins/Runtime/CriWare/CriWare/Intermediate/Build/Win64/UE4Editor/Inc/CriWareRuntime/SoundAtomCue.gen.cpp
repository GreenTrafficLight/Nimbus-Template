// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SoundAtomCue.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundAtomCue() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCue_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCue();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_USoundAtomCue_GetLength();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_USoundAtomCue_GetUserData();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCueSheet_NoRegister();
// End Cross Module References
	void USoundAtomCue::StaticRegisterNativesUSoundAtomCue()
	{
		UClass* Class = USoundAtomCue::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLength", (Native)&USoundAtomCue::execGetLength },
			{ "GetUserData", (Native)&USoundAtomCue::execGetUserData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_USoundAtomCue_GetLength()
	{
		struct SoundAtomCue_eventGetLength_Parms
		{
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SoundAtomCue_eventGetLength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCue, "GetLength", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SoundAtomCue_eventGetLength_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USoundAtomCue_GetUserData()
	{
		struct SoundAtomCue_eventGetUserData_Parms
		{
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SoundAtomCue_eventGetUserData_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCue, "GetUserData", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SoundAtomCue_eventGetUserData_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USoundAtomCue_NoRegister()
	{
		return USoundAtomCue::StaticClass();
	}
	UClass* Z_Construct_UClass_USoundAtomCue()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_USoundAtomCue_GetLength, "GetLength" }, // 142729435
				{ &Z_Construct_UFunction_USoundAtomCue_GetUserData, "GetUserData" }, // 1165675669
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "SoundAtomCue.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CueName_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "SoundAtomCue" },
				{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_CueName = { UE4CodeGen_Private::EPropertyClass::Str, "CueName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USoundAtomCue, CueName), METADATA_PARAMS(NewProp_CueName_MetaData, ARRAY_COUNT(NewProp_CueName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CueSheet_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "SoundAtomCue" },
				{ "ModuleRelativePath", "Public/SoundAtomCue.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CueSheet = { UE4CodeGen_Private::EPropertyClass::Object, "CueSheet", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USoundAtomCue, CueSheet), Z_Construct_UClass_USoundAtomCueSheet_NoRegister, METADATA_PARAMS(NewProp_CueSheet_MetaData, ARRAY_COUNT(NewProp_CueSheet_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CueName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CueSheet,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USoundAtomCue>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USoundAtomCue::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00101080u,
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
	IMPLEMENT_CLASS(USoundAtomCue, 3433148814);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundAtomCue(Z_Construct_UClass_USoundAtomCue, &USoundAtomCue::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("USoundAtomCue"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundAtomCue);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
