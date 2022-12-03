#pragma once
#include "CoreMinimal.h"
#include "EMissionEndReason.generated.h"

UENUM(BlueprintType)
enum class EMissionEndReason : uint8 {
    Successful,
    PlayerDead,
    OutOfCombatZone,
    TimeOut,
    FailPhaseObjective,
};

