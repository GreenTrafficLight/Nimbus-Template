#include "ExplosiveWeapon.h"


void AExplosiveWeapon::OnMovementReportMiss() {
}

void AExplosiveWeapon::InformTargetBeingAttacked(bool bIsAttacked) {
}

AExplosiveWeapon::AExplosiveWeapon() {
    this->ImpactRadius = 0.00f;
    this->ExplosionRadius = 0.00f;
    this->AreaOfEffectDamage = 0.00f;
    this->DamageDelay = 0.00f;
    this->bDamageDelaySpread = false;
    this->DamageDelaySpreadSpeed = 100.00f;
    this->InitialSpeed = 0.00f;
    this->VeryEasy_InitialSpeed = 0.00f;
    this->IgnitionInitialSpeed = 0.00f;
    this->OverrideExternalVelocitySpeed = 0.00f;
    this->FreefallAcceleration = 98.00f;
    this->FreefallRotation = 0.00f;
    this->OnAirExplosionParticles = NULL;
    this->OnCollisionParticlesDestroyedTarget = NULL;
    this->LockonHeight = 0.00f;
}

