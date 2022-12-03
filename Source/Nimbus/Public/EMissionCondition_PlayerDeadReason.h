#pragma once
#include "CoreMinimal.h"
#include "EMissionCondition_PlayerDeadReason.generated.h"

UENUM(BlueprintType)
enum class EMissionCondition_PlayerDeadReason : uint8 {
    None,
    Crashed,
    DestroyByEnemy,
    EMissionCondition_MAX UMETA(Hidden),
};

