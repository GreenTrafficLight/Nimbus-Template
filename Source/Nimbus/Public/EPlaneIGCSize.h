#pragma once
#include "CoreMinimal.h"
#include "EPlaneIGCSize.generated.h"

UENUM(BlueprintType)
enum class EPlaneIGCSize : uint8 {
    PIS_Small,
    PIS_Medium,
    PIS_Large,
    PIS_Giant,
    PIS_Special,
    PIS_Dark,
    PIS_ASFX,
    PIS_FA27,
    PIS_FA44,
    PIS_MAX UMETA(Hidden),
};

