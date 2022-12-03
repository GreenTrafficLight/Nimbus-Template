#pragma once
#include "CoreMinimal.h"
#include "EMedalLinkedAttribute.generated.h"

UENUM(BlueprintType)
enum class EMedalLinkedAttribute : uint8 {
    EnemyKilled,
    Score,
    EnemyKilledByMachineGun,
    EnemyKilledByMissile,
    EnemyKilledByLaser,
    MissileAffectByFlare,
    FirstKillTimeInMs,
    LastKillTimeInMs,
    TargetSwitchCount,
    PlayerKilledCount,
    MachineGunBulletFired,
    NonGunWeaponFireCount,
    MissileFireCount,
    AssistScore,
    CloudEnemyKillCount,
    KillCountWithOthers,
    MissileEvadeCountByCloud,
    LongestNoShotDownDurationInMs,
    TotalDamageToAll,
    DamageCausedByLaser,
    AfterBurnerActiveDurationInSecond,
    StallFlyingDurationInSecond,
    NearDeathFlyingDurationInSecond,
    CloudFlyingDurationInSecond,
    AverageFlyingSpeedInMps,
    FlyingDistanceInMeter,
    AverageFlyingAltitudeInMeter,
    MachineGunHitAccuracy,
    WeaponHitAccuracy,
    ScorePerKill,
    bNoShotDown,
    bNoDamage,
    bUseUpAmmo,
    bKillEnemyAfterDead,
};

