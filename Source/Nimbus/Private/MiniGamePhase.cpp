#include "MiniGamePhase.h"

class AActor;

void AMiniGamePhase::OnSuccessTakeoffHandler(float ElapsedTime) {
}

void AMiniGamePhase::OnSuccessLandingHandler(float ElapsedTime) {
}

void AMiniGamePhase::OnSuccessAerialRefuelingHandler(float ElapsedTime) {
}

void AMiniGamePhase::OnStartTakeoffHandler(bool bIsRetry) {
}

void AMiniGamePhase::OnStartSupplyMenuHandler() {
}

void AMiniGamePhase::OnStartPlayableTakeoffHandler() {
}

void AMiniGamePhase::OnStartPlayableLandingHandler() {
}

void AMiniGamePhase::OnStartPlayableAerialRefuelingHandler() {
}

void AMiniGamePhase::OnStartLandingHandler(bool bIsRetry) {
}

void AMiniGamePhase::OnStartAerialRefuelingProbeStartHandler() {
}

void AMiniGamePhase::OnStartAerialRefuelingProbeEndHandler() {
}

void AMiniGamePhase::OnStartAerialRefuelingHandler(bool bIsRetry) {
}

void AMiniGamePhase::OnSkipTakeoffHandler(float FadeOutDuration) {
}

void AMiniGamePhase::OnSkipLandingHandler(float FadeOutDuration) {
}

void AMiniGamePhase::OnSkipAerialRefuelingHandler(float FadeOutDuration) {
}

void AMiniGamePhase::OnMiniGameTick_Implementation(float DeltaSeconds) {
}

void AMiniGamePhase::OnMiniGameStart_Implementation() {
}

void AMiniGamePhase::OnMiniGameSkip_Implementation() {
}

void AMiniGamePhase::OnMiniGameComplete_Implementation() {
}

void AMiniGamePhase::OnFinishTakeoffHandler() {
}

void AMiniGamePhase::OnFinishLandingHandler() {
}

void AMiniGamePhase::OnFinishdSupplyMenuHandler() {
}

void AMiniGamePhase::OnFinishAerialRefuelingHandler() {
}

void AMiniGamePhase::OnFailedMiniGameHandler(EMissionStateMiniGameFailReason Reason) {
}

void AMiniGamePhase::OnCooldownStartTimeOutHandler() {
}

void AMiniGamePhase::OnCooldownStartSuccessfulHandler() {
}

void AMiniGamePhase::OnCooldownStartOutOfZoneHandler() {
}

void AMiniGamePhase::OnCooldownStartDeadHandler() {
}

void AMiniGamePhase::OnCooldownFinishedSuccessfulHandler() {
}

void AMiniGamePhase::OnCooldownFinishedFailedHandler() {
}

void AMiniGamePhase::OnCloseSupplyMenu_Implementation() {
}

void AMiniGamePhase::OnCheckInterruptStateHandler() {
}

void AMiniGamePhase::OnActorEndOverlapTakeoffRunwayHandler(AActor* OtherActor) {
}

void AMiniGamePhase::OnActorEndOverlapLandingRunwayHandler(AActor* OtherActor) {
}

void AMiniGamePhase::OnActorBeginOverlapTakeoffRunwayHandler(AActor* OtherActor) {
}

void AMiniGamePhase::OnActorBeginOverlapLandingRunwayHandler(AActor* OtherActor) {
}

