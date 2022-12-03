#pragma once
#include "CoreMinimal.h"
#include "EMissionCondition_SystemMessageType.generated.h"

UENUM(BlueprintType)
enum class EMissionCondition_SystemMessageType : uint8 {
    None,
    OutOfCombatZone,
    Stall,
    EMissionCondition_MAX UMETA(Hidden),
};

