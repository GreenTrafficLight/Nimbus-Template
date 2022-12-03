#include "RefuelingInfo.h"

FRefuelingInfo::FRefuelingInfo() {
    this->bOverlaped = false;
    this->OverlapedTime = 0.00f;
    this->Distance = 0.00f;
    this->BackDistance = 0.00f;
    this->RightDistance = 0.00f;
    this->UpDistance = 0.00f;
    this->bBehind = false;
    this->JudgeRadius = 0.00f;
}

