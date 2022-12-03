// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/ManaPlaylist.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManaPlaylist() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaPlaylist_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaPlaylist();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaSource();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UManaPlaylist_Add();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaMovie_NoRegister();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UManaPlaylist_Get();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UManaPlaylist_GetNext();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UManaPlaylist_GetPrevious();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UManaPlaylist_GetRandom();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UManaPlaylist_Insert();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UManaPlaylist_IsAlpha();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UManaPlaylist_IsMixedTypes();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UManaPlaylist_IsSeamless();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UManaPlaylist_Num();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UManaPlaylist_Remove();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UManaPlaylist_RemoveAt();
// End Cross Module References
	void UManaPlaylist::StaticRegisterNativesUManaPlaylist()
	{
		UClass* Class = UManaPlaylist::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Add", (Native)&UManaPlaylist::execAdd },
			{ "Get", (Native)&UManaPlaylist::execGet },
			{ "GetNext", (Native)&UManaPlaylist::execGetNext },
			{ "GetPrevious", (Native)&UManaPlaylist::execGetPrevious },
			{ "GetRandom", (Native)&UManaPlaylist::execGetRandom },
			{ "Insert", (Native)&UManaPlaylist::execInsert },
			{ "IsAlpha", (Native)&UManaPlaylist::execIsAlpha },
			{ "IsMixedTypes", (Native)&UManaPlaylist::execIsMixedTypes },
			{ "IsSeamless", (Native)&UManaPlaylist::execIsSeamless },
			{ "Num", (Native)&UManaPlaylist::execNum },
			{ "Remove", (Native)&UManaPlaylist::execRemove },
			{ "RemoveAt", (Native)&UManaPlaylist::execRemoveAt },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UManaPlaylist_Add()
	{
		struct ManaPlaylist_eventAdd_Parms
		{
			UManaMovie* ManaMovie;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ManaMovie = { UE4CodeGen_Private::EPropertyClass::Object, "ManaMovie", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ManaPlaylist_eventAdd_Parms, ManaMovie), Z_Construct_UClass_UManaMovie_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ManaMovie,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ManaPlaylist.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlaylist, "Add", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ManaPlaylist_eventAdd_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UManaPlaylist_Get()
	{
		struct ManaPlaylist_eventGet_Parms
		{
			int32 Index;
			UManaMovie* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ManaPlaylist_eventGet_Parms, ReturnValue), Z_Construct_UClass_UManaMovie_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index = { UE4CodeGen_Private::EPropertyClass::Int, "Index", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ManaPlaylist_eventGet_Parms, Index), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Index,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ManaPlaylist.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlaylist, "Get", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ManaPlaylist_eventGet_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UManaPlaylist_GetNext()
	{
		struct ManaPlaylist_eventGetNext_Parms
		{
			int32 InOutIndex;
			UManaMovie* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ManaPlaylist_eventGetNext_Parms, ReturnValue), Z_Construct_UClass_UManaMovie_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_InOutIndex = { UE4CodeGen_Private::EPropertyClass::Int, "InOutIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(ManaPlaylist_eventGetNext_Parms, InOutIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InOutIndex,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ManaPlaylist.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlaylist, "GetNext", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(ManaPlaylist_eventGetNext_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UManaPlaylist_GetPrevious()
	{
		struct ManaPlaylist_eventGetPrevious_Parms
		{
			int32 InOutIndex;
			UManaMovie* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ManaPlaylist_eventGetPrevious_Parms, ReturnValue), Z_Construct_UClass_UManaMovie_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_InOutIndex = { UE4CodeGen_Private::EPropertyClass::Int, "InOutIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(ManaPlaylist_eventGetPrevious_Parms, InOutIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InOutIndex,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ManaPlaylist.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlaylist, "GetPrevious", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(ManaPlaylist_eventGetPrevious_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UManaPlaylist_GetRandom()
	{
		struct ManaPlaylist_eventGetRandom_Parms
		{
			int32 InOutIndex;
			UManaMovie* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ManaPlaylist_eventGetRandom_Parms, ReturnValue), Z_Construct_UClass_UManaMovie_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_InOutIndex = { UE4CodeGen_Private::EPropertyClass::Int, "InOutIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(ManaPlaylist_eventGetRandom_Parms, InOutIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InOutIndex,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ManaPlaylist.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlaylist, "GetRandom", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(ManaPlaylist_eventGetRandom_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UManaPlaylist_Insert()
	{
		struct ManaPlaylist_eventInsert_Parms
		{
			UManaMovie* ManaMovie;
			int32 Index;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index = { UE4CodeGen_Private::EPropertyClass::Int, "Index", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ManaPlaylist_eventInsert_Parms, Index), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ManaMovie = { UE4CodeGen_Private::EPropertyClass::Object, "ManaMovie", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ManaPlaylist_eventInsert_Parms, ManaMovie), Z_Construct_UClass_UManaMovie_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Index,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ManaMovie,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ManaPlaylist.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlaylist, "Insert", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ManaPlaylist_eventInsert_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UManaPlaylist_IsAlpha()
	{
		struct ManaPlaylist_eventIsAlpha_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((ManaPlaylist_eventIsAlpha_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ManaPlaylist_eventIsAlpha_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ManaPlaylist.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlaylist, "IsAlpha", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ManaPlaylist_eventIsAlpha_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UManaPlaylist_IsMixedTypes()
	{
		struct ManaPlaylist_eventIsMixedTypes_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((ManaPlaylist_eventIsMixedTypes_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ManaPlaylist_eventIsMixedTypes_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ManaPlaylist.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlaylist, "IsMixedTypes", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ManaPlaylist_eventIsMixedTypes_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UManaPlaylist_IsSeamless()
	{
		struct ManaPlaylist_eventIsSeamless_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((ManaPlaylist_eventIsSeamless_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ManaPlaylist_eventIsSeamless_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ManaPlaylist.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlaylist, "IsSeamless", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ManaPlaylist_eventIsSeamless_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UManaPlaylist_Num()
	{
		struct ManaPlaylist_eventNum_Parms
		{
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ManaPlaylist_eventNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ManaPlaylist.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlaylist, "Num", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ManaPlaylist_eventNum_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UManaPlaylist_Remove()
	{
		struct ManaPlaylist_eventRemove_Parms
		{
			UManaMovie* ManaMovie;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ManaMovie = { UE4CodeGen_Private::EPropertyClass::Object, "ManaMovie", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ManaPlaylist_eventRemove_Parms, ManaMovie), Z_Construct_UClass_UManaMovie_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ManaMovie,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ManaPlaylist.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlaylist, "Remove", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ManaPlaylist_eventRemove_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UManaPlaylist_RemoveAt()
	{
		struct ManaPlaylist_eventRemoveAt_Parms
		{
			int32 Index;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index = { UE4CodeGen_Private::EPropertyClass::Int, "Index", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ManaPlaylist_eventRemoveAt_Parms, Index), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Index,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ManaPlaylist.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaPlaylist, "RemoveAt", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ManaPlaylist_eventRemoveAt_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UManaPlaylist_NoRegister()
	{
		return UManaPlaylist::StaticClass();
	}
	UClass* Z_Construct_UClass_UManaPlaylist()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UManaSource,
				(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UManaPlaylist_Add, "Add" }, // 2511691938
				{ &Z_Construct_UFunction_UManaPlaylist_Get, "Get" }, // 2055649398
				{ &Z_Construct_UFunction_UManaPlaylist_GetNext, "GetNext" }, // 2551279528
				{ &Z_Construct_UFunction_UManaPlaylist_GetPrevious, "GetPrevious" }, // 3983024940
				{ &Z_Construct_UFunction_UManaPlaylist_GetRandom, "GetRandom" }, // 1939064400
				{ &Z_Construct_UFunction_UManaPlaylist_Insert, "Insert" }, // 2089011359
				{ &Z_Construct_UFunction_UManaPlaylist_IsAlpha, "IsAlpha" }, // 1799692637
				{ &Z_Construct_UFunction_UManaPlaylist_IsMixedTypes, "IsMixedTypes" }, // 3956519630
				{ &Z_Construct_UFunction_UManaPlaylist_IsSeamless, "IsSeamless" }, // 4115706493
				{ &Z_Construct_UFunction_UManaPlaylist_Num, "Num" }, // 2309777452
				{ &Z_Construct_UFunction_UManaPlaylist_Remove, "Remove" }, // 2530278288
				{ &Z_Construct_UFunction_UManaPlaylist_RemoveAt, "RemoveAt" }, // 4080648032
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "ManaPlaylist.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/ManaPlaylist.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSeamless_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "ManaPlaylist" },
				{ "ModuleRelativePath", "Public/ManaPlaylist.h" },
			};
#endif
			auto NewProp_bIsSeamless_SetBit = [](void* Obj){ ((UManaPlaylist*)Obj)->bIsSeamless = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSeamless = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsSeamless", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UManaPlaylist), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsSeamless_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsSeamless_MetaData, ARRAY_COUNT(NewProp_bIsSeamless_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsMixedTypes_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "ManaPlaylist" },
				{ "ModuleRelativePath", "Public/ManaPlaylist.h" },
			};
#endif
			auto NewProp_bIsMixedTypes_SetBit = [](void* Obj){ ((UManaPlaylist*)Obj)->bIsMixedTypes = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsMixedTypes = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsMixedTypes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UManaPlaylist), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsMixedTypes_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsMixedTypes_MetaData, ARRAY_COUNT(NewProp_bIsMixedTypes_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAlpha_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "ManaPlaylist" },
				{ "ModuleRelativePath", "Public/ManaPlaylist.h" },
			};
#endif
			auto NewProp_bIsAlpha_SetBit = [](void* Obj){ ((UManaPlaylist*)Obj)->bIsAlpha = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAlpha = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsAlpha", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UManaPlaylist), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsAlpha_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsAlpha_MetaData, ARRAY_COUNT(NewProp_bIsAlpha_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Movies_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "ManaPlaylist" },
				{ "ModuleRelativePath", "Public/ManaPlaylist.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Movies = { UE4CodeGen_Private::EPropertyClass::Array, "Movies", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000005, 1, nullptr, STRUCT_OFFSET(UManaPlaylist, Movies), METADATA_PARAMS(NewProp_Movies_MetaData, ARRAY_COUNT(NewProp_Movies_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Movies_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Movies", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UManaMovie_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsSeamless,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsMixedTypes,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsAlpha,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Movies,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Movies_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UManaPlaylist>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UManaPlaylist::StaticClass,
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
	IMPLEMENT_CLASS(UManaPlaylist, 1248457632);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UManaPlaylist(Z_Construct_UClass_UManaPlaylist, &UManaPlaylist::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UManaPlaylist"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UManaPlaylist);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
