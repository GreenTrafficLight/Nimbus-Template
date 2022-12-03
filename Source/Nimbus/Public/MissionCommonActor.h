#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MissionCommonActor.generated.h"

class AMissionCommonActor;

UCLASS(Blueprintable)
class AMissionCommonActor : public AActor {
    GENERATED_BODY()
public:
    AMissionCommonActor();
    UFUNCTION(BlueprintCallable)
    static AMissionCommonActor* GetMissionCommonActor();
    
};

