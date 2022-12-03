#pragma once
#include "CoreMinimal.h"
#include "EMissionCondition_FailureType.generated.h"

UENUM(BlueprintType)
enum class EMissionCondition_FailureType : uint8 {
    None,
    Crashed,
    DestroyByEnemy,
    TimeUp,
    OutOfZone,
    FailObjective,
    EMissionCondition_MAX UMETA(Hidden),
};

