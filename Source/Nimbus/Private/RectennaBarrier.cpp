#include "RectennaBarrier.h"

bool ARectennaBarrier::IsActiveBarrier() {
    return false;
}

float ARectennaBarrier::GetBarrierRippleSurfaceRadiusMeters() {
    return 0.0f;
}

float ARectennaBarrier::GetBarrierDamageRadiusMeters() {
    return 0.0f;
}

float ARectennaBarrier::GetBarrierChargeDuration() {
    return 0.0f;
}

float ARectennaBarrier::GetBarrierActiveDuration() {
    return 0.0f;
}

float ARectennaBarrier::BarrierEndOpacity() {
    return 0.0f;
}

ARectennaBarrier::ARectennaBarrier() {
    this->BarrierParticleActorClass = NULL;
    this->bBarrierParticleActorNotAttach = false;
    this->BarrierDamageParticleActorClass = NULL;
    this->BarrierDamageParticleSmallActorClass = NULL;
    this->BarrierDamageParticleSmallInterval = 0.20f;
    this->BarrierChargeDuration = 4.00f;
    this->BarrierChargeFinishSoundStartTime = 0.00f;
    this->BarrierActiveDuration = 2.00f;
    this->BarrierDamageToPlayer = 25.00f;
    this->BarrierDamageToOthers = 100.00f;
    this->BarrierFirstDamageInterval = 0.00f;
    this->BarrierDamageInterval = 1.00f;
    this->BarrierDamageRadiusMeters = 3000.00f;
    this->BarrierRippleSurfaceRadiusMeters = 2900.00f;
    this->BarrierEndFadeTime = 1.00f;
    this->bPassBullets = false;
    this->bNotifyInterceptEvent = false;
    this->bUesRingDamage = false;
    this->RingDamage = 20.00f;
    this->RingDamageInterval = 0.50f;
    this->RingDamageWidthThickness = 5.00f;
    this->RingDamageVerticalWidthThickness = 20.00f;
    this->RingStartLength = 50.00f;
    this->RingEndLength = 900.00f;
    this->bPlayStruckByLightning = false;
    this->RectennaChargeSoundEventName = TEXT("OBJ_M19_RECTENNA_CHARGE");
    this->RectennaChargeFinishSoundEventName = TEXT("OBJ_M19_RECTENNA_CHARGE_FINISH");
    this->RectennaExpansionSoundEventName = TEXT("OBJ_M19_RECTENNA_EXPANSION");
    this->RectennaBarrierSoundEventName = TEXT("OBJ_M19_RECTENNA_BARRIER");
    this->RectennaBarrierStopSoundEventName = TEXT("OBJ_M19_RECTENNA_BARRIER_Stop");
    this->RectennaDisappearedSoundEventName = TEXT("OBJ_M19_RECTENNA_DISAPPEAR");
    this->RectennaBarrierRTPCName = TEXT("Object_Rectena");
    this->RectennaBarrierHitSoundType = SoundChannelType::RectennaBarrierHit;
    this->BarrierParticleActor = NULL;
    this->BarrierSoundActor = NULL;
}

