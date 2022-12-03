#pragma once
#include "CoreMinimal.h"
#include "ELaserWeaponSupplementaryType.generated.h"

UENUM(BlueprintType)
enum class ELaserWeaponSupplementaryType : uint8 {
    None,
    FollowingAngle,
    FollowingDistance,
    Swinging_Yaw,
    Swinging_Target,
    Swinging_Pitch,
};

