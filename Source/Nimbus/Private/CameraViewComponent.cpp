#include "CameraViewComponent.h"

class UCameraComponent;
class UCameraInputComponent;

void UCameraViewComponent::SwitchToThirdPersonView() {
}

void UCameraViewComponent::SwitchToMiniGameView(EMiniGameCameraType MiniGameCameraType) {
}

void UCameraViewComponent::SwitchToFirstPersonView() {
}

void UCameraViewComponent::SwitchToCockpitView() {
}

void UCameraViewComponent::OnIGCStart() {
}

void UCameraViewComponent::OnIGCEnd() {
}

void UCameraViewComponent::InitializeCameras(UCameraComponent* FirstPersonCam, UCameraComponent* CockpitCam, UCameraComponent* ThirdPersonCam, UCameraComponent* MiniGameCam, UCameraInputComponent* FirstPersonCamInput, UCameraInputComponent* CockpitCamInput, UCameraInputComponent* ThirdPersonCamInput) {
}

ECameraType UCameraViewComponent::GetCurrentCameraViewType() const {
    return ECameraType::FIRST_PERSON;
}

UCameraViewComponent::UCameraViewComponent() {
    this->AutoExposureBiasCurveForLightning = NULL;
}

