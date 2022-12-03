#include "MultiplayerFakeSessionDataTable.h"

FMultiplayerFakeSessionDataTable::FMultiplayerFakeSessionDataTable() {
    this->StageNo = 0;
    this->GameMode = EMissionRule::BattleRoyal;
    this->State = EOngoingState::Lobby;
    this->bEnableSpecialWeapon = false;
    this->bFlexiblePlayerCount = false;
    this->MaximumClientCount = 0;
    this->CurrentClientCount = 0;
    this->bAllowHotJoin = false;
    this->bAllowTeamChange = false;
    this->MatchMakingValue = 0;
    this->AircraftRegulation = 0;
    this->AntennaBarCount = 0;
    this->bShowRedBoot = false;
    this->bKickedLocalClient = false;
}

