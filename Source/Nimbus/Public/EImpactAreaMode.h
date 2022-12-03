#pragma once
#include "CoreMinimal.h"
#include "EImpactAreaMode.generated.h"

UENUM(BlueprintType)
enum class EImpactAreaMode : uint8 {
    None,
    Expansion,
    Shrinking,
};

