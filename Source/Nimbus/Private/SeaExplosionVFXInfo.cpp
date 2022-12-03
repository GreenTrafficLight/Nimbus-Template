#include "SeaExplosionVFXInfo.h"

FSeaExplosionVFXInfo::FSeaExplosionVFXInfo() {
    this->ExplosionVFX = NULL;
    this->SpawnConditions = ESeaExplosionSpawnConditions::Hit;
    this->SpawnVFXSpeed = 0.00f;
    this->DeathVfxDuration = 0.00f;
    this->bAttach = false;
    this->AngleStandard = ESeaExplosionAngleStandard::World;
    this->StartingPoint = ESeaExplosionStartingPoint::SeaSurface;
    this->PlaySoundType = SoundChannelType::Explosion;
    this->Component = NULL;
    this->AttachToComponent = NULL;
}

