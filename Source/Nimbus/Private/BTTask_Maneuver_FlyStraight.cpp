#include "BTTask_Maneuver_FlyStraight.h"

UBTTask_Maneuver_FlyStraight::UBTTask_Maneuver_FlyStraight() {
    this->ManeuverTime = 3.00f;
    this->ManeuverSpeedType = EManeuverSpeedType::SPD_CRUISE;
    this->ManeuverSpeedConstant = 600.00f;
    this->ManeuverSpeedPercent = 100.00f;
    this->ManeuverSpeedRelative = 0.00f;
    this->bRandomSpeedValueSignFlip = false;
}

