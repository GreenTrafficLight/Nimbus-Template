#include "MultiSimpleVoiceChatWidget.h"

void UMultiSimpleVoiceChatWidget::OnHUDEnabled() {
}

void UMultiSimpleVoiceChatWidget::OnHUDDisabled() {
}

UMultiSimpleVoiceChatWidget::UMultiSimpleVoiceChatWidget() {
    this->MaterialInstances_InGame[0] = NULL;
    this->MaterialInstances_InGame[1] = NULL;
    this->MaterialInstances_InGame[2] = NULL;
    this->MaterialInstances_InGame[3] = NULL;
    this->MaterialInstances_InGame[4] = NULL;
    this->MaterialInstances_InGame[5] = NULL;
    this->MaterialInstances_InGame[6] = NULL;
    this->MaterialInstances_InGame[7] = NULL;
    this->MaterialInstances_OutGame[0] = NULL;
    this->MaterialInstances_OutGame[1] = NULL;
    this->MaterialInstances_OutGame[2] = NULL;
    this->MaterialInstances_OutGame[3] = NULL;
    this->MaterialInstances_OutGame[4] = NULL;
    this->MaterialInstances_OutGame[5] = NULL;
    this->MaterialInstances_OutGame[6] = NULL;
    this->MaterialInstances_OutGame[7] = NULL;
    this->BaseOpacity_InGame = 0.00f;
    this->BaseOpacity_OutGame = 0.00f;
    this->OpacityLowered = 0.00f;
    this->MinLightupTime = 0.00f;
}

