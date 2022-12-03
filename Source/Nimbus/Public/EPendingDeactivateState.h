#pragma once
#include "CoreMinimal.h"
#include "EPendingDeactivateState.generated.h"

UENUM(BlueprintType)
enum class EPendingDeactivateState : uint8 {
    None,
    WaitingPhaseEnd,
    WaitingDeactivate,
};

