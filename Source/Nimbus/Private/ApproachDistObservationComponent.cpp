#include "ApproachDistObservationComponent.h"

class AGameObject;

void UApproachDistObservationComponent::RemoveApproachGameObject(AGameObject* AddGameObject) {
}

bool UApproachDistObservationComponent::IsApproachGameObjectsAllDead() {
    return false;
}

float UApproachDistObservationComponent::GetRemainingDistanceMeter() {
    return 0.0f;
}

void UApproachDistObservationComponent::AddApproachGameObject(AGameObject* AddGameObject) {
}

UApproachDistObservationComponent::UApproachDistObservationComponent() {
    this->ApproachTarget = NULL;
    this->OwnerPlayer = NULL;
}

