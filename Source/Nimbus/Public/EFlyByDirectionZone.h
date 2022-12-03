#pragma once
#include "CoreMinimal.h"
#include "EFlyByDirectionZone.generated.h"

UENUM(BlueprintType)
enum class EFlyByDirectionZone : uint8 {
    FRONT,
    SIDE,
    REAR,
    NONE,
};

