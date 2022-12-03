#include "SubmarineMoveComponent.h"

void USubmarineMoveComponent::StartBreakDownProgress() {
}

void USubmarineMoveComponent::OnRestored() {
}

USubmarineMoveComponent::USubmarineMoveComponent() {
    this->SubmarineBodyMeshComponent = NULL;
    this->OwningActor = NULL;
    this->OwningGameObject = NULL;
    this->TransCurve = NULL;
    this->RotCurve = NULL;
    this->RailgunSkeletalMeshComponent = NULL;
    this->NoseLiftStartTransCurve = NULL;
    this->NoseLiftStartRotCurve = NULL;
    this->NoseLiftEndTransCurve = NULL;
    this->NoseLiftEndRotCurve = NULL;
    this->BreakDownDuration = 1.00f;
    this->BreakDownParameter1 = 1.00f;
    this->DiveTransCurve = NULL;
    this->DiveRotCurve = NULL;
    this->SurfaceTransCurve = NULL;
    this->SurfaceRotCurve = NULL;
    this->bTrailParticlesDebug = false;
    this->RailgunExtractDuration = 0.00f;
    this->RailgunBrokenDuration = 0.00f;
}

