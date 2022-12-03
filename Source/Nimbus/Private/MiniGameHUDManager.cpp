#include "MiniGameHUDManager.h"

class AActor;

void UMiniGameHUDManager::OnReferencedActorEndPlayHandler(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

UMiniGameHUDManager::UMiniGameHUDManager() {
    this->LandingSettings = NULL;
    this->AerialRefuelingSettings = NULL;
}

