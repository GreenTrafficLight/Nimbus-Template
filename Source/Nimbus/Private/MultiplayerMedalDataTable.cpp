#include "MultiplayerMedalDataTable.h"

FMultiplayerMedalDataTable::FMultiplayerMedalDataTable() {
    this->MedalTitle = EMedalTitle::Ace;
    this->LinkedAttribute = EMedalLinkedAttribute::EnemyKilled;
    this->MedalRank = EMedalRank::S;
    this->bAllowHotJoin = false;
    this->GameMode = EMissionRule::BattleRoyal;
    this->bMultiple = false;
    this->bIsRelative = false;
    this->bIsComforting = false;
    this->bIsLargerBetter = false;
    this->ValueLimit = 0;
    this->AttributeValue = false;
    this->bIncludeAllMeetMinumum = false;
    this->bBreakZero = false;
    this->bBreakZeroAlone = false;
}

