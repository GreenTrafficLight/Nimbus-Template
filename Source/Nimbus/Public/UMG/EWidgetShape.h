#pragma once
#include "CoreMinimal.h"
#include "EWidgetShape.generated.h"

UENUM(BlueprintType)
enum class EWidgetShape : uint8 {
    Quad,
    ThreePieceFolding,
    Curved3D,
};

