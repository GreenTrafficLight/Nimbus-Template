#pragma once
#include "CoreMinimal.h"
#include "EMissionCondition_MiniGameDistanceType.generated.h"

UENUM(BlueprintType)
enum class EMissionCondition_MiniGameDistanceType : uint8 {
    None,
    Remaining_Inside,
    Remaining_Outside,
    EMissionCondition_MAX UMETA(Hidden),
};

