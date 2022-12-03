#include "Missile.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/PointLightComponent.h"
#include "WeaponPassSoundComponent.h"


void AMissile::OnMissForceKill() {
}

int32 AMissile::GetTrueSkyQueryID() const {
    return 0;
}

AMissile::AMissile() {
    this->HiddenMissileMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Hidden Missile Mesh"));
    this->FireParticles = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Fire Particles"));
    this->bUseFireLight = false;
    this->FireLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("Fire Light"));
    this->FireLightIntensityCurves = NULL;
    this->TickDistanceUU = 40000.00f;
    this->MaxTickIntervalSeconds = 2.00f;
    this->FullEffectDistanceUU = 5000.00f;
    this->RibbonMaxSpawnPerUnit = 100.00f;
    this->RibbonMinSpawnPerUnit = 10.00f;
    this->DenseMaxSpawnPerUnit = 100.00f;
    this->DenseMinSpawnPerUnit = 10.00f;
    this->bUseRibbonCollectionForTrail = true;
    this->CollisionParticleImpactDistanceUU = 100.00f;
    this->CollisionParticleImpactElapsedTime = 10.00f;
    this->MissileCruisingSoundPlayEvent = NULL;
    this->MissileCruisingSoundStopEvent = NULL;
    this->HomingType = EHomingType::ACTIVE_RADAR;
    this->MaxHomingAngle = 56.00f;
    this->VeryEasy_MaxHomingAngle = 0.00f;
    this->MaxRotationAngle = 40.00f;
    this->VeryEasy_MaxRotationAngle = 0.00f;
    this->MaxHomingAngleNotCaptured = 0.00f;
    this->MaxRotationAngleNotCaptured = 0.00f;
    this->AccelerationDelayFromStart = 0.00f;
    this->MaxAngleForDelayedAcc = 45.00f;
    this->HomingDelayFromStart = 0.00f;
    this->ReducedHomingDuration = 0.00f;
    this->ReducedHomingRotationAngle = 0.00f;
    this->HomingReductionInCloud = 0.70f;
    this->HomingCloudUesTargetStatus = false;
    this->HomingCloudThreshold = 0.50f;
    this->bIsAntiShip = false;
    this->bShouldUseSeaSkimming = false;
    this->bShouldConformToTerrain = false;
    this->bShouldDetonateOnMiss = false;
    this->HomingLowerLimitAltitude = 0.00f;
    this->MaxRotationAngleDuringTopAttack = 0.00f;
    this->ProximityFuseDuration = 0.00f;
    this->bHasEncounteredCloud = false;
    this->SpeedMaximum = 0.00f;
    this->Acceleration = 0.00f;
    this->InitialDropSpeed = 0.00f;
    this->ProximityFuseRadiusSquared = 0.00f;
    this->VeryNearWarningRadiusSquared = 64000000.00f;
    this->NearWarningRadiusSquared = 400000000.00f;
    this->AltitudeAboveTarget = 1000.00f;
    this->DistanceFromTargetSquared = 64000000.00f;
    this->SpecialBehaviorType = EWeaponSpecialBehaviorType::None;
    this->HitType = EMissileHitType::AutoOptimization;
    this->IgnitionSoundEvent = NULL;
    this->DummyNumber = 0;
    this->MinTargetSwitchTime = 0.00f;
    this->MaxTargetSwitchTime = 0.00f;
    this->DistanceFromBody = 5000.00f;
    this->MinDistanceToFollowMainSquared = 36000000.00f;
    this->PassSound = CreateDefaultSubobject<UWeaponPassSoundComponent>(TEXT("Pass Sound"));
    this->bIsStealthMissile = false;
    this->WarningAlertUU = -10.00f;
    this->NaerWarningAlertUU = -10.00f;
    this->ShowMissileIndicatorUU = -10.00f;
    this->ShowMissileIndicatorBlinkUU = -10.00f;
    this->MinimapStartDisplayDistUU = -10.00f;
    this->bIsPlayingCruisingSound = false;
    this->bHasIgnited = false;
    this->TrailRibbonCollectionActor = NULL;
}

