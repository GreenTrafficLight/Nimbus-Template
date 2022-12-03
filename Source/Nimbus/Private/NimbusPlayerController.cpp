#include "NimbusPlayerController.h"

void ANimbusPlayerController::UnpauseAllControllerVibrations() {
}

void ANimbusPlayerController::TogglePlayerDebugInfo() {
}

void ANimbusPlayerController::ToggleHUD() {
}

void ANimbusPlayerController::StopControllerVibrationTypes(EControllerVibrationType Type1, EControllerVibrationType Type2) {
}

void ANimbusPlayerController::StopControllerVibrationType(EControllerVibrationType Type) {
}

void ANimbusPlayerController::StopAllControllerVibrationImmediately() {
}


void ANimbusPlayerController::SetXBoxControllerVibrationScalar(float Scalar) {
}

void ANimbusPlayerController::SetPSControllerVibrationScalar(float Scalar) {
}

void ANimbusPlayerController::SetIsSkipIGC(bool bSkipIGC) {
}

void ANimbusPlayerController::SetControllerVibrationScales(EControllerVibrationType Type1, EControllerVibrationType Type2, float Scale) {
}

void ANimbusPlayerController::SetControllerVibrationScale(EControllerVibrationType Type, float Scale) {
}

void ANimbusPlayerController::PauseAllControllerVibrations() {
}


void ANimbusPlayerController::ControllerVibrationNotify_OnIGC(EControllerVibrationType Type, float Scale) {
}

void ANimbusPlayerController::ControllerVibrationNotify(EControllerVibrationType Type, float Scale) {
}

ANimbusPlayerController::ANimbusPlayerController() {
    this->bDisplayDebugInfo = false;
    this->ControllerVibrationClass = NULL;
    this->ControllerVibration = NULL;
}

