#pragma once
#include "CoreMinimal.h"
#include "EImpactCameraTerminationCondition.generated.h"

UENUM(BlueprintType)
enum class EImpactCameraTerminationCondition : uint8 {
    None,
    WeaponDestroy,
    MissileHitTarget,
    MissileMiss,
    FocusObject1_2Distance,
    CameraTime,
    StartedSpawningWeapons,
    FocusObjectDeath,
    WeaponTargetDestroy,
};

