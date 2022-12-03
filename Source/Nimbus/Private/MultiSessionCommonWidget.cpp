#include "MultiSessionCommonWidget.h"

void UMultiSessionCommonWidget::OnDialogItemAccepted(const FDialogData& DialogData) {
}

UMultiSessionCommonWidget::UMultiSessionCommonWidget() {
    this->MinVCLightUpTime = 0.35f;
    this->HostMigrationDialogAdditionalDisplayTime = 1.00f;
    this->HostMigrationPopup = NULL;
    this->HostMigrationCountdown = NULL;
    this->HostMigrationCountdownAnimation = NULL;
    this->SimpleVoiceChatPanel = NULL;
    this->MultiDetailedPlayerListWidget = NULL;
}

