#include "SubmarineSeaVFXInfo.h"

FSubmarineSeaVFXInfo::FSubmarineSeaVFXInfo() {
    this->Vfx = NULL;
    this->VFXDuration = 0.00f;
    this->bAttach = false;
    this->ReferenceAngle = ESubmarineSeaVFXReferenceAngle::World;
    this->StartingPoint = ESubmarineSeaVFXSpawnPoint::SeaSurface;
    this->PlaySoundType = SoundChannelType::Explosion;
    this->Component = NULL;
    this->AttachToComponent = NULL;
}

