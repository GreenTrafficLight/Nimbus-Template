#include "MissionConditionData.h"

FMissionConditionData::FMissionConditionData() {
    this->ConditionType = EMissionConditionType::None;
    this->LifeTime = 0.00f;
    this->Int1 = 0;
    this->Int2 = 0;
    this->Float1 = 0.00f;
    this->Float2 = 0.00f;
    this->Object1 = NULL;
    this->Object2 = NULL;
    this->Weapon = NULL;
}

