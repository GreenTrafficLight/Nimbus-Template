#include "GroundVehicleTrailVFXComponent.h"

void UGroundVehicleTrailVFXComponent::OnRestored() {
}

void UGroundVehicleTrailVFXComponent::OnOwnerVisibilityChanged(bool bVisibility) {
}

UGroundVehicleTrailVFXComponent::UGroundVehicleTrailVFXComponent() {
    this->OwingGameObject = NULL;
    this->Template_Sand = NULL;
}

