#include "AttachedInterceptorWeapon.h"

AAttachedInterceptorWeapon::AAttachedInterceptorWeapon() {
    this->InterceptDistanceSquared = 3600000000.00f;
    this->InterceptAngle = 0.00f;
    this->InterceptFireDuration = 0.00f;
    this->WeaponInterceptorParticleSystem = NULL;
    this->SearchType = EAttachedInterceptorWeaponSearchType::Relative;
    this->CIWSOneShotSoundEvent = NULL;
    this->bPrediction = false;
    this->BulletSpeedKmphForPrediction = 1500.00f;
    this->MissileRefCountLimit = 0;
    this->bIgnorePlayerMissileHomingToOneself = false;
    this->bIgnoreSeaSkimmingMissile = false;
    this->IgnoreSeaSkimmingMissile_AltitudeInMeters = 30.00f;
    this->Emitter = NULL;
    this->OwningAIGameObject = NULL;
}

