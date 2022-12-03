#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/PlayerController.h"
#include "EControllerVibrationType.h"
#include "NimbusPlayerController.generated.h"

class UNimbusControllerVibration;

UCLASS(Blueprintable)
class NIMBUS_API ANimbusPlayerController : public APlayerController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisplayDebugInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNimbusControllerVibration> ControllerVibrationClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNimbusControllerVibration* ControllerVibration;
    
public:
    ANimbusPlayerController();
    UFUNCTION(BlueprintCallable)
    void UnpauseAllControllerVibrations();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TogglePlayerDebugInfo();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleHUD();
    
    UFUNCTION(BlueprintCallable)
    void StopControllerVibrationTypes(EControllerVibrationType Type1, EControllerVibrationType Type2);
    
    UFUNCTION(BlueprintCallable)
    void StopControllerVibrationType(EControllerVibrationType Type);
    
    UFUNCTION(BlueprintCallable)
    void StopAllControllerVibrationImmediately();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartControllerVibration(float intensity, float Duration);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetXBoxControllerVibrationScalar(float Scalar);
    
    UFUNCTION(BlueprintCallable)
    void SetPSControllerVibrationScalar(float Scalar);
    
    UFUNCTION(BlueprintCallable)
    void SetIsSkipIGC(bool bSkipIGC);
    
    UFUNCTION(BlueprintCallable)
    void SetControllerVibrationScales(EControllerVibrationType Type1, EControllerVibrationType Type2, float Scale);
    
    UFUNCTION(BlueprintCallable)
    void SetControllerVibrationScale(EControllerVibrationType Type, float Scale);
    
    UFUNCTION(BlueprintCallable)
    void PauseAllControllerVibrations();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ForceStopControllerVibration();
    
public:
    UFUNCTION(BlueprintCallable)
    void ControllerVibrationNotify_OnIGC(EControllerVibrationType Type, float Scale);
    
    UFUNCTION(BlueprintCallable)
    void ControllerVibrationNotify(EControllerVibrationType Type, float Scale);
    
};

