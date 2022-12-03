#include "CampaignSaveData.h"

FCampaignSaveData::FCampaignSaveData() {
    this->LastCompletedMissionId = 0;
    this->LastGameDifficulty = EGameDifficulty::GD_EASY;
    this->AccumulatedScore = 0;
    this->FeatureFlagMask = 0;
    this->FeatureNotificationFlagMask = 0;
    this->MiscFlagMask = 0;
    this->LastSortingAircraftId = 0;
    this->VeryEasyFlag = 0;
}

