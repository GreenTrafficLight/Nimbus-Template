#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ENimbusSoundType.h"
#include "MissionFadeSoundManager.generated.h"

class UNimbusFadeManager;

UCLASS(Blueprintable)
class UMissionFadeSoundManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNimbusFadeManager* FadeManager;
    
public:
    UMissionFadeSoundManager();
private:
    UFUNCTION(BlueprintCallable)
    void OnPreUnpauseBusHandler(ENimbusSoundType BusType);
    
    UFUNCTION(BlueprintCallable)
    void OnPreStopBusHandler(ENimbusSoundType BusType);
    
    UFUNCTION(BlueprintCallable)
    void OnPrePauseBusHandler(ENimbusSoundType BusType);
    
    UFUNCTION(BlueprintCallable)
    void OnPostStopBusHandler(ENimbusSoundType BusType);
    
    UFUNCTION(BlueprintCallable)
    void OnFadeOutHandler(float Duration);
    
    UFUNCTION(BlueprintCallable)
    void OnFadeInHandler(float Duration);
    
    UFUNCTION(BlueprintCallable)
    void OnFadedOutHandler();
    
    UFUNCTION(BlueprintCallable)
    void OnFadedInHandler();
    
};

