#include "TeamDeathMatchGameMode.h"


void ATeamDeathMatchGameMode::OnIGCCompleted(EMultiplayerIGCType IGCType, int32 IGCIndex) {
}

int32 ATeamDeathMatchGameMode::GetBaseMatchResultReward() const {
    return 0;
}

ATeamDeathMatchGameMode::ATeamDeathMatchGameMode() {
    this->EndingStateDurationInSeconds = 5.00f;
    this->WinLoseStateDurationInSeconds = 20.00f;
    this->ResultDetailStateDurationInSeconds = 40.00f;
    this->RewardStateDurationInSeconds = 30.00f;
    this->RewardMedalStateDurationInSeconds = 10.00f;
    this->RewardItemStateDurationInSeconds = 10.00f;
    this->RewardFeatureStateDurationInSeconds = 10.00f;
    this->RetrySaveAutoKickDurationInSeconds = 60.00f;
    this->RespawnGodModeDurationInSeconds = 5.00f;
    this->MinimumRespawnDistanceInMeter = 5000.00f;
    this->AbortDisplayDurationInSeconds = 5.00f;
    this->BaseMatchResultDataTable = NULL;
    this->EvalulationModifierDataTable = NULL;
    this->PlacingModifierDataTable = NULL;
    this->PlacingModifierStarDataTable = NULL;
    this->AircraftCostModifierDataTable = NULL;
    this->ScoreBasePointDataTable = NULL;
    this->RankingPlayerNumberModifierDataTable = NULL;
    this->CrashPenaltyModifierDataTable = NULL;
    this->MRPPlayerNumberModifierDataTable = NULL;
    this->CombatZoneRatioTowardsMiniMap = 0.80f;
    this->ScoreCalculator = NULL;
    this->MMRDFactor = 400;
    this->MMRKFactor = 90;
    this->NoEffectMMRDistanceLimit = 1000;
    this->StatsTestWidgetClass = NULL;
    this->SteamPlayerNameIDMapClass = NULL;
    this->ClientNameWidgetClass = NULL;
    this->ClientNameTextBlock = NULL;
    this->ClientNameWidget = NULL;
    this->LocalPlayerPlaneKiller = NULL;
    this->EsmBaseClass = NULL;
}

