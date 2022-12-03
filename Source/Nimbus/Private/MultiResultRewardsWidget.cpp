#include "MultiResultRewardsWidget.h"

void UMultiResultRewardsWidget::ProceedToNextAnimationPhase() {
}

void UMultiResultRewardsWidget::OnRankUpAnimationFinished() {
}

UMultiResultRewardsWidget::UMultiResultRewardsWidget() {
    this->UmgRankUpAnimation = NULL;
    this->UmgPerformanceEvaluation = NULL;
    this->UmgRankAppearAnimation = NULL;
    this->UmgMRPEndAnimation = NULL;
    this->RankScorePlaySpeed = 1000;
    this->MMRPScorePlaySpeed = 1000;
    this->MedalItemClass = NULL;
    this->InterSectionAnimationDelay = 0.00f;
    this->MRPShowAcquisitionDelay = 0.00f;
    this->MRPRollingDelay = 0.00f;
    this->RankRollingDelay = 0.00f;
    this->bShowAllMedals = false;
    this->InactivePeriodAfterAnimationCompletion = 2.00f;
}

