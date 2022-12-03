#pragma once
#include "CoreMinimal.h"
#include "EPhaseStartNotificationType.generated.h"

UENUM(BlueprintType)
enum class EPhaseStartNotificationType : uint8 {
    Start,
    Updated,
    None,
};

