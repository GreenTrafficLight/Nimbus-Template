#pragma once
#include "CoreMinimal.h"
#include "EDebugCameraType.generated.h"

UENUM(BlueprintType)
enum class EDebugCameraType : uint8 {
    None,
    FollowPlane,
    Free,
    MovePlayer,
    SideTargetFollow,
    Side,
};

