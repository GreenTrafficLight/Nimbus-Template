#include "KillStats.h"

FKillStats::FKillStats() {
    this->KillScore = 0;
    this->KillTime = 0.00f;
    this->bIsAir = false;
    this->KillCategory = EGameObjectCategory::Category_None;
    this->KillSubCategory = EGameObjectSubCategory::SubCategory_None;
    this->KillPilotDataID = 0;
    this->KillWeaponID = EWeaponID::WID_mg;
}

