#include "BTTask_Maneuver_CloudReaction.h"

UBTTask_Maneuver_CloudReaction::UBTTask_Maneuver_CloudReaction() {
    this->SearchCloudInterval = 1.50f;
    this->bShouldApproachCloud = false;
    this->bMinimumTurning = false;
    this->MinimumTurningAngleInDegree = 45.00f;
    this->bMaximumTurning = false;
    this->MaximumTurningAngleInDegree = 90.00f;
}

