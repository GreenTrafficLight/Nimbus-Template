#pragma once
#include "CoreMinimal.h"
#include "ESearchLightTargetPriority.generated.h"

UENUM(BlueprintType)
enum class ESearchLightTargetPriority : uint8 {
    All,
    Player,
    Ally,
};

