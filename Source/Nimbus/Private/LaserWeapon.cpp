#include "LaserWeapon.h"

ALaserWeapon::ALaserWeapon() {
    this->MoveStartTime = 1.00f;
    this->DeviationAngle = 10.00f;
    this->WeaponSupplementaryType = ELaserWeaponSupplementaryType::None;
    this->SupplementalAngleSpeedCurve = NULL;
    this->SupplementalDistanceSpeedCurve = NULL;
    this->RangeMovementMax_Yaw = 0.00f;
    this->RangeMovementMin_Yaw = 0.00f;
    this->RangeMovementBassOffSetPitch = 32.00f;
    this->RangeMovementAngle = 170.00f;
}

