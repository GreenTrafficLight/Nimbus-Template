#include "MultiPlayerInGameWidget.h"

void UMultiPlayerInGameWidget::OnHUDEnabled() {
}

void UMultiPlayerInGameWidget::OnCurrentHUDAlertColorUpdated(const FLinearColor& NewColor, bool bIsDefaultColor) {
}

UMultiPlayerInGameWidget::UMultiPlayerInGameWidget() {
    this->NormalTimeLeftAnimation = NULL;
    this->FinishingTimeLeftAnimation = NULL;
    this->MessageMoveUpSpeed = 0.00f;
    this->MessageAutoScrollingInterval = 0.00f;
    this->MultiPlayerGameMode = NULL;
    this->StartPanel = NULL;
    this->RemainingTime = NULL;
    this->RemainingTimeTextBlock = NULL;
    this->PlaneInfoCallsign = NULL;
    this->ScoreUpdateText = NULL;
    this->MessageBox = NULL;
}

