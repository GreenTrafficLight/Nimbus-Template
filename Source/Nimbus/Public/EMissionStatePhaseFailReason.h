#pragma once
#include "CoreMinimal.h"
#include "EMissionStatePhaseFailReason.generated.h"

UENUM(BlueprintType)
enum class EMissionStatePhaseFailReason : uint8 {
    TimeOut,
    FailObjective,
};

