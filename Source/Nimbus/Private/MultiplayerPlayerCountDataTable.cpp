#include "MultiplayerPlayerCountDataTable.h"

FMultiplayerPlayerCountDataTable::FMultiplayerPlayerCountDataTable() {
    this->Value = 0;
    this->CreateBr = MenuEntryStatus::None;
    this->CreateTd = MenuEntryStatus::None;
    this->SearchBr = MenuEntryStatus::None;
    this->SearchTd = MenuEntryStatus::None;
    this->SettingBr = MenuEntryStatus::None;
    this->SettingTd = MenuEntryStatus::None;
    this->bNeedExactPlayerCount = false;
    this->RealGameMode = EMissionRule::BattleRoyal;
}

