#include "CameraInputComponent.h"

UCameraInputComponent::UCameraInputComponent() {
    this->VerticalLimitMax = 90.00f;
    this->VerticalLimitMin = -90.00f;
    this->HorizontalLimit = 180.00f;
    this->TimeToTarget = 0.50f;
    this->bEnableZoom = false;
    this->ZoomInFovAngle = 90.00f;
    this->ZoomInDuration = 2.00f;
    this->TargetSelector = NULL;
    this->SelectedTarget = NULL;
    this->PlayerPlane = NULL;
    this->FocusTarget = NULL;
}

