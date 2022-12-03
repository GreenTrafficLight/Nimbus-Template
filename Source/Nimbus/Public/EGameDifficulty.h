#pragma once
#include "CoreMinimal.h"
#include "EGameDifficulty.generated.h"

UENUM(BlueprintType)
enum class EGameDifficulty : uint8 {
    GD_EASY,
    GD_NORMAL,
    GD_HARD,
    GD_ACE,
    GD_FREE_FLIGHT,
    GD_MAX UMETA(Hidden),
};

