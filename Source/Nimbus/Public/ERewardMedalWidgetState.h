#pragma once
#include "CoreMinimal.h"
#include "ERewardMedalWidgetState.generated.h"

UENUM(BlueprintType)
enum class ERewardMedalWidgetState : uint8 {
    WAITING,
    ANIMATING,
    DONE,
};

