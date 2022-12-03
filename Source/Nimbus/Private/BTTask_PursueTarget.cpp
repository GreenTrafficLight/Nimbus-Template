#include "BTTask_PursueTarget.h"

UBTTask_PursueTarget::UBTTask_PursueTarget() {
    this->ManeuverTime = 0.00f;
    this->ProjectAheadTime = 1.00f;
    this->bLeadPoint = false;
    this->AlignmentDistanceInMeters = 500.00f;
    this->AlignmentAngle = 20.00f;
    this->bCanLoseOfSight = false;
    this->InRangeFOV = 120.00f;
    this->CheckSightInterval = 3.00f;
    this->MaxSpecDurationTime = 4.00f;
    this->bAvoidHeadOn = false;
    this->HeadOnAvoidanceStartAngle = 60.00f;
    this->HeadOnAvoidanceStartDistance = 3000.00f;
    this->bDisableKDSSelection = false;
    this->bAbortIfKDSIsEnabled = false;
}

