#pragma once
#include "CoreMinimal.h"
#include "EImpactCameraPostProcessCategory.generated.h"

UENUM(BlueprintType)
enum class EImpactCameraPostProcessCategory : uint8 {
    None,
    DepthOfFieldFocalDistance,
    DepthOfFieldScale,
};

