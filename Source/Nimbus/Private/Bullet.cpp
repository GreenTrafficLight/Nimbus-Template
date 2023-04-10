#include "Bullet.h"
#include "WeaponMovementComponent.h"

ABullet::ABullet() {
	this->WeaponMovement = CreateDefaultSubobject<UWeaponMovementComponent>(TEXT("Bullet Movement"));
    this->EffectiveTime = -1.00f;
    this->bBulletRandomRollRotation = false;
    this->RandomInitialPosRangeFrontMin = 0;
    this->RandomInitialPosRangeFront = 0;
    this->RandomInitialPosRangeBlur = 0.00f;
    this->RayCastRadiusMetersCurve = NULL;
    this->RayCastRadiusMPMetersCurve = NULL;
    this->SpeedInitial = 0.00f;
    this->GravitationalAcceleration = 98.00f;
    this->RayCastRadius = 0.00f;
    this->RayCastRadiusMP = 0.00f;
    this->HitType = EBulletHitType::AutoOptimization;
    this->RayCastRadiusToNotGameObject_UU = 2.00f;
    this->MuzzleFlashParticle = NULL;
    this->OnLocalPlayerPlaneCollisionParticle = NULL;
    this->OnOtherPlaneCollisionParticle = NULL;
    this->OnOtherPlaneCollisionParticleForDebris = NULL;
}

