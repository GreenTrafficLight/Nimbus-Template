// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/ManaComponentTexture.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManaComponentTexture() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaComponentTexture_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaComponentTexture();
	ENGINE_API UClass* Z_Construct_UClass_UTexture();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureAddress();
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EManaComponentTextureType();
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EPixelFormat();
// End Cross Module References
	void UManaComponentTexture::StaticRegisterNativesUManaComponentTexture()
	{
	}
	UClass* Z_Construct_UClass_UManaComponentTexture_NoRegister()
	{
		return UManaComponentTexture::StaticClass();
	}
	UClass* Z_Construct_UClass_UManaComponentTexture()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UTexture,
				(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "ManaComponentTexture.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/ManaComponentTexture.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddressY_MetaData[] = {
				{ "Category", "ManaComponentTexture" },
				{ "ModuleRelativePath", "Public/ManaComponentTexture.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_AddressY = { UE4CodeGen_Private::EPropertyClass::Byte, "AddressY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010050000000001, 1, nullptr, STRUCT_OFFSET(UManaComponentTexture, AddressY), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(NewProp_AddressY_MetaData, ARRAY_COUNT(NewProp_AddressY_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddressX_MetaData[] = {
				{ "Category", "ManaComponentTexture" },
				{ "ModuleRelativePath", "Public/ManaComponentTexture.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_AddressX = { UE4CodeGen_Private::EPropertyClass::Byte, "AddressX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010050000000001, 1, nullptr, STRUCT_OFFSET(UManaComponentTexture, AddressX), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(NewProp_AddressX_MetaData, ARRAY_COUNT(NewProp_AddressX_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentType_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "ManaComponentTexture" },
				{ "ModuleRelativePath", "Public/ManaComponentTexture.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ComponentType = { UE4CodeGen_Private::EPropertyClass::Enum, "ComponentType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UManaComponentTexture, ComponentType), Z_Construct_UEnum_CriWareRuntime_EManaComponentTextureType, METADATA_PARAMS(NewProp_ComponentType_MetaData, ARRAY_COUNT(NewProp_ComponentType_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ComponentType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Format_MetaData[] = {
				{ "Category", "ManaComponentTexture" },
				{ "ModuleRelativePath", "Public/ManaComponentTexture.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Format = { UE4CodeGen_Private::EPropertyClass::Byte, "Format", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UManaComponentTexture, Format), Z_Construct_UEnum_CoreUObject_EPixelFormat, METADATA_PARAMS(NewProp_Format_MetaData, ARRAY_COUNT(NewProp_Format_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SizeY_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "ManaComponentTexture" },
				{ "ModuleRelativePath", "Public/ManaComponentTexture.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SizeY = { UE4CodeGen_Private::EPropertyClass::Int, "SizeY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UManaComponentTexture, SizeY), METADATA_PARAMS(NewProp_SizeY_MetaData, ARRAY_COUNT(NewProp_SizeY_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SizeX_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "ManaComponentTexture" },
				{ "ModuleRelativePath", "Public/ManaComponentTexture.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SizeX = { UE4CodeGen_Private::EPropertyClass::Int, "SizeX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UManaComponentTexture, SizeX), METADATA_PARAMS(NewProp_SizeX_MetaData, ARRAY_COUNT(NewProp_SizeX_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AddressY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AddressX,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ComponentType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ComponentType_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Format,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SizeY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SizeX,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UManaComponentTexture>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UManaComponentTexture::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880080u,
				nullptr, 0,
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
	IMPLEMENT_CLASS(UManaComponentTexture, 3868302368);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UManaComponentTexture(Z_Construct_UClass_UManaComponentTexture, &UManaComponentTexture::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UManaComponentTexture"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UManaComponentTexture);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
