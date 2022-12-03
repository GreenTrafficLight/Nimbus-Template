#pragma once
#include "CoreMinimal.h"
#include "ESubmarineNoseState.generated.h"

UENUM(BlueprintType)
enum class ESubmarineNoseState : uint8 {
    Normal,
    LiftProgress,
    Lift,
    DownProgress,
};

