#include "MiniGameTakeoffState.h"

void UMiniGameTakeoffState::OnPlayerEndTakeoffHandler() {
}

void UMiniGameTakeoffState::OnPlayerBeginCatapultTakeoffHandler() {
}

void UMiniGameTakeoffState::OnFadeOutHandler(float Duration) {
}

UMiniGameTakeoffState::UMiniGameTakeoffState() {
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

