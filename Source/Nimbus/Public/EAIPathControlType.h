#pragma once
#include "CoreMinimal.h"
#include "EAIPathControlType.generated.h"

UENUM(BlueprintType)
enum class EAIPathControlType : uint8 {
    UsePathPoint,
    UseSpline,
    UseSplineAsPathPoint,
};

