#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EDebugModeState.h"
#include "Engine/EngineTypes.h"
#include "PlayerHUDModeManager.generated.h"

class ANimbusHUD;
class ANimbusWorldSettings;
class AActor;
class AMission;
class ANimbusEventParser;

UCLASS(Blueprintable)
class UPlayerHUDModeManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ANimbusWorldSettings* WorldSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ANimbusHUD* NimbusHUD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMission* Mission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ANimbusEventParser* EventParser;
    
public:
    UPlayerHUDModeManager();
private:
    UFUNCTION(BlueprintCallable)
    void OnTransitionToMiniGameHandler(bool bIsTransitingIn);
    
    UFUNCTION()
    void OnReferencedActorEndPlayHandler(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
    UFUNCTION(BlueprintCallable)
    void OnPreStartMiniGamePhaseHandler(bool bIsRetry);
    
    UFUNCTION(BlueprintCallable)
    void OnPreRestartPhaseHandler();
    
    UFUNCTION(BlueprintCallable)
    void OnMultiAbortHandler();
    
    UFUNCTION(BlueprintCallable)
    void OnDebugStateChangeHandler(EDebugModeState State);
    
};

