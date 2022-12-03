#include "PilotDataDataTable.h"

FPilotDataDataTable::FPilotDataDataTable() {
    this->PilotDataID = 0;
    this->GameMode = EPilotDataGameMode::Campaign;
    this->Category = EPilotDataCategory::Ally;
    this->Age = 0;
    this->SortNumber = 0;
    this->LastAppearedMission = 0;
    this->bSameUnlockConditionAsAlly = false;
}

