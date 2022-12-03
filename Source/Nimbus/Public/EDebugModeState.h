#pragma once
#include "CoreMinimal.h"
#include "EDebugModeState.generated.h"

UENUM(BlueprintType)
enum class EDebugModeState : uint8 {
    DMS_INVALID,
    DMS_PHOTOTAKING,
    DMS_PLAYERMOVING,
    DMS_DEBUGMENU,
    DMS_MAX UMETA(Hidden),
};

