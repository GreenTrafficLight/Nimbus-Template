#include "AIPathComponent.h"

UAIPathComponent::UAIPathComponent() {
    this->OwningActor = NULL;
    this->OwningGameObject = NULL;
    this->OwningUnit = NULL;
    this->PathOwningActor = NULL;
    this->AIPath = NULL;
    this->SplineComponent = NULL;
    this->TransCurve = NULL;
    this->RotCurve = NULL;
}

