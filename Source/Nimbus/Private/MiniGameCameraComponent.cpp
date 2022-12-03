#include "MiniGameCameraComponent.h"

UMiniGameCameraComponent::UMiniGameCameraComponent() {
    this->PlayerPlane = NULL;
    this->CameraAnimArray.AddDefaulted(6);
    this->CameraAnimScaleArray.AddDefaulted(6);
    this->AnimInst = NULL;
    this->DummyCameraActor = NULL;
}

