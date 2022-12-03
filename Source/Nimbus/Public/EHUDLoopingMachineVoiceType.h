#pragma once
#include "CoreMinimal.h"
#include "EHUDLoopingMachineVoiceType.generated.h"

UENUM(BlueprintType)
enum class EHUDLoopingMachineVoiceType : uint8 {
    CAUTION,
    ICING,
    PULL_UP,
    STALL,
    MISSILE_ALERT,
    COUNT,
    NONE,
};

