// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/ManaTexture.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManaTexture() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaTexture_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaTexture();
	ENGINE_API UClass* Z_Construct_UClass_UTexture();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UManaTexture_SetMovieSource();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaSource_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaComponentTexture_NoRegister();
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EPixelFormat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureAddress();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FManaEventPointInfo();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FManaVideoTrackInfo();
// End Cross Module References
	void UManaTexture::StaticRegisterNativesUManaTexture()
	{
		UClass* Class = UManaTexture::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetMovieSource", (Native)&UManaTexture::execSetMovieSource },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UManaTexture_SetMovieSource()
	{
		struct ManaTexture_eventSetMovieSource_Parms
		{
			UManaSource* InSource;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InSource = { UE4CodeGen_Private::EPropertyClass::Object, "InSource", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ManaTexture_eventSetMovieSource_Parms, InSource), Z_Construct_UClass_UManaSource_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InSource,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ManaTexture.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaTexture, "SetMovieSource", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ManaTexture_eventSetMovieSource_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UManaTexture_NoRegister()
	{
		return UManaTexture::StaticClass();
	}
	UClass* Z_Construct_UClass_UManaTexture()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UTexture,
				(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UManaTexture_SetMovieSource, "SetMovieSource" }, // 2665832342
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "ManaTexture.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/ManaTexture.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentTextures_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "ManaTexture" },
				{ "ModuleRelativePath", "Public/ManaTexture.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ComponentTextures = { UE4CodeGen_Private::EPropertyClass::Array, "ComponentTextures", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200c0000000005, 1, nullptr, STRUCT_OFFSET(UManaTexture, ComponentTextures), METADATA_PARAMS(NewProp_ComponentTextures_MetaData, ARRAY_COUNT(NewProp_ComponentTextures_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ComponentTextures_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ComponentTextures", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UManaComponentTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideFormat_MetaData[] = {
				{ "Category", "ManaTexture" },
				{ "ModuleRelativePath", "Public/ManaTexture.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_OverrideFormat = { UE4CodeGen_Private::EPropertyClass::Byte, "OverrideFormat", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UManaTexture, OverrideFormat), Z_Construct_UEnum_CoreUObject_EPixelFormat, METADATA_PARAMS(NewProp_OverrideFormat_MetaData, ARRAY_COUNT(NewProp_OverrideFormat_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClearColor_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "ManaTexture" },
				{ "ModuleRelativePath", "Public/ManaTexture.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClearColor = { UE4CodeGen_Private::EPropertyClass::Struct, "ClearColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010050000000005, 1, nullptr, STRUCT_OFFSET(UManaTexture, ClearColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(NewProp_ClearColor_MetaData, ARRAY_COUNT(NewProp_ClearColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddressY_MetaData[] = {
				{ "Category", "ManaTexture" },
				{ "ModuleRelativePath", "Public/ManaTexture.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_AddressY = { UE4CodeGen_Private::EPropertyClass::Byte, "AddressY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010050000000001, 1, nullptr, STRUCT_OFFSET(UManaTexture, AddressY), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(NewProp_AddressY_MetaData, ARRAY_COUNT(NewProp_AddressY_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddressX_MetaData[] = {
				{ "Category", "ManaTexture" },
				{ "ModuleRelativePath", "Public/ManaTexture.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_AddressX = { UE4CodeGen_Private::EPropertyClass::Byte, "AddressX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010050000000001, 1, nullptr, STRUCT_OFFSET(UManaTexture, AddressX), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(NewProp_AddressX_MetaData, ARRAY_COUNT(NewProp_AddressX_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHDR_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "ManaTexture" },
				{ "ModuleRelativePath", "Public/ManaTexture.h" },
			};
#endif
			auto NewProp_bHDR_SetBit = [](void* Obj){ ((UManaTexture*)Obj)->bHDR = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHDR = { UE4CodeGen_Private::EPropertyClass::Bool, "bHDR", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010050000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UManaTexture), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bHDR_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bHDR_MetaData, ARRAY_COUNT(NewProp_bHDR_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetGamma_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "ManaTexture" },
				{ "ModuleRelativePath", "Public/ManaTexture.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetGamma = { UE4CodeGen_Private::EPropertyClass::Float, "TargetGamma", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, STRUCT_OFFSET(UManaTexture, TargetGamma), METADATA_PARAMS(NewProp_TargetGamma_MetaData, ARRAY_COUNT(NewProp_TargetGamma_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRenderToTexture_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "ManaTexture" },
				{ "ModuleRelativePath", "Public/ManaTexture.h" },
			};
#endif
			auto NewProp_bRenderToTexture_SetBit = [](void* Obj){ ((UManaTexture*)Obj)->bRenderToTexture = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRenderToTexture = { UE4CodeGen_Private::EPropertyClass::Bool, "bRenderToTexture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UManaTexture), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRenderToTexture_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bRenderToTexture_MetaData, ARRAY_COUNT(NewProp_bRenderToTexture_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumSubtitleChannels_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "ManaTexture" },
				{ "ModuleRelativePath", "Public/ManaTexture.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumSubtitleChannels = { UE4CodeGen_Private::EPropertyClass::Int, "NumSubtitleChannels", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UManaTexture, NumSubtitleChannels), METADATA_PARAMS(NewProp_NumSubtitleChannels_MetaData, ARRAY_COUNT(NewProp_NumSubtitleChannels_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventPointInfo_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "ManaTexture" },
				{ "ModuleRelativePath", "Public/ManaTexture.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EventPointInfo = { UE4CodeGen_Private::EPropertyClass::Array, "EventPointInfo", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UManaTexture, EventPointInfo), METADATA_PARAMS(NewProp_EventPointInfo_MetaData, ARRAY_COUNT(NewProp_EventPointInfo_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_EventPointInfo_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "EventPointInfo", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FManaEventPointInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VideoTrackInfo_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "ManaTexture" },
				{ "ModuleRelativePath", "Public/ManaTexture.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VideoTrackInfo = { UE4CodeGen_Private::EPropertyClass::Array, "VideoTrackInfo", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UManaTexture, VideoTrackInfo), METADATA_PARAMS(NewProp_VideoTrackInfo_MetaData, ARRAY_COUNT(NewProp_VideoTrackInfo_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_VideoTrackInfo_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "VideoTrackInfo", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FManaVideoTrackInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovieFilePath_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "ManaTexture" },
				{ "ModuleRelativePath", "Public/ManaTexture.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_MovieFilePath = { UE4CodeGen_Private::EPropertyClass::Str, "MovieFilePath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UManaTexture, MovieFilePath), METADATA_PARAMS(NewProp_MovieFilePath_MetaData, ARRAY_COUNT(NewProp_MovieFilePath_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovieSource_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "ManaTexture" },
				{ "ModuleRelativePath", "Public/ManaTexture.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MovieSource = { UE4CodeGen_Private::EPropertyClass::Object, "MovieSource", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000005, 1, nullptr, STRUCT_OFFSET(UManaTexture, MovieSource), Z_Construct_UClass_UManaSource_NoRegister, METADATA_PARAMS(NewProp_MovieSource_MetaData, ARRAY_COUNT(NewProp_MovieSource_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ComponentTextures,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ComponentTextures_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OverrideFormat,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClearColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AddressY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AddressX,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bHDR,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetGamma,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRenderToTexture,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NumSubtitleChannels,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EventPointInfo,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EventPointInfo_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VideoTrackInfo,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VideoTrackInfo_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MovieFilePath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MovieSource,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UManaTexture>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UManaTexture::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880080u,
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
	IMPLEMENT_CLASS(UManaTexture, 2432543928);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UManaTexture(Z_Construct_UClass_UManaTexture, &UManaTexture::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UManaTexture"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UManaTexture);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
