#include "InstantRadioReceiveWidget.h"

void UInstantRadioReceiveWidget::OnHUDEnabled() {
}

void UInstantRadioReceiveWidget::OnHUDDisabled() {
}

UInstantRadioReceiveWidget::UInstantRadioReceiveWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->RadioEmblemListWidget = NULL;
    this->MessageMoveUpSpeed = 0.20f;
    this->MessageAutoScrollingInterval = 10.00f;
    this->MessageSlotHeight = 0.00f;
    this->EmblemScrollBoxClass = NULL;
}

