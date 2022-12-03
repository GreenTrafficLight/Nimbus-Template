#include "AITurnToTargetComponent.h"

class AGameObject;

void UAITurnToTargetComponent::TurnToOriginal() {
}

bool UAITurnToTargetComponent::SetTurnToTarget(AGameObject* TargetToTurnTo) {
    return false;
}

bool UAITurnToTargetComponent::SetTurnToLocation(const FVector& LocationToTurnTo) {
    return false;
}

bool UAITurnToTargetComponent::SetTurnToDirection(const FVector& DirectionToTurnTo) {
    return false;
}

void UAITurnToTargetComponent::PerformTargetSweep(AGameObject* Target) {
}

void UAITurnToTargetComponent::PerformCustomSweep(const FVector& StartDirection, const FVector& EndDirection, float NewStayAtStartDuration, float NewStayAtEndDuration, float NewTurnRateMultiplier, bool bSweepLongerDirection) {
}

bool UAITurnToTargetComponent::IsSweeping() const {
    return false;
}

bool UAITurnToTargetComponent::IsStartingSweep() const {
    return false;
}

bool UAITurnToTargetComponent::HasCompletedTurning() const {
    return false;
}

FTransform UAITurnToTargetComponent::GetYawBoneTransform() const {
    return FTransform{};
}

FVector UAITurnToTargetComponent::GetTurnToDirection() {
    return FVector{};
}

FRotator UAITurnToTargetComponent::GetTurnRotation() {
    return FRotator{};
}

FVector UAITurnToTargetComponent::GetTurnForwardVector() {
    return FVector{};
}

FTransform UAITurnToTargetComponent::GetPitchBoneTransform() const {
    return FTransform{};
}

UAITurnToTargetComponent::UAITurnToTargetComponent() {
    this->bRegulateTick = true;
    this->MinRegulateTickDistanceUU = 40000.00f;
    this->MaxRegulateTickDistanceUU = 80000.00f;
    this->MinRegulateTickInterval = 2.00f;
    this->MaxRegulateTickInterval = 8.00f;
    this->PitchRate = 15.00f;
    this->PitchAngleOffsetMin = -30.00f;
    this->PitchAngleOffsetMax = 30.00f;
    this->YawRate = 15.00f;
    this->YawAngleOffsetMin = -180.00f;
    this->YawAngleOffsetMax = 180.00f;
    this->VerticalAngleOffset = 0.00f;
    this->AngleDifferenceThreshold = 0.00f;
    this->bAttacksWithSweep = false;
    this->MinAttackInterval = 0.00f;
    this->MaxAttackInterval = 0.00f;
    this->StartDirectionOffset = 0.00f;
    this->EndDirectionOffset = 0.00f;
    this->StayAtStartDuration = 0.00f;
    this->StayAtEndDuration = 0.00f;
    this->TurnRateMultiplier = 1.00f;
    this->bSetOriginalRotationToParentRotation = false;
    this->YawRate_TurningToOriginalRotation = 0.00f;
    this->TurnToTarget = NULL;
    this->ObjectToTurn = NULL;
    this->PoseableMeshToTurn = NULL;
    this->SkeletalMeshToTurn = NULL;
    this->SkinnedMeshToTurn = NULL;
    this->SweepTarget = NULL;
}

