#include "CameraSettings.h"

FCameraSettings::FCameraSettings() {
    this->OrbitRadius = 0.00f;
    this->FieldOfView = 0.00f;
    this->FieldOfViewMin = 0.00f;
    this->FieldOfViewMax = 0.00f;
    this->ShakeScale = 0.00f;
    this->RelativeRotationRate = 0.00f;
    this->HorizonCameraAnim = NULL;
}

