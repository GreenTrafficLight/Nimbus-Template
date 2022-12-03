#include "MiniGameLandingState.h"

void UMiniGameLandingState::OnPlayerEndLandingHandler() {
}

void UMiniGameLandingState::OnFadeOutHandler(float Duration) {
}

UMiniGameLandingState::UMiniGameLandingState() {
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

