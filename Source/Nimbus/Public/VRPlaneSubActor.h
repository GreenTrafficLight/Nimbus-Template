#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EUIKeys.h"
#include "VRPlaneSubActor.generated.h"

UCLASS(Blueprintable)
class NIMBUS_API AVRPlaneSubActor : public AActor {
    GENERATED_BODY()
public:
    AVRPlaneSubActor();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsKeyDown(const EUIKeys Key) const;
    
};

