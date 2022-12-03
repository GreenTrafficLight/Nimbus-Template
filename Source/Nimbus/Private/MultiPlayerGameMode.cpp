#include "MultiPlayerGameMode.h"

void AMultiPlayerGameMode::ToggleManuallyRequestGameResults() {
}

void AMultiPlayerGameMode::OnDialogItemAccepted(const FDialogData& DialogData) {
}

AMultiPlayerGameMode::AMultiPlayerGameMode() {
    this->FinishingCountDownDuration = 15;
    this->LocalPlayerPlane = NULL;
    this->HotJoinGodPlayerInSeconds = 5.00f;
    this->MinimumBattleTimeToHotJoinInSeconds = 60;
    this->InGameWidgetClass = NULL;
    this->IgcHudTDClass = NULL;
    this->IgcHudMvpClass = NULL;
    this->IgcHudKillerClass = NULL;
    this->TargetContainClass = NULL;
    this->InGameHudWidget = NULL;
    this->IgcHudTDWidget = NULL;
    this->IgcHudMvpWidget = NULL;
    this->IgcHudKillerWidget = NULL;
    this->MaximumMedalDataTable = NULL;
}

