#include "Explosion.h"

AExplosion::AExplosion() {
    this->DamageIntervalSeconds = 0.00f;
    this->DamageDurationSeconds = 0.00f;
    this->bPlayShockwaveCameraShake = false;
    this->PlayShockwaveCameraShakeType = ENimbusCameraShakeType::Explosion;
    this->ShockwaveCameraShakeScaleCurve = NULL;
    this->DamageRadiusUUSquared = 16000000.00f;
    this->bDamageToAir = true;
    this->bDamageToGround = true;
    this->bHitJudgmentCylinder = false;
    this->ExplosionSoundChannelType = SoundChannelType::None;
}

