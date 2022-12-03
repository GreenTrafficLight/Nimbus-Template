#include "BasePersonCameraInputComponent.h"

UBasePersonCameraInputComponent::UBasePersonCameraInputComponent() {
    this->bUsedHighGTurnCurved = true;
    this->HighGTurnCurvedInterpolationRatio = NULL;
    this->HighGTurnCurvedQuatRatio = NULL;
    this->HighGTurnCurvedHeightRatio = NULL;
    this->RatioInTime = 0.80f;
    this->RatioOutTime = 1.50f;
}

