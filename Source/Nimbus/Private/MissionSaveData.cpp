#include "MissionSaveData.h"

FMissionSaveData::FMissionSaveData() {
    this->MissionID = 0;
    this->bIsDamaged = false;
    this->bIsUsedMissile = false;
    this->LastRank = EMissionRank::C;
    this->bIsMiniGameAccomplished = false;
}

