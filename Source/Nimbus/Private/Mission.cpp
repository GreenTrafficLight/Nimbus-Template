#include "Mission.h"

class AMission;
class AActor;
class AMissionPhase;
class UAkAudioEvent;
class ACameraActor;
class AMissionConditionChecker;
class AMissionAIManager;

void AMission::SkipMiniGame() {
}

void AMission::ShowMissionQuota(bool bShow) {
}

void AMission::ShowMissionAccomplished_S(EMissionSuccessNotificationType Type) {
}

void AMission::SetTrueSkyTime_S(int32 Hour, int32 Minute, float ShadowBase) {
}

void AMission::SetRemainingHpPercentage(float Percentage) {
}

void AMission::SetObjectiveMissionScore_S(int32 Score) {
}

void AMission::SetMissionObjectivesOnPause_S(int32 Value) {
}

void AMission::OnSystemMissionHandler(float DeltaTime) {
}

void AMission::OnSystemLevelScriptActorHandler(float DeltaTime) {
}

void AMission::OnSystemEndPhysicsHandler(float DeltaTime) {
}

void AMission::OnSuccessSupplyPhaseHandler(AMissionPhase* MissionPhase, const FVector& RestartLocation, const FRotator& RestartRotation) {
}

void AMission::OnSuccessCurrentPhaseHandler(AMissionPhase* MissionPhase) {
}

void AMission::OnStoppedReplayHandler() {
}

void AMission::OnStartSupplyPhaseHandler(AMissionPhase* MissionPhase) {
}

void AMission::OnStartNextPhaseHandler(AMissionPhase* MissionPhase, bool bIsRestart) {
}

void AMission::OnPreStopBusEvent(ENimbusSoundType BusType) {
}

void AMission::OnPreStartReplayHandler(bool bIsRestart) {
}

void AMission::OnPostStartReplayHandler(bool bIsRestart) {
}

void AMission::OnIgcStartSkipFadeOutHandler(bool bStopBGM, UAkAudioEvent* OverrideStopBGMEvent, float Duration) {
}

void AMission::OnIgcCameraChangedHandler(ACameraActor* NewCameraActor) {
}

void AMission::OnGameEndPhysicsHandler(float DeltaTime) {
}

void AMission::OnFailCurrentPhaseHandler(AMissionPhase* MissionPhase, EMissionStatePhaseFailReason Reason) {
}

void AMission::OnEndIGCHandler(const FMissionIGCRequestInfo& RequestInfo, AMissionPhase* MiniGameMapPhase) {
}

void AMission::OnCooldownStartTimeOutHandler() {
}

void AMission::OnCooldownStartSuccessfulHandler() {
}

void AMission::OnCooldownStartOutOfZoneHandler() {
}

void AMission::OnCooldownStartFailObjectiveHandler() {
}

void AMission::OnCooldownStartDeadHandler() {
}

void AMission::OnCooldownFinishedHandler() {
}

void AMission::OnCheckInterruptStateHandler() {
}

void AMission::OnChangedReplayChapterHandler() {
}

void AMission::OnBeginIGCHandler(const FMissionIGCRequestInfo& RequestInfo, AMissionPhase* MiniGameMapPhase) {
}

void AMission::OnActorSpawnedHandler(AActor* SpawnedActor) {
}

bool AMission::IsPlayingBGM() const {
    return false;
}

bool AMission::IsMissionStarted() const {
    return false;
}

bool AMission::IsMissionFailed() const {
    return false;
}

bool AMission::IsMissionCompleted() const {
    return false;
}

bool AMission::IsInIGC() const {
    return false;
}

int32 AMission::GetObjectiveMissionScore_S() {
    return 0;
}

int32 AMission::GetMissionScore_S() {
    return 0;
}

float AMission::GetMissionPhaseTimeLeftInSeconds_S() {
    return 0.0f;
}

float AMission::GetMissionPhaseElapsedTimeInSeconds_S() {
    return 0.0f;
}

float AMission::GetMissionElapsedTimeInSeconds_S() {
    return 0.0f;
}

int32 AMission::GetKillStatCount() const {
    return 0;
}

void AMission::GetKillStat(int32 Index, FString& OutName, int32& OutScore, float& OutTime) const {
}

AMission* AMission::GetCurrentMission(bool bIncludeOnline) {
    return NULL;
}

AMissionConditionChecker* AMission::GetConditionChecker() const {
    return NULL;
}

AMissionAIManager* AMission::GetAIManager() const {
    return NULL;
}

void AMission::ForcePauseMissionTimer_S(bool bPause) {
}

void AMission::CompleteCoolDownOverride(float NewCooldownDuration, float NewCooldownFadingDuration) {
}

void AMission::Complete() {
}

AMission::AMission() {
    this->MissionVariables = NULL;
    this->CurrentPhase = NULL;
    this->GlobalPhaseLevelScriptActor = NULL;
    this->NimbusHUD = NULL;
    this->MissionNo = 0;
    this->PhaseAssetTable = NULL;
    this->CombatZone = NULL;
    this->AIManager = NULL;
    this->AirObjectIdentificationRateMultiplier = 1.00f;
    this->GroundObjectIdentificationRateMultiplier = 1.00f;
    this->VeryEasy_AirObjectIdentificationRateMultiplier = 0.00f;
    this->VeryEasy_GroundObjectIdentificationRateMultiplier = 0.00f;
    this->MissionCooldownDuration = 5.00f;
    this->MissionFailureCooldownDuration = 10.00f;
    this->MissionFailureByDeathCooldownDuration = 10.00f;
    this->CooldownFadingDuration = 2.50f;
    this->SupplyPhase = NULL;
    this->GameInstance = NULL;
    this->PlayerPlane = NULL;
    this->bMiniMapSeaChart = false;
    this->bForcedAirForceTakeoffParameter = false;
    this->GndSpeedTakeoff = 250.00f;
    this->GndSpeedMax = 390.00f;
    this->GndSpeedLift = 272.00f;
    this->PowerAfterBurnerR = 1.50f;
    this->GndDrag3 = 0.20f;
    this->SpeedMax = 0.00f;
    this->AcceleR = 0.00f;
    this->bForcedAirForceLandingParameter = false;
    this->GndDrag2 = 1.00f;
    this->SpeedCruise = 400.00f;
    this->SpeedMin = 150.00f;
    this->LevelSleepManager = NULL;
    this->GarbageCollectManager = NULL;
    this->SpecificWeaponClass = NULL;
    this->OnDeathMissionFailDelayTimer = 2.00f;
    this->BGMStopEvent = NULL;
    this->BGMPlayEvent = NULL;
    this->AutomatedCollectMissionAsset = NULL;
    this->StateManager = NULL;
    this->ReplayPawn = NULL;
    this->ReplayChapterManager = NULL;
    this->IGCPlayer = NULL;
    this->GlobalOverlapVolumeManager = NULL;
    this->AllMiniGameOverlapVolumeManager = NULL;
    this->FadeSoundManager = NULL;
    this->SetupFrameManager = NULL;
    this->TransitionStateFactory = NULL;
    this->DeadStateFactory = NULL;
    this->DelayStateFactory = NULL;
    this->MissionUIManagerActor = NULL;
}

