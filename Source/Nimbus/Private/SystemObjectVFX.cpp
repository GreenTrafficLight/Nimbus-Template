#include "SystemObjectVFX.h"



void ASystemObjectVFX::EnableVFX(bool bEnabled) {
}

ASystemObjectVFX::ASystemObjectVFX() {
    this->Scale = 1.00f;
    this->VFXTemplate = NULL;
    this->DecalTemplate = NULL;
    this->SoundEvent = NULL;
    this->ParticleSystemComponent = NULL;
    this->DecalComponent = NULL;
    this->PostProcessComponent = NULL;
    this->bSpawnLensEffectActor = false;
    this->LensEffectActorClass = NULL;
    this->LensEffectLifeTime = 0.00f;
    this->LensEffectActor = NULL;
    this->bAutoEnable = true;
}

