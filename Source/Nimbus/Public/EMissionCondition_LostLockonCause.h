#pragma once
#include "CoreMinimal.h"
#include "EMissionCondition_LostLockonCause.generated.h"

UENUM(BlueprintType)
enum class EMissionCondition_LostLockonCause : uint8 {
    None,
    OutOfRange,
    ByCloud,
    EMissionCondition_MAX UMETA(Hidden),
};

