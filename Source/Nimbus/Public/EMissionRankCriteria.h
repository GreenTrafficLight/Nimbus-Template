#pragma once
#include "CoreMinimal.h"
#include "EMissionRankCriteria.generated.h"

UENUM(BlueprintType)
enum class EMissionRankCriteria : uint8 {
    ScoreEarned,
    TimeUsed,
    DefendedTargetHealth,
};

