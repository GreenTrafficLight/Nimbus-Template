// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AnimNode_RigidBody.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_RigidBody() {}
// Cross Module References
	IMMEDIATEPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_RigidBody();
	UPackage* Z_Construct_UPackage__Script_ImmediatePhysics();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	IMMEDIATEPHYSICS_API UEnum* Z_Construct_UEnum_ImmediatePhysics_ESimulationSpace();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsAsset_NoRegister();
// End Cross Module References
class UScriptStruct* FAnimNode_RigidBody::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern IMMEDIATEPHYSICS_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_RigidBody_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_RigidBody, Z_Construct_UPackage__Script_ImmediatePhysics(), TEXT("AnimNode_RigidBody"), sizeof(FAnimNode_RigidBody), Get_Z_Construct_UScriptStruct_FAnimNode_RigidBody_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_RigidBody(FAnimNode_RigidBody::StaticStruct, TEXT("/Script/ImmediatePhysics"), TEXT("AnimNode_RigidBody"), false, nullptr, nullptr);
static struct FScriptStruct_ImmediatePhysics_StaticRegisterNativesFAnimNode_RigidBody
{
	FScriptStruct_ImmediatePhysics_StaticRegisterNativesFAnimNode_RigidBody()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_RigidBody")),new UScriptStruct::TCppStructOps<FAnimNode_RigidBody>);
	}
} ScriptStruct_ImmediatePhysics_StaticRegisterNativesFAnimNode_RigidBody;
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_RigidBody()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_RigidBody_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_ImmediatePhysics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_RigidBody"), sizeof(FAnimNode_RigidBody), Get_Z_Construct_UScriptStruct_FAnimNode_RigidBody_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/AnimNode_RigidBody.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_RigidBody>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bComponentSpaceSimulation_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AnimNode_RigidBody" },
				{ "ModuleRelativePath", "Public/AnimNode_RigidBody.h" },
			};
#endif
			auto NewProp_bComponentSpaceSimulation_SetBit = [](void* Obj){ ((FAnimNode_RigidBody*)Obj)->bComponentSpaceSimulation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bComponentSpaceSimulation = { UE4CodeGen_Private::EPropertyClass::Bool, "bComponentSpaceSimulation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimNode_RigidBody), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bComponentSpaceSimulation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bComponentSpaceSimulation_MetaData, ARRAY_COUNT(NewProp_bComponentSpaceSimulation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedBoundsScale_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AnimNode_RigidBody" },
				{ "ModuleRelativePath", "Public/AnimNode_RigidBody.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CachedBoundsScale = { UE4CodeGen_Private::EPropertyClass::Float, "CachedBoundsScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_RigidBody, CachedBoundsScale), METADATA_PARAMS(NewProp_CachedBoundsScale_MetaData, ARRAY_COUNT(NewProp_CachedBoundsScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideWorldGravity_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AnimNode_RigidBody" },
				{ "ModuleRelativePath", "Public/AnimNode_RigidBody.h" },
			};
#endif
			auto NewProp_bOverrideWorldGravity_SetBit = [](void* Obj){ ((FAnimNode_RigidBody*)Obj)->bOverrideWorldGravity = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideWorldGravity = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverrideWorldGravity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimNode_RigidBody), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOverrideWorldGravity_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOverrideWorldGravity_MetaData, ARRAY_COUNT(NewProp_bOverrideWorldGravity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SimulationSpace_MetaData[] = {
				{ "Category", "AnimNode_RigidBody" },
				{ "ModuleRelativePath", "Public/AnimNode_RigidBody.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SimulationSpace = { UE4CodeGen_Private::EPropertyClass::Enum, "SimulationSpace", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_RigidBody, SimulationSpace), Z_Construct_UEnum_ImmediatePhysics_ESimulationSpace, METADATA_PARAMS(NewProp_SimulationSpace_MetaData, ARRAY_COUNT(NewProp_SimulationSpace_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SimulationSpace_Underlying = { UE4CodeGen_Private::EPropertyClass::Int, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableWorldGeometry_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AnimNode_RigidBody" },
				{ "ModuleRelativePath", "Public/AnimNode_RigidBody.h" },
			};
#endif
			auto NewProp_bEnableWorldGeometry_SetBit = [](void* Obj){ ((FAnimNode_RigidBody*)Obj)->bEnableWorldGeometry = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableWorldGeometry = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableWorldGeometry", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimNode_RigidBody), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableWorldGeometry_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableWorldGeometry_MetaData, ARRAY_COUNT(NewProp_bEnableWorldGeometry_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlapChannel_MetaData[] = {
				{ "Category", "AnimNode_RigidBody" },
				{ "ModuleRelativePath", "Public/AnimNode_RigidBody.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_OverlapChannel = { UE4CodeGen_Private::EPropertyClass::Byte, "OverlapChannel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_RigidBody, OverlapChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(NewProp_OverlapChannel_MetaData, ARRAY_COUNT(NewProp_OverlapChannel_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExternalForce_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AnimNode_RigidBody" },
				{ "ModuleRelativePath", "Public/AnimNode_RigidBody.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExternalForce = { UE4CodeGen_Private::EPropertyClass::Struct, "ExternalForce", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_RigidBody, ExternalForce), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_ExternalForce_MetaData, ARRAY_COUNT(NewProp_ExternalForce_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideWorldGravity_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AnimNode_RigidBody" },
				{ "ModuleRelativePath", "Public/AnimNode_RigidBody.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OverrideWorldGravity = { UE4CodeGen_Private::EPropertyClass::Struct, "OverrideWorldGravity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_RigidBody, OverrideWorldGravity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_OverrideWorldGravity_MetaData, ARRAY_COUNT(NewProp_OverrideWorldGravity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverridePhysicsAsset_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AnimNode_RigidBody" },
				{ "ModuleRelativePath", "Public/AnimNode_RigidBody.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverridePhysicsAsset = { UE4CodeGen_Private::EPropertyClass::Object, "OverridePhysicsAsset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_RigidBody, OverridePhysicsAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(NewProp_OverridePhysicsAsset_MetaData, ARRAY_COUNT(NewProp_OverridePhysicsAsset_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bComponentSpaceSimulation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CachedBoundsScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOverrideWorldGravity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SimulationSpace,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SimulationSpace_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableWorldGeometry,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OverlapChannel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExternalForce,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OverrideWorldGravity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OverridePhysicsAsset,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_ImmediatePhysics,
				Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AnimNode_RigidBody",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAnimNode_RigidBody),
				alignof(FAnimNode_RigidBody),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_RigidBody_CRC() { return 1887193923U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
