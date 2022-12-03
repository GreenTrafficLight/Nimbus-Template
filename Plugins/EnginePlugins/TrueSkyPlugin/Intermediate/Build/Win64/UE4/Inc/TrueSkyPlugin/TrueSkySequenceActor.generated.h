// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FLinearColor;
struct FRotator;
class APointLight;
#ifdef TRUESKYPLUGIN_TrueSkySequenceActor_generated_h
#error "TrueSkySequenceActor.generated.h already included, missing '#pragma once' in TrueSkySequenceActor.h"
#endif
#define TRUESKYPLUGIN_TrueSkySequenceActor_generated_h

#define Nimbus_Template_Plugins_EnginePlugins_TrueSkyPlugin_Source_TrueSkyPlugin_Public_TrueSkySequenceActor_h_18_RPC_WRAPPERS \
	virtual void VolumeQueryResult_Implementation(int32 CallerId, float Density); \
 \
	DECLARE_FUNCTION(execCloudLineTest) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_QueryID); \
		P_GET_STRUCT(FVector,Z_Param_StartPos); \
		P_GET_STRUCT(FVector,Z_Param_EndPos); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=ATrueSkySequenceActor::CloudLineTest(Z_Param_QueryID,Z_Param_StartPos,Z_Param_EndPos); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCloudPointTest) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_QueryID); \
		P_GET_STRUCT(FVector,Z_Param_Pos); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=ATrueSkySequenceActor::CloudPointTest(Z_Param_QueryID,Z_Param_Pos); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBool) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=ATrueSkySequenceActor::GetBool(Z_Param_Name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCloudKeyframeByIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Layer); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=ATrueSkySequenceActor::GetCloudKeyframeByIndex(Z_Param_Layer,Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFloat) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=ATrueSkySequenceActor::GetFloat(Z_Param_Name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInt) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=ATrueSkySequenceActor::GetInt(Z_Param_Name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetKeyframeFloat) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_KeyframeUid); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=ATrueSkySequenceActor::GetKeyframeFloat(Z_Param_KeyframeUid,Z_Param_Name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetKeyframeInt) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_KeyframeUid); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=ATrueSkySequenceActor::GetKeyframeInt(Z_Param_KeyframeUid,Z_Param_Name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMoonColor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=ATrueSkySequenceActor::GetMoonColor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMoonIntensity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=ATrueSkySequenceActor::GetMoonIntensity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMoonRotation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=ATrueSkySequenceActor::GetMoonRotation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNextCloudKeyframeAfterTime) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Layer); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_T); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=ATrueSkySequenceActor::GetNextCloudKeyframeAfterTime(Z_Param_Layer,Z_Param_T); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNextModifiableCloudKeyframe) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Layer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=ATrueSkySequenceActor::GetNextModifiableCloudKeyframe(Z_Param_Layer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNextModifiableSkyKeyframe) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=ATrueSkySequenceActor::GetNextModifiableSkyKeyframe(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNextSkyKeyframeAfterTime) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_T); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=ATrueSkySequenceActor::GetNextSkyKeyframeAfterTime(Z_Param_T); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPreviousCloudKeyframeBeforeTime) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Layer); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_T); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=ATrueSkySequenceActor::GetPreviousCloudKeyframeBeforeTime(Z_Param_Layer,Z_Param_T); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPreviousSkyKeyframeBeforeTime) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_T); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=ATrueSkySequenceActor::GetPreviousSkyKeyframeBeforeTime(Z_Param_T); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetProfilingText) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_cpu_level); \
		P_GET_PROPERTY(UIntProperty,Z_Param_gpu_level); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=ATrueSkySequenceActor::GetProfilingText(Z_Param_cpu_level,Z_Param_gpu_level); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetShadowBase) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=ATrueSkySequenceActor::GetShadowBase(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSkyKeyframeByIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=ATrueSkySequenceActor::GetSkyKeyframeByIndex(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSunColor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=ATrueSkySequenceActor::GetSunColor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSunIntensity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=ATrueSkySequenceActor::GetSunIntensity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSunOrMoonRotation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=ATrueSkySequenceActor::GetSunOrMoonRotation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSunRotation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=ATrueSkySequenceActor::GetSunRotation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetText) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=ATrueSkySequenceActor::GetText(Z_Param_Name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTickTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetTickTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=ATrueSkySequenceActor::GetTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTime2) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetTime2(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBool) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Name); \
		P_GET_UBOOL(Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ATrueSkySequenceActor::SetBool(Z_Param_Name,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFloat) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Name); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ATrueSkySequenceActor::SetFloat(Z_Param_Name,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInt) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Name); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ATrueSkySequenceActor::SetInt(Z_Param_Name,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetKeyframeFloat) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_KeyframeUid); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Name); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ATrueSkySequenceActor::SetKeyframeFloat(Z_Param_KeyframeUid,Z_Param_Name,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetKeyframeInt) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_KeyframeUid); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Name); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ATrueSkySequenceActor::SetKeyframeInt(Z_Param_KeyframeUid,Z_Param_Name,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMoonRotation) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_R); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ATrueSkySequenceActor::SetMoonRotation(Z_Param_R); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPointLight) \
	{ \
		P_GET_OBJECT(APointLight,Z_Param_Source); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ATrueSkySequenceActor::SetPointLight(Z_Param_Source); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPointLightSource) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ID); \
		P_GET_STRUCT(FLinearColor,Z_Param_lightColour); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_intensity); \
		P_GET_STRUCT(FVector,Z_Param_Pos); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_minRadius); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxRadius); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ATrueSkySequenceActor::SetPointLightSource(Z_Param_ID,Z_Param_lightColour,Z_Param_intensity,Z_Param_Pos,Z_Param_minRadius,Z_Param_MaxRadius); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetShadowBase) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Base); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ATrueSkySequenceActor::SetShadowBase(Z_Param_Base); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSunRotation) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_R); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ATrueSkySequenceActor::SetSunRotation(Z_Param_R); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTickTime) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetTickTime(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTime) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ATrueSkySequenceActor::SetTime(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVolumeQueryResult) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_CallerId); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Density); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->VolumeQueryResult_Implementation(Z_Param_CallerId,Z_Param_Density); \
		P_NATIVE_END; \
	}


