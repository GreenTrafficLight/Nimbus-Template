#pragma once
#include "CoreMinimal.h"
#include "EMissionRule.generated.h"

UENUM(BlueprintType)
enum class EMissionRule : uint8 {
    BattleRoyal,
    TeamDeathMatch,
    Count,
    None,
};

