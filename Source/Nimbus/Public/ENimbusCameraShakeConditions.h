#pragma once
#include "CoreMinimal.h"
#include "ENimbusCameraShakeConditions.generated.h"

UENUM(BlueprintType)
enum class ENimbusCameraShakeConditions : uint8 {
    None,
    Unconditional,
    GameObject,
    NotGameObject,
    AirObject,
    NotAirObject,
    GroundObject,
    MAX,
};

