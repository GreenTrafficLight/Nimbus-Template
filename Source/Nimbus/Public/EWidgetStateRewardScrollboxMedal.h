#pragma once
#include "CoreMinimal.h"
#include "EWidgetStateRewardScrollboxMedal.generated.h"

UENUM(BlueprintType)
enum class EWidgetStateRewardScrollboxMedal : uint8 {
    INIT,
    WAITINIT,
    WAITING,
    ANIMATING,
    DONE,
};

