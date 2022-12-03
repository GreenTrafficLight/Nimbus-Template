#include "MultiLobbyWidget.h"

void UMultiLobbyWidget::OnDialogItemAccepted(const FDialogData& DialogData) {
}

UMultiLobbyWidget::UMultiLobbyWidget() {
    this->LobbyPlayerItemClass = NULL;
    this->ChatItemClass = NULL;
    this->TimeBeforeNextChat = 1.50f;
    this->SystemMessageTemplate = NULL;
    this->UserMessageTemplate = NULL;
    this->SteamPlayerNameIDMapClass = NULL;
}

