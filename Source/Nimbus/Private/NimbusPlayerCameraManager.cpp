#include "NimbusPlayerCameraManager.h"
#include "Components/SceneComponent.h"

void ANimbusPlayerCameraManager::TestLoopCameraShakePlayAddScale(float inScale) {
}

void ANimbusPlayerCameraManager::TestLoopCameraShakePlay() {
}

ANimbusPlayerCameraManager::ANimbusPlayerCameraManager() {
    this->NimbusCameraShakeClass = NULL;
    this->RestrictionNearClipByDistanceCurve = NULL;
    this->AdjustNearClipByFovCurve = NULL;
    this->bNotTouchNearClip = false;
    this->bAlwaysResetNearClip = false;
    this->bDebugIntermittentCameraShake = false;
    this->DebugIntermittentCameraShakeType = ENimbusCameraShakeType::GeneralPurposeL;
    this->DebugIntermittentCameraShakeInterval = 0.20f;
    this->NimbusCameraShakeParameter = NULL;
    this->ParticleAttachComponent = CreateDefaultSubobject<USceneComponent>(TEXT("ParticleAttachComponent"));
}

