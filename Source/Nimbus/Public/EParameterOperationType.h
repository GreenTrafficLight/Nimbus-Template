#pragma once
#include "CoreMinimal.h"
#include "EParameterOperationType.generated.h"

UENUM(BlueprintType)
enum class EParameterOperationType : uint8 {
    POT_OFFSET,
    POT_RATE,
    POT_MAX UMETA(Hidden),
};

