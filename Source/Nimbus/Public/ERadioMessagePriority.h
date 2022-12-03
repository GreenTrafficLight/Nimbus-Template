#pragma once
#include "CoreMinimal.h"
#include "ERadioMessagePriority.generated.h"

UENUM(BlueprintType)
enum class ERadioMessagePriority : uint8 {
    RMP_AP,
    RMP_A,
    RMP_B,
    RMP_C,
    RMP_MAX UMETA(Hidden),
};

