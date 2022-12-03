#include "BulletEmitter.h"

ABulletEmitter::ABulletEmitter() {
    this->ReferencingBulletWeapon = NULL;
    this->EmitterTemplate = NULL;
    this->Emitter = NULL;
    this->OwningAIGameObject = NULL;
    this->DamageStartDelaySeconds = 1.00f;
    this->DamageIntervalSeconds = 1.00f;
    this->DamageAreaLengthMeters = 1000.00f;
    this->DamageAreaRadiusMeters = 10.00f;
    this->bEmitterObjectRayCheck = false;
    this->EmitterCheckInterval = 0.20f;
}

