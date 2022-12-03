#pragma once
#include "CoreMinimal.h"
#include "MultiPlayerGameMode.h"
#include "TransitionGameMode.generated.h"

UCLASS(Blueprintable, NonTransient)
class NIMBUS_API ATransitionGameMode : public AMultiPlayerGameMode {
    GENERATED_BODY()
public:
    ATransitionGameMode();
};

