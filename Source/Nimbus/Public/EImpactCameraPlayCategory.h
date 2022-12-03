#pragma once
#include "CoreMinimal.h"
#include "EImpactCameraPlayCategory.generated.h"

UENUM(BlueprintType)
enum class EImpactCameraPlayCategory : uint8 {
    None,
    WeaponTrackingCamera,
    PlayerDead,
    KillCamera,
    Name,
};

