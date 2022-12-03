#include "VRPlaneHealthWarningLight.h"

class APlayerPlane;

void AVRPlaneHealthWarningLight::SetPlayerPlane(APlayerPlane* Plane) {
}

AVRPlaneHealthWarningLight::AVRPlaneHealthWarningLight() {
    this->PlayerPlane = NULL;
    this->WarningLightName = TEXT("HealthWarning_Light");
    this->WarningLight = NULL;
    this->WarningMat = NULL;
}

