#include "NimbusReplayPlayTimeManager.h"

void UNimbusReplayPlayTimeManager::OnSystemStartFrameHandler(float DeltaTime) {
}

UNimbusReplayPlayTimeManager::UNimbusReplayPlayTimeManager() {
    this->PauseManager = NULL;
    this->WorldSettings = NULL;
}

