#include "MissionSetupFrameManager.h"

void UMissionSetupFrameManager::OnPostGarbageCollectHandler() {
}

UMissionSetupFrameManager::UMissionSetupFrameManager() {
    this->PauseManager = NULL;
    this->FadeManager = NULL;
}

