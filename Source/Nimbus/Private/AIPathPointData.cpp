#include "AIPathPointData.h"

FAIPathPointData::FAIPathPointData() {
    this->Option = 0;
    this->Speed = 0.00f;
    this->Acceleration = 0.00f;
    this->RotationSpeed = 0.00f;
    this->Radius = 0.00f;
    this->SnapSetting = EAIPathMovingActorSnap::ObjectSetting;
}

