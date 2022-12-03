#include "BuildingDamagedVFXInfo.h"

FBuildingDamagedVFXInfo::FBuildingDamagedVFXInfo() {
    this->bShowWhenSocketHitsSurface = false;
    this->Delay = 0.00f;
    this->bShouldStayOnSurface = false;
    this->bShouldMoveOnSurface = false;
    this->DamagedVFX = NULL;
    this->ImpulseStrength = 0.00f;
    this->ImpulseRadius = 0.00f;
    this->Duration = 0.00f;
    this->bDestroyWhenOtherSocketHitsSurface = false;
    this->bPlayCameraShakeEnable = false;
    this->SpawnCameraShakeType = ENimbusCameraShakeType::None;
    this->bApplySeaSpray = false;
    this->SoundToPlayOnShowVFX = SoundChannelType::Explosion;
    this->Component = NULL;
}

