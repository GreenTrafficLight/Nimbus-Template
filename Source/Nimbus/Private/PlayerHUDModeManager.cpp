#include "PlayerHUDModeManager.h"

class AActor;

void UPlayerHUDModeManager::OnTransitionToMiniGameHandler(bool bIsTransitingIn) {
}

void UPlayerHUDModeManager::OnReferencedActorEndPlayHandler(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

void UPlayerHUDModeManager::OnPreStartMiniGamePhaseHandler(bool bIsRetry) {
}

void UPlayerHUDModeManager::OnPreRestartPhaseHandler() {
}

void UPlayerHUDModeManager::OnMultiAbortHandler() {
}

void UPlayerHUDModeManager::OnDebugStateChangeHandler(EDebugModeState State) {
}

UPlayerHUDModeManager::UPlayerHUDModeManager() {
    this->WorldSettings = NULL;
    this->NimbusHUD = NULL;
    this->Mission = NULL;
    this->EventParser = NULL;
}

