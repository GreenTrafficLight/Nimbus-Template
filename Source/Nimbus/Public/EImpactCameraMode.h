#pragma once
#include "CoreMinimal.h"
#include "EImpactCameraMode.generated.h"

UENUM(BlueprintType)
enum class EImpactCameraMode : uint8 {
    None,
    AllPlay,
    ConditionalPlay_High,
    ConditionalPlay_Low,
};