#define Nimbus_Template_Plugins_EnginePlugins_TrueSkyPlugin_Source_TrueSkyPlugin_Public_TrueSkySequenceActor_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void VolumeQueryResult_Implementation(int32 CallerId, float Density); \
 \
	DECLARE_FUNCTION(execCloudLineTest) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_QueryID); \
		P_GET_STRUCT(FVector,Z_Param_StartPos); \
		P_GET_STRUCT(FVector,Z_Param_EndPos); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=ATrueSkySequenceActor::CloudLineTest(Z_Param_QueryID,Z_Param_StartPos,Z_Param_EndPos); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCloudPointTest) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_QueryID); \
		P_GET_STRUCT(FVector,Z_Param_Pos); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=ATrueSkySequenceActor::CloudPointTest(Z_Param_QueryID,Z_Param_Pos); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBool) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=ATrueSkySequenceActor::GetBool(Z_Param_Name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCloudKeyframeByIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Layer); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=ATrueSkySequenceActor::GetCloudKeyframeByIndex(Z_Param_Layer,Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFloat) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=ATrueSkySequenceActor::GetFloat(Z_Param_Name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInt) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=ATrueSkySequenceActor::GetInt(Z_Param_Name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetKeyframeFloat) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_KeyframeUid); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=ATrueSkySequenceActor::GetKeyframeFloat(Z_Param_KeyframeUid,Z_Param_Name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetKeyframeInt) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_KeyframeUid); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=ATrueSkySequenceActor::GetKeyframeInt(Z_Param_KeyframeUid,Z_Param_Name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMoonColor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=ATrueSkySequenceActor::GetMoonColor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMoonIntensity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=ATrueSkySequenceActor::GetMoonIntensity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMoonRotation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=ATrueSkySequenceActor::GetMoonRotation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNextCloudKeyframeAfterTime) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Layer); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_T); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=ATrueSkySequenceActor::GetNextCloudKeyframeAfterTime(Z_Param_Layer,Z_Param_T); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNextModifiableCloudKeyframe) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Layer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=ATrueSkySequenceActor::GetNextModifiableCloudKeyframe(Z_Param_Layer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNextModifiableSkyKeyframe) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=ATrueSkySequenceActor::GetNextModifiableSkyKeyframe(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNextSkyKeyframeAfterTime) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_T); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=ATrueSkySequenceActor::GetNextSkyKeyframeAfterTime(Z_Param_T); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPreviousCloudKeyframeBeforeTime) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Layer); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_T); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=ATrueSkySequenceActor::GetPreviousCloudKeyframeBeforeTime(Z_Param_Layer,Z_Param_T); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPreviousSkyKeyframeBeforeTime) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_T); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=ATrueSkySequenceActor::GetPreviousSkyKeyframeBeforeTime(Z_Param_T); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetProfilingText) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_cpu_level); \
		P_GET_PROPERTY(UIntProperty,Z_Param_gpu_level); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=ATrueSkySequenceActor::GetProfilingText(Z_Param_cpu_level,Z_Param_gpu_level); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetShadowBase) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=ATrueSkySequenceActor::GetShadowBase(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSkyKeyframeByIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=ATrueSkySequenceActor::GetSkyKeyframeByIndex(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSunColor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=ATrueSkySequenceActor::GetSunColor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSunIntensity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=ATrueSkySequenceActor::GetSunIntensity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSunOrMoonRotation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=ATrueSkySequenceActor::GetSunOrMoonRotation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSunRotation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=ATrueSkySequenceActor::GetSunRotation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetText) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=ATrueSkySequenceActor::GetText(Z_Param_Name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTickTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetTickTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=ATrueSkySequenceActor::GetTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTime2) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetTime2(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBool) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Name); \
		P_GET_UBOOL(Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ATrueSkySequenceActor::SetBool(Z_Param_Name,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFloat) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Name); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ATrueSkySequenceActor::SetFloat(Z_Param_Name,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInt) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Name); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ATrueSkySequenceActor::SetInt(Z_Param_Name,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetKeyframeFloat) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_KeyframeUid); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Name); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ATrueSkySequenceActor::SetKeyframeFloat(Z_Param_KeyframeUid,Z_Param_Name,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetKeyframeInt) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_KeyframeUid); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Name); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ATrueSkySequenceActor::SetKeyframeInt(Z_Param_KeyframeUid,Z_Param_Name,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMoonRotation) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_R); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ATrueSkySequenceActor::SetMoonRotation(Z_Param_R); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPointLight) \
	{ \
		P_GET_OBJECT(APointLight,Z_Param_Source); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ATrueSkySequenceActor::SetPointLight(Z_Param_Source); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPointLightSource) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ID); \
		P_GET_STRUCT(FLinearColor,Z_Param_lightColour); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_intensity); \
		P_GET_STRUCT(FVector,Z_Param_Pos); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_minRadius); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxRadius); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ATrueSkySequenceActor::SetPointLightSource(Z_Param_ID,Z_Param_lightColour,Z_Param_intensity,Z_Param_Pos,Z_Param_minRadius,Z_Param_MaxRadius); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetShadowBase) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Base); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ATrueSkySequenceActor::SetShadowBase(Z_Param_Base); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSunRotation) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_R); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ATrueSkySequenceActor::SetSunRotation(Z_Param_R); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTickTime) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetTickTime(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTime) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ATrueSkySequenceActor::SetTime(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVolumeQueryResult) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_CallerId); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Density); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->VolumeQueryResult_Implementation(Z_Param_CallerId,Z_Param_Density); \
		P_NATIVE_END; \
	}


