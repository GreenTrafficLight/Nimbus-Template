#pragma once
#include "CoreMinimal.h"
#include "EMissionConditionType.generated.h"

UENUM(BlueprintType)
enum class EMissionConditionType : uint8 {
    None,
    MissionFailure,
    MissileLostTarget,
    TargetLockon,
    WeaponFired,
    ObjectDestroyed,
    ObjectDamaged,
};