AMiniGamePhase::AMiniGamePhase() {
    this->NavyTakeoffStartMarker = NULL;
    this->NavyTakeoffRunawayVolume = NULL;
    this->AirTakeoffStartMarker = NULL;
    this->AirTakeoffRunawayVolume = NULL;
    this->JudgementHeightMeter = 100.00f;
    this->CatapultTakeoffEndTime = 12.00f;
    this->TakeoffSuccessfulDemoHeightMeter = 1000.00f;
    this->NavyLadingStartMarker = NULL;
    this->NavyAssistLandingVolume = NULL;
    this->NavyMiniMapLandingVolume = NULL;
    this->AirLadingStartMarker = NULL;
    this->AirAssistLandingVolume = NULL;
    this->AirMiniMapLandingVolume = NULL;
    this->AerialRefuellingStartMarker = NULL;
    this->RefuelingAircraft = NULL;
    this->RefuelJudgeRadius = 800.00f;
    this->RefuelJudgeOffset = 0.00f;
    this->RefuelInputBrakeRate = 1.00f;
    this->RefuelInputLeftYawRate = 1.00f;
    this->RefuelInputRightYawRate = 1.00f;
    this->RefuelInputRollRate = 1.00f;
    this->RefuelInputPitchRate = 1.00f;
    this->RefuelInputThrottleRate = 1.00f;
    this->bAdjustForMS03 = false;
    this->Refuel_AdjustJudgeLength = 200.00f;
    this->Refuel_AdjustMinStrength = 2.00f;
    this->Refuel_AdjustMaxStrength = 5.00f;
    this->Refuel_DecayRate = 0.50f;
    this->Refuel_RollLimit = 10.00f;
    this->Refuel_RollResist = 2.00f;
    this->Refuel_RollDecayRate = 0.50f;
    this->Refuel_YawLimit = 0.50f;
    this->Refuel_YawResist = 2.00f;
    this->Refuel_YawDecayRate = 0.50f;
    this->Refuel_PitchLimit = 0.50f;
    this->Refuel_PitchResist = 2.00f;
    this->Refuel_PitchDecayRate = 0.50f;
    this->bSupplyMiniGame = false;
    this->MiniGameType = EMiniGameType::Takeoff;
    this->bEnableCarrierTakeoff = true;
    this->bEnableCarrierLanding = true;
    this->MiniGameVolume = NULL;
    this->NavyMiniGameVolume = NULL;
    this->bPauseBGM = true;
    this->MiniGameBGMPlayEvent = NULL;
    this->MiniGameBGMStopEvent = NULL;
    this->BeginTakeoffCameraAnimeA = NULL;
    this->BeginTakeoffCameraAnimeB = NULL;
    this->BeginTakeoffCameraAnimeC = NULL;
    this->BeginTakeoffCameraAnimeA_Navy = NULL;
    this->BeginTakeoffCameraAnimeB_Navy = NULL;
    this->BeginTakeoffCameraAnimeC_Navy = NULL;
    this->EndTakeoffCameraAnime = NULL;
    this->BeginLandingCameraAnime = NULL;
    this->BeginAerialRefuelingCameraAnime = NULL;
    this->EndAerialRefuelingCameraAnime = NULL;
    this->WeaponChangeCameraAnime = NULL;
    this->TakeoffTimeLimit = 180.00f;
    this->LandingTimeLimit = 180.00f;
    this->AerialRefuelingTimeLimit = 180.00f;
    this->TimeBonus.AddDefaulted(5);
    this->RetryTimePenalty = 10.00f;
    this->bUseFormationLight = false;
    this->bOverride_MotionBlurAmount = false;
    this->bOverride_MotionBlurMax = false;
    this->bOverride_MotionBlurPerObjectSize = false;
    this->MotionBlurAmount = -1.00f;
    this->MotionBlurMax = -1.00f;
    this->MotionBlurSize = 1.00f;
    this->FadeManager = NULL;
    this->SetupFrameManager = NULL;
    this->FadeSoundManager = NULL;
    this->TransitionStateFactory = NULL;
    this->DeadStateFactory = NULL;
    this->TakeoffSettings = NULL;
    this->LandingSettings = NULL;
    this->AerialRefuelingSettings = NULL;
    this->CameraManager = NULL;
    this->PlayerManager = NULL;
    this->MiniMapManager = NULL;
    this->ScriptEventManager = NULL;
    this->HUDManager = NULL;
    this->TimeManager = NULL;
    this->StateManager = NULL;
    this->PlayerPlane = NULL;
    this->EnlargedMiniMapBackgroundTexture = NULL;
    this->BattleMiniMapBackgroundTexture = NULL;
}

