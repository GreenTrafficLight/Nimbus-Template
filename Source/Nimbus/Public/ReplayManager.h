#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ReplayManager.generated.h"

class UWorld;

UCLASS(Blueprintable)
class NIMBUS_API UReplayManager : public UObject {
    GENERATED_BODY()
public:
    UReplayManager();
    UFUNCTION(BlueprintCallable)
    static bool IsIGCPlaybackAllowed(UWorld* World);
    
};

