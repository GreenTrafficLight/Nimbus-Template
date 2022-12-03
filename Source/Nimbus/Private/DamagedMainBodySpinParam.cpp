#include "DamagedMainBodySpinParam.h"

UDamagedMainBodySpinParam::UDamagedMainBodySpinParam() {
    this->Delay = 0.00f;
    this->RollMin = 3.00f;
    this->RollRandom = 360.00f;
    this->RollDamping = 1.00f;
    this->bFacingDown = false;
    this->PitchTime = 2.00f;
    this->PitchBase = 0.00f;
    this->PitchDamping = 0.70f;
    this->PitchRandom = 20.00f;
    this->YawTime = 5.00f;
    this->YawRandom = 0.00f;
    this->YawDamping = 0.70f;
    this->Gravity = 98.00f;
    this->GravityTime = 1.00f;
    this->BarabaraTime = 1.00f;
    this->AirResistance = 0.95f;
    this->WaterResistance = 0.00f;
    this->DivideWingRollSpeed1 = 0.00f;
    this->DivideWingRollTime1 = 1.45f;
    this->DivideWingRollSpeed2 = 0.00f;
    this->DivideWingRollTime2 = 1.97f;
    this->TimeToLive = 5.00f;
    this->TimeToLiveForMultiPlayer = 2.00f;
}

