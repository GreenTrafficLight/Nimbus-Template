#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/EngineTypes.h"
#include "MiniGameMiniMapManager.generated.h"

class AActor;

UCLASS(Blueprintable)
class UMiniGameMiniMapManager : public UObject {
    GENERATED_BODY()
public:
    UMiniGameMiniMapManager();
private:
    UFUNCTION()
    void OnReferencedActorEndPlayHandler(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
};

