// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AtomListenerFocusPoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomListenerFocusPoint() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomListenerFocusPoint_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomListenerFocusPoint();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	void UAtomListenerFocusPoint::StaticRegisterNativesUAtomListenerFocusPoint()
	{
	}
	UClass* Z_Construct_UClass_UAtomListenerFocusPoint_NoRegister()
	{
		return UAtomListenerFocusPoint::StaticClass();
	}
	UClass* Z_Construct_UClass_UAtomListenerFocusPoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_USceneComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "BlueprintType", "true" },
				{ "ClassGroupNames", "Custom" },
				{ "HideCategories", "Trigger PhysicsVolume" },
				{ "IncludePath", "AtomListenerFocusPoint.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/AtomListenerFocusPoint.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirectionFocusLevel_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AtomListenerFocusPoint" },
				{ "ModuleRelativePath", "Public/AtomListenerFocusPoint.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DirectionFocusLevel = { UE4CodeGen_Private::EPropertyClass::Float, "DirectionFocusLevel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAtomListenerFocusPoint, DirectionFocusLevel), METADATA_PARAMS(NewProp_DirectionFocusLevel_MetaData, ARRAY_COUNT(NewProp_DirectionFocusLevel_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceFocusLevel_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AtomListenerFocusPoint" },
				{ "ModuleRelativePath", "Public/AtomListenerFocusPoint.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceFocusLevel = { UE4CodeGen_Private::EPropertyClass::Float, "DistanceFocusLevel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAtomListenerFocusPoint, DistanceFocusLevel), METADATA_PARAMS(NewProp_DistanceFocusLevel_MetaData, ARRAY_COUNT(NewProp_DistanceFocusLevel_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DirectionFocusLevel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DistanceFocusLevel,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAtomListenerFocusPoint>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAtomListenerFocusPoint::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
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
	IMPLEMENT_CLASS(UAtomListenerFocusPoint, 1315735951);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAtomListenerFocusPoint(Z_Construct_UClass_UAtomListenerFocusPoint, &UAtomListenerFocusPoint::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UAtomListenerFocusPoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomListenerFocusPoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
