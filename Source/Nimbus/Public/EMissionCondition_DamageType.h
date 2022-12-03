#pragma once
#include "CoreMinimal.h"
#include "EMissionCondition_DamageType.generated.h"

UENUM(BlueprintType)
enum class EMissionCondition_DamageType : uint8 {
    None,
    Gun,
    Missile,
    EMissionCondition_MAX UMETA(Hidden),
};

