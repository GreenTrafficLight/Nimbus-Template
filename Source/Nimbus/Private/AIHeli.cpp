#include "AIHeli.h"

bool AAIHeli::IsEnabledRotorRotation() const {
    return false;
}

void AAIHeli::EnableRotorRotation(bool bEnable, float InDelayTime) {
}

void AAIHeli::DroneSelfDestruct() {
}

void AAIHeli::DroneReturn() {
}

AAIHeli::AAIHeli() {
    this->RootHeight = 0.00f;
    this->MaxGroundRotateAngle = 60.00f;
    this->MinimumSpeed = 0.00f;
    this->MaximumSpeed = 0.00f;
    this->MaxRotationSpeed = 94.20f;
    this->MaxAcceleration = 0.00f;
    this->MinimumHeight = 0.00f;
    this->VerticalSpeed = 100.00f;
    this->RotorParentMeshComponent = NULL;
    this->ParkedOnlyRotorMesh = NULL;
    this->bIsInertialMovement = true;
    this->GroundCheckMinInterval = 0.30f;
    this->GroundCheckMaxInterval = 0.40f;
    this->RandAttackMoveTargetDelayMin = 6.00f;
    this->RandAttackMoveTargetDelayMax = 10.00f;
    this->HoveringAttackTargetDist = 2000.00f;
    this->RandAttackTargetDistModifier = 50.00f;
    this->RandAttackTargetDeclinationX = 70.00f;
    this->RandAttackTargetDeclinationXModifer = 5.00f;
    this->RandAttackTargetDeclinationZModifer = 40.00f;
    this->VariableWingMinSpeedKmph = 0.00f;
    this->TrackingMaxAngle = 20.00f;
    this->DroneSelfDestructAirResistance = 0.00f;
    this->DroneSelfDestructGravity = 0.00f;
    this->DroneSeaExplosionVFX = NULL;
    this->DroneOtherExplosionVFX = NULL;
    this->DroneReturnModeAirResistance = 0.00f;
    this->DroneReturnModeGravity = 0.00f;
    this->DroneReturnModeVFX = NULL;
    this->DroneExplosionSpawnVFX = NULL;
}

