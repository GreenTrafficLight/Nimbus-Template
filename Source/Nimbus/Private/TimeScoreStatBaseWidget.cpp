#include "TimeScoreStatBaseWidget.h"

void UTimeScoreStatBaseWidget::OnCurrentHUDAlertColorUpdated(const FLinearColor& NewColor, bool bIsDefaultColor) {
}

UTimeScoreStatBaseWidget::UTimeScoreStatBaseWidget() {
    this->MissionPhaseSecondsLeftToStartBlinking = 0.00f;
    this->TimerBlinkRate = 0.00f;
}

