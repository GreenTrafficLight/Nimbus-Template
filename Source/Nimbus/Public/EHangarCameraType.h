#pragma once
#include "CoreMinimal.h"
#include "EHangarCameraType.generated.h"

UENUM(BlueprintType)
enum class EHangarCameraType : uint8 {
    HCAM_STATIC,
    HCAM_PLANE,
    HCAM_WEAPON,
    HCAM_REVIEW,
    HCAM_SORTIE,
    HCAM_ACQUIRE,
    HCAM_EMPTY,
    HCAM_DEFAULT,
    HCAM_EXTERNAL,
    HCAM_MAX UMETA(Hidden),
};

