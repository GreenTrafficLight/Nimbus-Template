#include "DamagedVFXInfo.h"

FDamagedVFXInfo::FDamagedVFXInfo() {
    this->DamagedVFX = NULL;
    this->bIsWorldSpace = false;
    this->bShouldSnapToSurface = false;
    this->bLockZAxis = false;
    this->bIgnoreRotation = false;
    this->DeathVfxDelay = 0.00f;
    this->bAddRandomDelay = false;
    this->RandomMin = 0.00f;
    this->RandomMax = 0.00f;
    this->DeathVfxDuration = 0.00f;
    this->Component = NULL;
    this->AttachToComponent = NULL;
    this->bPlayCameraShake = false;
    this->SpawnShakeType = ENimbusCameraShakeType::None;
}

