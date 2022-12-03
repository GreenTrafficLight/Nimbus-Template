// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/FileManaMovie.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFileManaMovie() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UFileManaMovie_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UFileManaMovie();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaMovie();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UFileManaMovie_SetFilePath();
// End Cross Module References
	void UFileManaMovie::StaticRegisterNativesUFileManaMovie()
	{
		UClass* Class = UFileManaMovie::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetFilePath", (Native)&UFileManaMovie::execSetFilePath },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UFileManaMovie_SetFilePath()
	{
		struct FileManaMovie_eventSetFilePath_Parms
		{
			FString Path;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path = { UE4CodeGen_Private::EPropertyClass::Str, "Path", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FileManaMovie_eventSetFilePath_Parms, Path), METADATA_PARAMS(NewProp_Path_MetaData, ARRAY_COUNT(NewProp_Path_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Path,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/FileManaMovie.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileManaMovie, "SetFilePath", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FileManaMovie_eventSetFilePath_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFileManaMovie_NoRegister()
	{
		return UFileManaMovie::StaticClass();
	}
	UClass* Z_Construct_UClass_UFileManaMovie()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UManaMovie,
				(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UFileManaMovie_SetFilePath, "SetFilePath" }, // 867698239
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "FileManaMovie.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/FileManaMovie.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "FileManaMovie" },
				{ "ModuleRelativePath", "Public/FileManaMovie.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_FilePath = { UE4CodeGen_Private::EPropertyClass::Str, "FilePath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020090000000005, 1, nullptr, STRUCT_OFFSET(UFileManaMovie, FilePath), METADATA_PARAMS(NewProp_FilePath_MetaData, ARRAY_COUNT(NewProp_FilePath_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPrecacheFile_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "FileManaMovie" },
				{ "ModuleRelativePath", "Public/FileManaMovie.h" },
			};
#endif
			auto NewProp_bPrecacheFile_SetBit = [](void* Obj){ ((UFileManaMovie*)Obj)->bPrecacheFile = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPrecacheFile = { UE4CodeGen_Private::EPropertyClass::Bool, "bPrecacheFile", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UFileManaMovie), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bPrecacheFile_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bPrecacheFile_MetaData, ARRAY_COUNT(NewProp_bPrecacheFile_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FilePath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bPrecacheFile,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UFileManaMovie>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UFileManaMovie::StaticClass,
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
	IMPLEMENT_CLASS(UFileManaMovie, 408529443);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFileManaMovie(Z_Construct_UClass_UFileManaMovie, &UFileManaMovie::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UFileManaMovie"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFileManaMovie);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
