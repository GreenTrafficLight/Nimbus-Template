#include "NimbusDebugController.h"

class APlayerController;
class ANimbusDebugController;

void ANimbusDebugController::StopDebugMode() {
}

ANimbusDebugController* ANimbusDebugController::StartDebugMode(APlayerController* PlayerController) {
    return NULL;
}

void ANimbusDebugController::SetYawAcceleration(float Value) {
}

void ANimbusDebugController::SetState(EDebugModeState Value) {
}

void ANimbusDebugController::SetSpeedScale(float Value) {
}

void ANimbusDebugController::SetLookSensitivity(float Value) {
}

void ANimbusDebugController::SetIsUsingFPSControls(bool Value) {
}

void ANimbusDebugController::SetIsSpeedBoostEnabled(bool Value) {
}

float ANimbusDebugController::GetYawAcceleration() const {
    return 0.0f;
}

EDebugModeState ANimbusDebugController::GetState() const {
    return EDebugModeState::DMS_INVALID;
}

float ANimbusDebugController::GetSpeedScale() const {
    return 0.0f;
}

float ANimbusDebugController::GetLookSensitivity() const {
    return 0.0f;
}

bool ANimbusDebugController::GetIsUsingFPSControls() const {
    return false;
}

bool ANimbusDebugController::GetIsSpeedBoostEnabled() const {
    return false;
}

ANimbusDebugController* ANimbusDebugController::GetDebugController() {
    return NULL;
}

ANimbusDebugController::ANimbusDebugController() {
}

