#pragma once
#include "CoreMinimal.h"
#include "ECameraType.generated.h"

UENUM(BlueprintType)
enum class ECameraType : uint8 {
    FIRST_PERSON,
    COCKPIT,
    THIRD_PERSON,
    REPLAY,
    MINIGAME_CAMERA,
    IMPACT_CAMERA,
    VR_CAMERA,
    NO_CAMERA,
};

