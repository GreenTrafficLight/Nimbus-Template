#pragma once
#include "CoreMinimal.h"
#include "EMiniGameState.generated.h"

UENUM(BlueprintType)
enum class EMiniGameState : uint8 {
    NotStarted,
    InProgress,
    Completed,
};

