#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/Scene.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "BasicLightRig.generated.h"

class UTexture;
class UTimelineComponent;
class USceneCaptureComponentCube;
class UTextureCube;
class USceneComponent;
class USkyLightComponent;
class UStaticMeshComponent;
class UMaterialParameterCollection;
class UDirectionalLightComponent;
class UPostProcessComponent;

UCLASS(Blueprintable)
class NIMBUS_API ABasicLightRig : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseOfflineCapture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureCube* Output_BelowClouds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureCube* Output_InClouds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureCube* Output_AboveClouds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureCube* Output_NoCubemapBlending;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseUndergroundSunMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UndergroundSunMaskMinHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UndergroundSunMaskMaxHeight;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* GlobalMPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* LightRigMPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureCube* MaterialTextureBelowClouds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureCube* MaterialTextureInClouds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureCube* MaterialTextureAboveClouds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureCube* MaterialTextureNoBlending;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneCaptureComponentCube* OfflineCapture_BelowClouds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneCaptureComponentCube* OfflineCapture_InClouds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneCaptureComponentCube* OfflineCapture_AboveClouds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneCaptureComponentCube* OfflineCapture_NoCubemapBlending;
    
public:
    ABasicLightRig();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateSunParameters_BP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateLoop_BP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateLocalCameraPosition_BP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateLightRigMPC_BP();
    
    UFUNCTION(BlueprintCallable)
    void UpdateBlendHeight();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateAircraftMaterial_BP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMinBlendHeight(float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMaxBlendHeight(float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetAircraftMaterial_BP();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnTransitionToMiniGameEvent_Native(bool bIsTransitingIn);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MaterialUpdateCP_BP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool GetUseSkyLight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUseOfflineCapture() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool GetUseHDRI() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool GetUseCubemapBlending() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    UTimelineComponent* GetTimeline_RoughnessRampUp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    UTimelineComponent* GetTimeline_RoughnessRampDown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    UTimelineComponent* GetTimeline_1() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    UTimelineComponent* GetTimeline_0() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    UDirectionalLightComponent* GetSunLight_CP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    UDirectionalLightComponent* GetSunLight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    UDirectionalLightComponent* GetSunDirLight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    UStaticMeshComponent* GetSkylight_PreviewBlendHeight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    float GetSkyLight_Intensity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    USkyLightComponent* GetSkyLight_CubemapBlending() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    USkyLightComponent* GetSkyLight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool GetShow_EnvDome() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    USceneCaptureComponentCube* GetSceneCaptureCube_InClouds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    USceneCaptureComponentCube* GetSceneCaptureCube_BelowClouds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    USceneCaptureComponentCube* GetSceneCaptureCube_AboveClouds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    USceneCaptureComponentCube* GetSceneCaptureComponentCube() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    UPostProcessComponent* GetPostProcessComp00() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FPostProcessSettings GetPostProcess00() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    float GetMinBlendHeight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    float GetMaxBlendHeight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    float GetLightTemperature() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    float GetLightScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    float GetLightIntensity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FRotator GetLightDirection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    float GetLevelVFX_Intensity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FLinearColor GetLevelCloudSand_Color() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    UTexture* GetHDRI_CubeMap() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    float GetHDRI_Brightness() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool GetGet_TrueSky_Sun_Rotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool GetFollow_TrusSky() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    UStaticMeshComponent* GetEnvSphere() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    UTimelineComponent* GetCockpit_SunLight_Increase() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    UTimelineComponent* GetCockpit_SunLight_Decrease() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool GetApply_Reflection() const;
    
};

