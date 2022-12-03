#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Camera/PlayerCameraManager.h"
#include "UObject/NoExportTypes.h"
#include "ENimbusCameraShakeType.h"
#include "NimbusActiveCameraShakeData.h"
#include "NimbusPlayerCameraManager.generated.h"

class USceneComponent;
class UNimbusCameraShakeParameter;
class UCurveFloat;

UCLASS(Blueprintable, NonTransient)
class NIMBUS_API ANimbusPlayerCameraManager : public APlayerCameraManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNimbusCameraShakeParameter> NimbusCameraShakeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* RestrictionNearClipByDistanceCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* AdjustNearClipByFovCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNotTouchNearClip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysResetNearClip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ParticleFrontOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugIntermittentCameraShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENimbusCameraShakeType DebugIntermittentCameraShakeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DebugIntermittentCameraShakeInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNimbusCameraShakeParameter* NimbusCameraShakeParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* ParticleAttachComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNimbusActiveCameraShakeData> PlayShakeList;
    
public:
    ANimbusPlayerCameraManager();
    UFUNCTION(BlueprintCallable)
    void TestLoopCameraShakePlayAddScale(float inScale);
    
    UFUNCTION(BlueprintCallable)
    void TestLoopCameraShakePlay();
    
};

