#pragma once
#include "CoreMinimal.h"
#include "ETunnelEventType.generated.h"

UENUM(BlueprintType)
enum class ETunnelEventType : uint8 {
    Tunnel,
    SpaceElevator,
    CollisionReduction,
    TunnelCorrection,
    MAX,
};

