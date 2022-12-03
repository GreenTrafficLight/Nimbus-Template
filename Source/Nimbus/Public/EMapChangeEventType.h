#pragma once
#include "CoreMinimal.h"
#include "EMapChangeEventType.generated.h"

UENUM(BlueprintType)
enum class EMapChangeEventType : uint8 {
    PreOpenTransitionMap,
    PreOpenTravelMap,
};

