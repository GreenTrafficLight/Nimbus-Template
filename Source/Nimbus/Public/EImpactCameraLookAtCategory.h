#pragma once
#include "CoreMinimal.h"
#include "EImpactCameraLookAtCategory.generated.h"

UENUM(BlueprintType)
enum class EImpactCameraLookAtCategory : uint8 {
    LookAtTarget,
    LookAtTarget_RollAnim,
    CameraAnimation,
    LookAtTargetAddCameraAnimation,
};

