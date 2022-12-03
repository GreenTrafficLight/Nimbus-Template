#pragma once
#include "CoreMinimal.h"
#include "AIComponentBase.h"
#include "SurveillanceComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class NIMBUS_API USurveillanceComponent : public UAIComponentBase {
    GENERATED_BODY()
public:
    USurveillanceComponent();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerEngaged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerDetected();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDroneSpawned();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDroneDestroyed();
    
};

