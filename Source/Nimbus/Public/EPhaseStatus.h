#pragma once
#include "CoreMinimal.h"
#include "EPhaseStatus.generated.h"

UENUM(BlueprintType)
enum class EPhaseStatus : uint8 {
    NotStarted,
    InProgress,
    Failed,
    Successful,
};

