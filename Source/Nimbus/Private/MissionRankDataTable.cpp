#include "MissionRankDataTable.h"

FMissionRankDataTable::FMissionRankDataTable() {
    this->RankCriteria = EMissionRankCriteria::ScoreEarned;
    this->ValueForS = 0.00f;
    this->ValueForA = 0.00f;
    this->ValueForB = 0.00f;
    this->ValueForC = 0.00f;
    this->BonusScoreForS = 0;
    this->BonusScoreForA = 0;
    this->BonusScoreForB = 0;
    this->BonusScoreForC = 0;
}

