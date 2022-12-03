#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ControllerVibrationType.h"
#include "EControllerVibrationSimulationMode.h"
#include "NimbusControllerVibration.generated.h"

class APlayerPlane;

UCLASS(Blueprintable, NotPlaceable)
class NIMBUS_API UNimbusControllerVibration : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnStopControllerVibration);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnStartControllerVibration, float, intensity, float, Duration);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerPlane* PlayerPlane;
    
    UPROPERTY(EditAnywhere)
    FControllerVibrationType ControllerVibrationTypes[46];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AfterburnerVibrationFadeTimeSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PSVibrationScalar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float XBoxVibrationScalar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PSGunFireVibrationInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float XBoxGunFireVibrationInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EControllerVibrationSimulationMode ControllerVibrationSimulationMode;
    
public:
    UNimbusControllerVibration();
    UFUNCTION(BlueprintCallable)
    void SetXBoxControllerVibrationScalar(float Scalar);
    
    UFUNCTION(BlueprintCallable)
    void SetPSControllerVibrationScalar(float Scalar);
    
};

