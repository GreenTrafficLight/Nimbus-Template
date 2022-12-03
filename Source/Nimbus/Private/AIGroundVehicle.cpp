#include "AIGroundVehicle.h"

void AAIGroundVehicle::SubmarineSurface() {
}

void AAIGroundVehicle::SubmarineStartNoseLift() {
}

void AAIGroundVehicle::SubmarineRailgunStored() {
}

void AAIGroundVehicle::SubmarineRailgunExtract() {
}

void AAIGroundVehicle::SubmarineRailgunDown() {
}

void AAIGroundVehicle::SubmarineRailgunBroken() {
}

void AAIGroundVehicle::SubmarineRailgunAttack() {
}

void AAIGroundVehicle::SubmarineForcedUnderWater() {
}

void AAIGroundVehicle::SubmarineForcedOnWater() {
}

void AAIGroundVehicle::SubmarineEndNoseLift() {
}

void AAIGroundVehicle::SubmarineDiving() {
}

void AAIGroundVehicle::SetLocationAboveGround() {
}

AAIGroundVehicle::AAIGroundVehicle() {
    this->bLargeShip = false;
    this->bKeepOnGround = true;
    this->RootHeight = 0.00f;
    this->MaxGroundRotateAngle = 60.00f;
    this->bCanMove = true;
    this->MaximumSpeed = 166.67f;
    this->Acceleration = 100.00f;
    this->RotationSpeed = 90.00f;
    this->ReachDistance = 50.00f;
    this->ArriveDistance = 500.00f;
    this->bIsPropeller = false;
    this->PropellerAnimRateChange = 1.00f;
    this->PropellerCurrentAnimRate = 0.30f;
    this->PropellerTargetAnimRate = 0.30f;
    this->PropellerMeshComponent = NULL;
    this->VFXTickMinDistanceUU = 35000.00f;
    this->TrailVFXTickMinDistanceUU = 35000.00f;
    this->GroundCheckMinInterval = 0.00f;
    this->GroundCheckMaxInterval = 0.00f;
    this->SubmarineMoveComponent = NULL;
    this->TrailParticleComponent = NULL;
    this->bShootAppearanceAngle = true;
}

