#pragma once
#include "CoreMinimal.h"
#include "EEnemySearchPriority.generated.h"

UENUM(BlueprintType)
enum class EEnemySearchPriority : uint8 {
    Default,
    AIFirst,
    AIOnly,
    AINonTGT,
    AINonTGTFirst,
    PlayerFirst,
    PlayerOnly,
    TargetFirst,
    TargetOrNearbyPlayer,
};

