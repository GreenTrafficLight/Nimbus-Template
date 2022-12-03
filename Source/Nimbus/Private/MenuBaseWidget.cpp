#include "MenuBaseWidget.h"

void UMenuBaseWidget::SimpleDialogInputResult(const FDialogData& DialogData) {
}

void UMenuBaseWidget::SetIsEnableControl(bool bEnable) {
}



bool UMenuBaseWidget::IsEnableControl() const {
    return false;
}

UMenuBaseWidget::UMenuBaseWidget() {
    this->UmgUIScrollBar = NULL;
    this->LobbyGameMode = NULL;
    this->UmgTitleText = NULL;
    this->UmgDescriptionText = NULL;
    this->UmgButtonText = NULL;
    this->UmgTabText = NULL;
    this->UmgTabIcon = NULL;
}