#define Nimbus_Template_Plugins_EnginePlugins_TrueSkyPlugin_Source_TrueSkyPlugin_Public_TrueSkySequenceActor_h_18_EVENT_PARMS \
	struct TrueSkySequenceActor_eventVolumeQueryResult_Parms \
	{ \
		int32 CallerId; \
		float Density; \
	};


#define Nimbus_Template_Plugins_EnginePlugins_TrueSkyPlugin_Source_TrueSkyPlugin_Public_TrueSkySequenceActor_h_18_CALLBACK_WRAPPERS
#define Nimbus_Template_Plugins_EnginePlugins_TrueSkyPlugin_Source_TrueSkyPlugin_Public_TrueSkySequenceActor_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATrueSkySequenceActor(); \
	friend TRUESKYPLUGIN_API class UClass* Z_Construct_UClass_ATrueSkySequenceActor(); \
public: \
	DECLARE_CLASS(ATrueSkySequenceActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/TrueSkyPlugin"), NO_API) \
	DECLARE_SERIALIZER(ATrueSkySequenceActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Nimbus_Template_Plugins_EnginePlugins_TrueSkyPlugin_Source_TrueSkyPlugin_Public_TrueSkySequenceActor_h_18_INCLASS \
private: \
	static void StaticRegisterNativesATrueSkySequenceActor(); \
	friend TRUESKYPLUGIN_API class UClass* Z_Construct_UClass_ATrueSkySequenceActor(); \
public: \
	DECLARE_CLASS(ATrueSkySequenceActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/TrueSkyPlugin"), NO_API) \
	DECLARE_SERIALIZER(ATrueSkySequenceActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Nimbus_Template_Plugins_EnginePlugins_TrueSkyPlugin_Source_TrueSkyPlugin_Public_TrueSkySequenceActor_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATrueSkySequenceActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATrueSkySequenceActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATrueSkySequenceActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATrueSkySequenceActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATrueSkySequenceActor(ATrueSkySequenceActor&&); \
	NO_API ATrueSkySequenceActor(const ATrueSkySequenceActor&); \
public:


#define Nimbus_Template_Plugins_EnginePlugins_TrueSkyPlugin_Source_TrueSkyPlugin_Public_TrueSkySequenceActor_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATrueSkySequenceActor(ATrueSkySequenceActor&&); \
	NO_API ATrueSkySequenceActor(const ATrueSkySequenceActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATrueSkySequenceActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATrueSkySequenceActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATrueSkySequenceActor)


#define Nimbus_Template_Plugins_EnginePlugins_TrueSkyPlugin_Source_TrueSkyPlugin_Public_TrueSkySequenceActor_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Visible() { return STRUCT_OFFSET(ATrueSkySequenceActor, Visible); }


#define Nimbus_Template_Plugins_EnginePlugins_TrueSkyPlugin_Source_TrueSkyPlugin_Public_TrueSkySequenceActor_h_16_PROLOG \
	Nimbus_Template_Plugins_EnginePlugins_TrueSkyPlugin_Source_TrueSkyPlugin_Public_TrueSkySequenceActor_h_18_EVENT_PARMS


#define Nimbus_Template_Plugins_EnginePlugins_TrueSkyPlugin_Source_TrueSkyPlugin_Public_TrueSkySequenceActor_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Nimbus_Template_Plugins_EnginePlugins_TrueSkyPlugin_Source_TrueSkyPlugin_Public_TrueSkySequenceActor_h_18_PRIVATE_PROPERTY_OFFSET \
	Nimbus_Template_Plugins_EnginePlugins_TrueSkyPlugin_Source_TrueSkyPlugin_Public_TrueSkySequenceActor_h_18_RPC_WRAPPERS \
	Nimbus_Template_Plugins_EnginePlugins_TrueSkyPlugin_Source_TrueSkyPlugin_Public_TrueSkySequenceActor_h_18_CALLBACK_WRAPPERS \
	Nimbus_Template_Plugins_EnginePlugins_TrueSkyPlugin_Source_TrueSkyPlugin_Public_TrueSkySequenceActor_h_18_INCLASS \
	Nimbus_Template_Plugins_EnginePlugins_TrueSkyPlugin_Source_TrueSkyPlugin_Public_TrueSkySequenceActor_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Nimbus_Template_Plugins_EnginePlugins_TrueSkyPlugin_Source_TrueSkyPlugin_Public_TrueSkySequenceActor_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Nimbus_Template_Plugins_EnginePlugins_TrueSkyPlugin_Source_TrueSkyPlugin_Public_TrueSkySequenceActor_h_18_PRIVATE_PROPERTY_OFFSET \
	Nimbus_Template_Plugins_EnginePlugins_TrueSkyPlugin_Source_TrueSkyPlugin_Public_TrueSkySequenceActor_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Nimbus_Template_Plugins_EnginePlugins_TrueSkyPlugin_Source_TrueSkyPlugin_Public_TrueSkySequenceActor_h_18_CALLBACK_WRAPPERS \
	Nimbus_Template_Plugins_EnginePlugins_TrueSkyPlugin_Source_TrueSkyPlugin_Public_TrueSkySequenceActor_h_18_INCLASS_NO_PURE_DECLS \
	Nimbus_Template_Plugins_EnginePlugins_TrueSkyPlugin_Source_TrueSkyPlugin_Public_TrueSkySequenceActor_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Nimbus_Template_Plugins_EnginePlugins_TrueSkyPlugin_Source_TrueSkyPlugin_Public_TrueSkySequenceActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
