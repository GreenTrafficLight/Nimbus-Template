#pragma once
#include "CoreMinimal.h"
#include "EImpactCameraObjectHitReaction.generated.h"

UENUM(BlueprintType)
enum class EImpactCameraObjectHitReaction : uint8 {
    None,
    FromGaze,
    Height,
    HitEnd,
    HitStop,
    HitFixed,
    FromGaze_Height,
};

