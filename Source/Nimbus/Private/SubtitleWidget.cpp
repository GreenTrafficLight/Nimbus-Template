#include "SubtitleWidget.h"

void USubtitleWidget::RadioMessageReceived(const FRadioText& RadioText) {
}

void USubtitleWidget::OnHUDEnabled() {
}

void USubtitleWidget::OnHUDDisabled() {
}

void USubtitleWidget::OnHUDAlertEnd() {
}

void USubtitleWidget::OnHUDAlertBegin() {
}

void USubtitleWidget::OnCurrentHUDAlertColorUpdated(const FLinearColor& NewColor, bool bIsDefaultColor) {
}

void USubtitleWidget::OnCameraViewChanged(ECameraType CameraType) {
}




void USubtitleWidget::DebugSetVRLocation(const FVector2D& NewLocation) {
}

void USubtitleWidget::DebugPrintVRLocation() {
}

USubtitleWidget::USubtitleWidget() {
    this->RadioBracketLeftVisibility = ESlateVisibility::Collapsed;
    this->RadioBracketRightTopVisibility = ESlateVisibility::Collapsed;
    this->RadioBracketRightCenterVisibility = ESlateVisibility::Collapsed;
    this->RadioBracketRightBottomVisibility = ESlateVisibility::Collapsed;
    this->WarningBlinkTimeSeconds = 0.25f;
}

