#include "UnlockSaveData.h"

FUnlockSaveData::FUnlockSaveData() {
    this->ID = 0;
    this->bIsActivated = false;
    this->Category = EMissionCategory::Campaign;
    this->ActionType = ECAActionType::Unassigned;
}

