#pragma once
#include "CoreMinimal.h"
#include "ENimbusCameraShakeType.generated.h"

UENUM(BlueprintType)
enum class ENimbusCameraShakeType : uint8 {
    None,
    EnterAirCurrentCameraShake,
    InAirCurrentCameraShake,
    EnterCloudCameraShake,
    InCloudCurrentCameraShake,
    ExitCloudCameraShake,
    EnterSandCameraShake,
    InSandCurrentCameraShake,
    ExitSandCameraShake,
    Lightning,
    BulletDamage,
    MissileDamage,
    LaserDamage,
    EMLBulletDamage,
    RectennaBarrierDamage,
    HeliosDamage,
    PlaneCrashed,
    BombImpact,
    SmallBombImpact,
    EnemyExplosion,
    WeaponTracking,
    Explosion,
    GeneralPurposeS,
    GeneralPurposeM,
    GeneralPurposeL,
    LandingBase,
    TakeOffCarrier,
    LandingCarrier,
    ReplayCameraShakeLooping,
    HeliosBombImpact,
    HeliosBombImpactLoop,
    HeliosBombImpactTask,
    Test,
    MAX,
};

