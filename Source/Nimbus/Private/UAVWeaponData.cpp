#include "UAVWeaponData.h"

FUAVWeaponData::FUAVWeaponData() {
    this->SpawnWeaponClass = NULL;
    this->ShotRange = 0.00f;
    this->ShotIntervalTime = 0.00f;
    this->DeviationShootingCurve = NULL;
    this->ShootingPositionOffsetCurve = NULL;
    this->DeviationShootingCurve_Ground = NULL;
    this->ShootingPositionOffsetCurve_Ground = NULL;
    this->bShootingPositionOffset_OrientationRandom = false;
}

