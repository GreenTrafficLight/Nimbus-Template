#include "MiniGameAerialRefuelingState.h"

void UMiniGameAerialRefuelingState::OnVisibilityChangedRefuelingAircraftHandler(bool bVisibility) {
}

void UMiniGameAerialRefuelingState::OnSuccessAerialRefuelingHandler() {
}

void UMiniGameAerialRefuelingState::OnFadeOutHandler(float Duration) {
}

UMiniGameAerialRefuelingState::UMiniGameAerialRefuelingState() {
    this->FadeManager = NULL;
    this->FadeSoundManager = NULL;
    this->CameraManager = NULL;
    this->PlayerManager = NULL;
    this->MiniMapManager = NULL;
    this->HUDManager = NULL;
    this->TimeManager = NULL;
    this->ScriptEventManager = NULL;
    this->PlayerPlane = NULL;
    this->Settings = NULL;
}

