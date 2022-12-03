#include "MonoEyeColorChangeComponent.h"

void UMonoEyeColorChangeComponent::OnRestored() {
}

UMonoEyeColorChangeComponent::UMonoEyeColorChangeComponent() {
    this->EmergencyDistanceMeter = 2500.00f;
    this->bDontReturnNormal = true;
    this->SearchInterval = 0.50f;
    this->TargetMeshName = TEXT("PilotMesh");
    this->MaterialElementIndex = 0;
    this->MonoEyeMaterial = NULL;
}

