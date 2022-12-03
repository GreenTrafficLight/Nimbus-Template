#include "SystemSaveData.h"

FSystemSaveData::FSystemSaveData() {
    this->bIsEulaAgreed = false;
    this->bIsMusicPlayerUnlocked = false;
    this->TutorialFlagMask = 0;
    this->WatchedStoreVersion = 0;
    this->TotalOfflinePlayTimeSec = 0;
    this->TotalOfflineMRPEarned = 0;
}

