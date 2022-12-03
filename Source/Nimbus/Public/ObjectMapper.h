#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ObjectMapper.generated.h"

UCLASS(Blueprintable)
class NIMBUS_API AObjectMapper : public AActor {
    GENERATED_BODY()
public:
    AObjectMapper();
protected:
    UFUNCTION(BlueprintCallable)
    void OnPreRestartPhaseEvent();
    
    UFUNCTION(BlueprintCallable)
    void OnCombatZoneUpdatedEvent();
    
};

