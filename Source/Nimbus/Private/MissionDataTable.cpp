#include "MissionDataTable.h"

FMissionDataTable::FMissionDataTable() {
    this->MissionID = 0;
    this->bTestMission = false;
    this->NextMissionID = 0;
    this->FreeFlightMissionID = 0;
    this->bWaitForTextureStreamingFinished = false;
    this->bPlayReplay = false;
    this->InitialClearBonus = 0;
    this->RepeatCampaignClearBonus = 0;
    this->MachineGunOnlyClearBonus = 0;
    this->NoDamageClearBonus = 0;
    this->MissionReward = 0;
    this->Category = EMissionCategory::Campaign;
    this->CampaignSpecificSkinNo = 0;
    this->Rule = EMissionRule::BattleRoyal;
    this->StageNo = 0;
    this->MaxClearTimeScore = 0;
    this->ClearTimeScoreDecStart = 0;
    this->ClearTimeScoreDecPerSecond = 0.00f;
    this->RankCriteria = EMissionRankCriteria::ScoreEarned;
    this->ValueForS = 0.00f;
    this->ValueForA = 0.00f;
    this->ValueForB = 0.00f;
    this->ValueForC = 0.00f;
    this->BonusScoreForS = 0;
    this->BonusScoreForA = 0;
    this->BonusScoreForB = 0;
    this->BonusScoreForC = 0;
    this->BriefingBgm = EUIBgms::None;
    this->DebriefingBgm = EUIBgms::None;
    this->HangarBgm = EUIBgms::None;
}

