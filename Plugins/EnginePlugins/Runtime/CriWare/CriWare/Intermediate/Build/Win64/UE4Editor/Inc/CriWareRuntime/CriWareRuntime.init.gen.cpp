// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCriWareRuntime_init() {}
	CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_UAtomComponent_OnAudioFinished__DelegateSignature();
	CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_UCriFsLoaderComponent_OnLoadError__DelegateSignature();
	CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_UCriFsLoaderComponent_OnLoadCompleted__DelegateSignature();
	CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_UManaComponent_OnSubtitleChanged__DelegateSignature();
	CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_UManaComponent_OnStatusChanged__DelegateSignature();
	CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_UManaComponent_OnRequestData__DelegateSignature();
	CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_UManaComponent_OnEventPoint__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UAtomComponent_OnAudioFinished__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UCriFsLoaderComponent_OnLoadError__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UCriFsLoaderComponent_OnLoadCompleted__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UManaComponent_OnSubtitleChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UManaComponent_OnStatusChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UManaComponent_OnRequestData__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UManaComponent_OnEventPoint__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/CriWareRuntime",
				PKG_CompiledIn | 0x00000000,
				0x3D58D9A7,
				0x8232F6EC,
				SingletonFuncArray, ARRAY_COUNT(SingletonFuncArray),
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
