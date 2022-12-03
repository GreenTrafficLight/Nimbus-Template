#include "ImpactCameraNextCameraData.h"

FImpactCameraNextCameraData::FImpactCameraNextCameraData() {
    this->NextCameraConditions = EImpactCameraTerminationCondition::None;
    this->Parameter_Float = 0.00f;
    this->ExecutableAir = false;
    this->ExecutableGround = false;
}

