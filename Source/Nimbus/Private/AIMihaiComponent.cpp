#include "AIMihaiComponent.h"

void UAIMihaiComponent::StopRailgunCharge() {
}

void UAIMihaiComponent::StopRailgunAiming() {
}

void UAIMihaiComponent::StartRailgunCharge(float ChargeTime) {
}

void UAIMihaiComponent::StartRailgunAiming(float AimingTime) {
}

UAIMihaiComponent::UAIMihaiComponent() {
    this->PlayerPlane = NULL;
    this->AimingSoundHalfAngleMax = 90.00f;
    this->AimingSoundHalfAngleMin = 30.00f;
}

