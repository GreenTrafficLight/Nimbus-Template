#include "NimbusUILayerManager.h"

void UNimbusUILayerManager::OnLevelUnloded() {
}

void UNimbusUILayerManager::OnLevelLoaded() {
}

UNimbusUILayerManager::UNimbusUILayerManager() {
    this->TransitionDuration = 0.35f;
    this->MaxDisplayLayerCount = 3;
}

