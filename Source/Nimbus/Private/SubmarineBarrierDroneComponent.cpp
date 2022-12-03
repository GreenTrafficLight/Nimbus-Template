#include "SubmarineBarrierDroneComponent.h"

class AAIHeli;

void USubmarineBarrierDroneComponent::StartBarrierDroneDefenceBySocketInfo(const TArray<FBarrierDroneSocketInfo>& InBarrierDroneSocketInfoList) {
}

void USubmarineBarrierDroneComponent::StartBarrierDroneDefence(const TArray<AAIHeli*>& InBarrierDroneList) {
}

void USubmarineBarrierDroneComponent::OnRestored() {
}

void USubmarineBarrierDroneComponent::EndBarrierDroneDefence() {
}

USubmarineBarrierDroneComponent::USubmarineBarrierDroneComponent() {
    this->OwningGameObject = NULL;
    this->BarrierDroneOrbitMesh = NULL;
    this->BarrierDroneOrbitMeshLerpSpeed = 1.00f;
    this->BarrierDroneLerpSpeed = 1.00f;
    this->BarrierDroneMinAltitudeInMeters = 0.00f;
    this->BarrierDroneOrbitMeshComponent = NULL;
}

