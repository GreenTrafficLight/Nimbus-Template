#pragma once
#include "CoreMinimal.h"
#include "EContainerUpdateGroupDistance.generated.h"

UENUM(BlueprintType)
enum class EContainerUpdateGroupDistance : uint8 {
    Near,
    Mid,
    Far,
    Count,
};

