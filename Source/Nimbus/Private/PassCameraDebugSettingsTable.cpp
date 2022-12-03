#include "PassCameraDebugSettingsTable.h"

FPassCameraDebugSettingsTable::FPassCameraDebugSettingsTable() {
    this->bDebugDrawCollisionRadius = false;
    this->bDebugDrawMultiTargets = false;
    this->bDebugDrawGroundMode = false;
    this->bDebugDrawTargetLocation = false;
    this->bDebugWeaponTarget = false;
    this->bDebugPassThrough = false;
    this->DebugNodeRadius = 0.00f;
    this->DebugTimeDilation = 0.00f;
}

