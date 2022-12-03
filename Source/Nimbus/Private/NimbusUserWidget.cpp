#include "NimbusUserWidget.h"

void UNimbusUserWidget::OnVRFadeOut(float Duration) {
}

void UNimbusUserWidget::OnSpecialWeaponChanged() {
}


void UNimbusUserWidget::OnHUDShowGroup(int32 Group) {
}

void UNimbusUserWidget::OnHUDEnabled() {
}

void UNimbusUserWidget::OnHUDDisabled() {
}

void UNimbusUserWidget::OnHUDAlertEnd() {
}

void UNimbusUserWidget::OnHUDAlertBegin() {
}

void UNimbusUserWidget::OnCurrentHUDAlertColorUpdated(const FLinearColor& NewColor, bool bIsDefaultColor) {
}

void UNimbusUserWidget::OnCameraViewChanged(ECameraType CameraType) {
}

UNimbusUserWidget::UNimbusUserWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->bDisableOnPause = true;
    this->PlayerPlane = NULL;
    this->CameraViewComponent = NULL;
    this->HUD = NULL;
    this->ShowGroup = 0;
}

