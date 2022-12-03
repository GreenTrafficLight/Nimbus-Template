#pragma once
#include "CoreMinimal.h"
#include "GameObjectIterator.generated.h"

class UNimbusActorManager;

USTRUCT(BlueprintType)
struct FGameObjectIterator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNimbusActorManager* ActorManager;
    
public:
    NIMBUS_API FGameObjectIterator();
};

