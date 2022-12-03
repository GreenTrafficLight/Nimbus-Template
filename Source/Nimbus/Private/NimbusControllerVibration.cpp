#include "NimbusControllerVibration.h"

void UNimbusControllerVibration::SetXBoxControllerVibrationScalar(float Scalar) {
}

void UNimbusControllerVibration::SetPSControllerVibrationScalar(float Scalar) {
}

UNimbusControllerVibration::UNimbusControllerVibration() {
    this->PlayerPlane = NULL;
    this->AfterburnerVibrationFadeTimeSeconds = 1.00f;
    this->PSVibrationScalar = 1.00f;
    this->XBoxVibrationScalar = 1.00f;
    this->PSGunFireVibrationInterval = 0.00f;
    this->XBoxGunFireVibrationInterval = 0.00f;
    this->ControllerVibrationSimulationMode = EControllerVibrationSimulationMode::NotSimulating;
}

