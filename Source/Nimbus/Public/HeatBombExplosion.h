#pragma once
#include "CoreMinimal.h"
#include "Explosion.h"
#include "HeatBombExplosion.generated.h"

UCLASS(Blueprintable)
class NIMBUS_API AHeatBombExplosion : public AExplosion {
    GENERATED_BODY()
public:
    AHeatBombExplosion();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnImpactResponse();
    
};

