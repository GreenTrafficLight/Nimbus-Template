#pragma once
#include "CoreMinimal.h"
#include "EImpactCameraType.generated.h"

UENUM(BlueprintType)
enum class EImpactCameraType : uint8 {
    None,
    Name,
    EnemyDestruction,
    Kill,
    Missile,
    ScatterTracking,
    RocketLauncher,
    Bomb,
    UAV,
    MPBM,
    FAEB,
    ADMM,
    MSTM,
    PlayerDead,
};

