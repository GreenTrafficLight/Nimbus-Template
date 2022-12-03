#include "MissionPhase.h"

class AActor;

void AMissionPhase::StartMiniGame() {
}

bool AMissionPhase::ShouldShowNavyMiniGameLevels() const {
    return false;
}

void AMissionPhase::OnSkipMiniGamePhaseHandler(float FadeOutDuration) {
}

void AMissionPhase::OnReferencedActorEndPlayHandler(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

void AMissionPhase::OnPreStartMiniGamePhaseHandler(bool bIsRetry) {
}

EPhaseStatus AMissionPhase::GetStatus() const {
    return EPhaseStatus::NotStarted;
}

float AMissionPhase::GetMissionPhaseTimeLeft() const {
    return 0.0f;
}

float AMissionPhase::GetElapsedMissionPhaseTime() const {
    return 0.0f;
}

void AMissionPhase::ForceUpdateStatus(EPhaseStatus NewStatus) {
}

void AMissionPhase::CompleteMiniGame() {
}

AMissionPhase::AMissionPhase() {
    this->TakeoffVolume = NULL;
    this->NavyTakeoffVolume = NULL;
    this->PhaseNo = 0;
    this->bSaveCheckPointEnabledEasy = true;
    this->bSaveCheckPointEnabledNormal = true;
    this->bSaveCheckPointEnabledHard = true;
    this->bSaveCheckPointEnabledAce = true;
    this->bCheckTimeCondition = true;
    this->bFailedByTime = true;
    this->MiniGame = NULL;
    this->CombatZoneOverride = NULL;
    this->PhaseEnlargedMiniMapBackgroundTexture = NULL;
    this->PhaseBattleMiniMapBackgroundTexture = NULL;
    this->CurrentTakeoffVolume = NULL;
    this->TimeLimit = 300.00f;
    this->PhaseStartNotificationDelay = 0.00f;
    this->AirEnlargedMinimapBackgroundImage = NULL;
    this->AirMinimapBackgroundImage = NULL;
    this->NavyEnlargedMinimapBackgroundImage = NULL;
    this->NavyMinimapBackgroundImage = NULL;
    this->bContinueLastPhaseTime = false;
    this->bTelePlayerAtPhaseStart = false;
    this->PlayerStartMarker = NULL;
    this->OverwriteInputDelayPhaseStart = -1.00f;
    this->OverwriteInputDelayPhaseRestart = -1.00f;
    this->PhaseStartNotificationType = EPhaseStartNotificationType::None;
    this->PhaseBeginFadeType = EPhaseBeginFadeType::FadeIn;
    this->LevelSleepManager = NULL;
    this->PhaseOverlapVolumeManager = NULL;
    this->MiniGameOverlapVolumeManager = NULL;
}

