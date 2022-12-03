#include "MultiResultWinLoseWidget.h"

void UMultiResultWinLoseWidget::ProceedToNextAnimationPhase() {
}

UMultiResultWinLoseWidget::UMultiResultWinLoseWidget() {
    this->ScoreRollingSpeed = 1000;
    this->MaxScoreRollingTime = 3.00f;
    this->AnimationResult = NULL;
    this->AnimationMVP = NULL;
    this->AnimationNextScreen = NULL;
    this->bShowAllPlayers = false;
    this->InactivePeriodAfterAnimationCompletion = 2.00f;
}

