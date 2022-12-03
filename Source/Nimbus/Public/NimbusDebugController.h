#pragma once
#include "CoreMinimal.h"
#include "Engine/DebugCameraController.h"
#include "EDebugModeState.h"
#include "NimbusDebugController.generated.h"

class ANimbusDebugController;
class APlayerController;

UCLASS(Blueprintable)
class ANimbusDebugController : public ADebugCameraController {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStateChange, EDebugModeState, NewState);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnShowDebugMenu);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPause);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnHideDebugMenu);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnExit);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAttachToTarget);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnShowDebugMenu OnShowDebugMenu;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHideDebugMenu OnHideDebugMenu;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPause OnPause;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnExit OnExit;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStateChange OnStateChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAttachToTarget OnAttachToTarget;
    
    ANimbusDebugController();
    UFUNCTION(BlueprintCallable)
    static void StopDebugMode();
    
    UFUNCTION(BlueprintCallable)
    static ANimbusDebugController* StartDebugMode(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void SetYawAcceleration(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetState(EDebugModeState Value);
    
    UFUNCTION(BlueprintCallable)
    void SetSpeedScale(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetLookSensitivity(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetIsUsingFPSControls(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetIsSpeedBoostEnabled(bool Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetYawAcceleration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDebugModeState GetState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpeedScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLookSensitivity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsUsingFPSControls() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsSpeedBoostEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ANimbusDebugController* GetDebugController();
    
};

