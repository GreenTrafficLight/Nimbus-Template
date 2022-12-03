#include "HUDMessageWidget.h"

void UHUDMessageWidget::TurnOffGlowForPortrait(float InLuminanceRate) {
}


void UHUDMessageWidget::RadioMessageReceived(const FRadioText& RadioText) {
}

void UHUDMessageWidget::OnHUDEnabled() {
}

void UHUDMessageWidget::OnHUDDisabled() {
}

void UHUDMessageWidget::OnHUDAlertEnd() {
}

void UHUDMessageWidget::OnHUDAlertBegin() {
}

void UHUDMessageWidget::OnCurrentHUDAlertColorUpdated(const FLinearColor& NewColor, bool bIsDefaultColor) {
}

void UHUDMessageWidget::OnCameraViewChanged(ECameraType CameraType) {
}

UHUDMessageWidget::UHUDMessageWidget() {
    this->HUDWarningMessageBlinkTime = 0.20f;
    this->HUDWeaponMessageBlinkTime = 0.30f;
    this->HUDMessageColorDesaturationMaxComponent = 0.30f;
    this->ComWindowImage = NULL;
}

