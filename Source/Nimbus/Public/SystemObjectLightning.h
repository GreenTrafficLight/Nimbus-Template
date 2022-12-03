#pragma once
#include "CoreMinimal.h"
#include "SystemObject.h"
#include "UObject/NoExportTypes.h"
#include "SystemObjectLightning.generated.h"

class UParticleSystemComponent;
class UAkAudioEvent;
class UCurveFloat;
class UPointLightComponent;

UCLASS(Abstract, Blueprintable)
class NIMBUS_API ASystemObjectLightning : public ASystemObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoundingSphereRadiusMeters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LightningEffectDistanceMeters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LightningUpDisplayOffsetWhenStruckMeters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LightningForwardDisplayOffsetWhenStruckMeters;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LifeTimeMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LifeTimeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PointLightIntensityMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumDistanceFromCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AmbientSoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AmbientSoundStopEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* PointLightIntensityCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* LightningVFXComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPointLightComponent* SourcePointLight;
    
public:
    ASystemObjectLightning();
protected:
    UFUNCTION(BlueprintCallable)
    void OnLightningStrike();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPositionInRange(const FVector& Position) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsEnableVFX();
    
protected:
    UFUNCTION(BlueprintCallable)
    void InitializeVariablesFromBP(float MinDelay, float MaxDelay, float MinLifeTime, float MaxLifetime, float LightIntensityMultiplier, float MinDistanceFromCamera);
    
public:
    UFUNCTION(BlueprintCallable)
    void EnableVFX(bool bEnabled);
    
};

