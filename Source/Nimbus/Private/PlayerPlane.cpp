#include "PlayerPlane.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/PostProcessComponent.h"
#include "PlayerWeaponActivator.h"

class USceneComponent;
class UAnimInstance;
class ANimbusHUD;
class UCameraComponent;
class AActor;
class UActorComponent;
class AAIGameObject;
class AGameObject;

void APlayerPlane::UpdateThrusterAnimation(UAnimInstance* AnimInst, FName CloseShapeName, FName OpenShapeName, float LoopMagnitude, float LoopFrequency) {
}

void APlayerPlane::TargetLostJammer() {
}

void APlayerPlane::StartTargetLostJammerCheck() {
}

void APlayerPlane::StartSeekerJammerCheck() {
}

void APlayerPlane::SetStallAltitude(float altStall) {
}

void APlayerPlane::SetSandVFXMaxTransparency(float TargetTransparency, float SwitchingTime) {
}

void APlayerPlane::SetSandVFXMaxDensity(float TargetDensity, float SwitchingTime) {
}

void APlayerPlane::SetRestrictedAltitude(float AltitudeMeters) {
}

void APlayerPlane::SetMaxPursuitAttackers(int32 NewMax, int32 NewMaxPursuitAttackers) {
}

void APlayerPlane::SetMaxNonpursuitAttackers(int32 NewMax) {
}

void APlayerPlane::SetMaxEnemyMissileNum(int32 PursuitAttackerMissileNum, int32 NonPursuitAttackerMissileNum) {
}

void APlayerPlane::SetHudWarningMessageDisplayTime(float DisplayTime) {
}

void APlayerPlane::SetFELocationAndRotation(const FVector& Location, const FRotator& Rotation) {
}

void APlayerPlane::SetFakeGroundHeightOnlyForAirShow(float FakeHeight, bool bIsEnableFake) {
}

void APlayerPlane::SetEnableCheckCockpitCameraOutOfBound(bool IsEnable) {
}

void APlayerPlane::SetControlType(bool bIsExpert) {
}

void APlayerPlane::SetCatapultShuttleActor(AActor* Actor) {
}

void APlayerPlane::SetCameraLocationAndOrientation(UCameraComponent* CamComponent, USkeletalMeshComponent* SkeletalMeshComp, FName BoneName) {
}

void APlayerPlane::SetCameraAndTargetLocation(UCameraComponent* CamComponent, USceneComponent* TargetComp, USkeletalMeshComponent* SkeletalMeshComp, FName BoneName, FName TargetBoneName) {
}

void APlayerPlane::SetBattleMode(EBattleMode NewMode) {
}

void APlayerPlane::RestoreWeaponFromCheckpoint_Implementation(int32 WeaponSet, int32 GunCount, int32 MainWeaponCount, int32 SpecialWeaponCount) {
}

void APlayerPlane::ResetTargetLostJammer() {
}

void APlayerPlane::ResetStallAltitude() {
}

int32 APlayerPlane::PlayVRSound(EVRSoundActor Type, const FString& EventName) {
    return 0;
}

void APlayerPlane::OnWeaponSwitchReleased() {
}

void APlayerPlane::OnWeaponSwitchPressed() {
}

void APlayerPlane::OnWeaponFireReleased() {
}

void APlayerPlane::OnWeaponFirePressed() {
}

void APlayerPlane::OnWeaponFireMissileReleased() {
}

void APlayerPlane::OnWeaponFireMissilePressed() {
}

void APlayerPlane::OnWeaponFireMissile(bool pressed) {
}

void APlayerPlane::OnWeaponFire(bool pressed) {
}

void APlayerPlane::OnUnpauseHandler() {
}

void APlayerPlane::OnToggleMiniMapRadarReleased() {
}

void APlayerPlane::OnToggleMiniMapRadarPressed() {
}

void APlayerPlane::OnTargetSelectReleased() {
}

void APlayerPlane::OnTargetSelectPressed() {
}

void APlayerPlane::OnReplayCameraChanged(uint8 Type) {
}

void APlayerPlane::OnPlaneEndOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

void APlayerPlane::OnPlaneBeginOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

void APlayerPlane::OnPauseHandler() {
}

void APlayerPlane::OnInputViewPressed() {
}

void APlayerPlane::OnFlareActivationRightReleased() {
}

void APlayerPlane::OnFlareActivationRightPressed() {
}

void APlayerPlane::OnFlareActivationLeftReleased() {
}

void APlayerPlane::OnFlareActivationLeftPressed() {
}

void APlayerPlane::OnFlareActivation(bool pressed) {
}



void APlayerPlane::OnDeactivateMADComponent(UActorComponent* Component) {
}

void APlayerPlane::OnCombatZoneUpdatedEvent() {
}

void APlayerPlane::OnChangeViewReleased() {
}

void APlayerPlane::OnChangeViewPressed() {
}

void APlayerPlane::OnCameraViewChanged(ECameraType CameraViewType) {
}

void APlayerPlane::OnActivateMADComponent(UActorComponent* Component, bool bReset) {
}

bool APlayerPlane::IsWeaponSystemDisabled() const {
    return false;
}

bool APlayerPlane::IsSpecialWeaponTGTP() const {
    return false;
}

bool APlayerPlane::IsSpecialWeaponArmed() const {
    return false;
}

bool APlayerPlane::IsPulseGunArmed() const {
    return false;
}

bool APlayerPlane::IsOverRestrictedAltitude() const {
    return false;
}

bool APlayerPlane::IsOnGround() const {
    return false;
}

bool APlayerPlane::IsInTunnel() {
    return false;
}

bool APlayerPlane::IsInSpaceElevator() {
    return false;
}

bool APlayerPlane::IsInSearchLight() const {
    return false;
}

bool APlayerPlane::IsInRadarArea() const {
    return false;
}

bool APlayerPlane::IsInJammingArea() const {
    return false;
}

bool APlayerPlane::IsInImpactArea() const {
    return false;
}

bool APlayerPlane::IsInCloud() const {
    return false;
}

bool APlayerPlane::IsExpertControlType() const {
    return false;
}

bool APlayerPlane::IsBeyondPulloutLine() const {
    return false;
}

void APlayerPlane::InitializeWeaponSystem(int32 WeaponSet) {
}

void APlayerPlane::InitializeTargetLostJammer(const TArray<AAIGameObject*>& InJammerTargets, float InMinLostTargetTime, float InMaxLostTargetTime, float InLostTargetWaveingTime) {
}

void APlayerPlane::InitializeSeekerJammer(const TArray<AAIGameObject*>& InJammerTargets, float InSeekerJammerRangeInMeter) {
}

bool APlayerPlane::HitTest() {
    return false;
}

float APlayerPlane::GetSpaceElevatorHeightRatio() {
    return 0.0f;
}

AGameObject* APlayerPlane::GetSelectedTarget() {
    return NULL;
}

bool APlayerPlane::GetNimbusHUDEnabled() {
    return false;
}

ANimbusHUD* APlayerPlane::GetNimbusHUD() {
    return NULL;
}

float APlayerPlane::GetMaxSpeedKmph() const {
    return 0.0f;
}

AGameObject* APlayerPlane::GetLockedOnTarget() {
    return NULL;
}

FVector APlayerPlane::GetFirstCameraLocation() const {
    return FVector{};
}

FVector APlayerPlane::GetDirectionMove() const {
    return FVector{};
}

FNimbusCockpitPartsAnim APlayerPlane::GetCockpitPartsAnimation() const {
    return FNimbusCockpitPartsAnim{};
}

FNimbusBodyPartsAnim APlayerPlane::GetBodyPartsAnimation() const {
    return FNimbusBodyPartsAnim{};
}

TArray<AGameObject*> APlayerPlane::GetAllLockedOnTargets() {
    return TArray<AGameObject*>();
}

void APlayerPlane::FrameUpdate(float DeltaSeconds) {
}

void APlayerPlane::ForcedInvalidSeekers() {
}

void APlayerPlane::EndTargetLostJammerCheck() {
}

void APlayerPlane::EndSeekerJammerCheck() {
}

void APlayerPlane::EnableTakeoffInput(bool bInEnable) {
}

void APlayerPlane::EnablePullupWarning(bool bEnable) {
}

void APlayerPlane::EnablePlayerInput(bool bInEnable) {
}

void APlayerPlane::EnableAllExcludingCameraInput(bool bInEnable) {
}

void APlayerPlane::DisableWeaponSystem(bool bIsDisabled) {
}


void APlayerPlane::BeginTakeoff(bool bCarrier, float AutoTakeoffDelay, float CatapultTakeoffEndTime, float GearUpTakeoffEndTime) {
}

void APlayerPlane::BeginLanding(bool bCarrier) {
}

float APlayerPlane::ApplySystemDamage(EPlayerSystemDamageType SystemDamageType, float Amount, AActor* DamageCauser) {
    return 0.0f;
}

void APlayerPlane::AddSeaSprayTrigger(FVector HitLocation, FSeaExplosionInfo SeaExplosionInfo) {
}

void APlayerPlane::AddKillBountyScore(AGameObject* Target, bool bDisplayHUDMessage) {
}

APlayerPlane::APlayerPlane() {
    this->PlaneTypeID = 0;
    this->PlaneSWP = 0;
    this->bIsCarrierBasedPlane = false;
    this->bIsFlyingBoom = false;
    this->bIsVRPlane = false;
    this->bPlaysNozzleSound = false;
    this->bIsMS17ExceptionPlane = false;
    this->InputThrottle = 0.00f;
    this->InputBrake = 0.00f;
    this->InputLeftYaw = 0.00f;
    this->InputRightYaw = 0.00f;
    this->InputRoll = 0.00f;
    this->InputPitch = 0.00f;
    this->InputLeftYaw_forAnimVR = 0.00f;
    this->InputRightYaw_forAnimVR = 0.00f;
    this->InputRoll_forAnimVR = 0.00f;
    this->InputPitch_forAnimVR = 0.00f;
    this->bIsChangingView = false;
    this->bIsChangingViewReleased = false;
    this->bActivateFlareL = false;
    this->bActivateFlareR = false;
    this->ChangingViewTimer = 0.00f;
    this->HangarPartsAnim_Vwgn = 0.00f;
    this->HangarPartsAnim_Vct = 0.00f;
    this->HangarPartsAnim_Nzln = 0.00f;
    this->bForceHangarWeaponMeshVisible = false;
    this->MaxPlaneAttackerMissiles = 2;
    this->MaxPursuitAttackers = 2;
    this->MaxNonPlaneAttackerMissiles = 2;
    this->bCrashEnvironmentAlert = false;
    this->bCanAfterburn = true;
    this->bForceDisableCockpitWeatherMeshLocalToViewProcess = false;
    this->CloudMaterialParams = NULL;
    this->bIsInCloud = false;
    this->bIsInSand = false;
    this->CurrentCloudDensity = 0.00f;
    this->SmoothCloudDensity = 0.00f;
    this->CanopyEffectChangeDuration = 1.00f;
    this->CanopyIceAppearDuration = 3.00f;
    this->CanopyIceChangeDuration = 2.00f;
    this->CanopyEffectDecayMultiplier = 1.00f;
    this->WingTipEffectExitCloudDuration = 5.00f;
    this->IceTriggerCloudDensity = 0.70f;
    this->InCloudMovementDegradePercent = 30.00f;
    this->InCloudMovementDegradeDuration = 1.00f;
    this->InCloudStallSpeed = 0.00f;
    this->InCloudBuffetSpeed = 0.00f;
    this->InCloudMovementDegradePercent2 = 0.00f;
    this->InAirCurrentMovementDegradePercent = 30.00f;
    this->AirCurrentStrengthThreshold = 1000.00f;
    this->AirCurrentParticleSystem = NULL;
    this->AirCurrentVFXVelocityMultiplier = 1.00f;
    this->CloudDensity_ShowAirCurrentFX = 0.00f;
    this->CloudDensity_HideAirCurrentFX = 0.00f;
    this->AirCurrentVFXVelocityFadeInTime = 0.00f;
    this->AirCurrentVFXVelocityFadeOutTime = 0.00f;
    this->AirCurrentVFXInitialSpeed = 0.00f;
    this->AirCurrentVFXSpeedThreshold = 0.00f;
    this->bShowAirCurrentVFXOnlyInCloud = true;
    this->HeavyDamageHealthPercentage = 0.20f;
    this->LightDamageHealthPercentage = 0.60f;
    this->AltitudeWarningThreshold = 100.00f;
    this->StealthMissileFarAlertPlayingTimeMin = 0.20f;
    this->StealthMissileFarAlertPlayingTimeMax = 0.20f;
    this->StealthMissileFarAlertIntervalTimeMin = 1.00f;
    this->StealthMissileFarAlertIntervalTimeMax = 1.50f;
    this->StruckByLightningVFX_OtherPlayer = NULL;
    this->PostStallManuverNeutralLengthTime = 1.00f;
    this->VRSoundActors[0] = NULL;
    this->VRSoundActors[1] = NULL;
    this->VRSoundActors[2] = NULL;
    this->CockpitFiringSwitchRefActor = NULL;
    this->JammingEffectFadePerSeconds = 3.00f;
    this->FrontDist = 30000.00f;
    this->BackPointRadius = 5000.00f;
    this->KDSBattle = NULL;
    this->bEnableMovmentInput = true;
    this->bEnableWingInput = true;
    this->bEnableCameraInput = true;
    this->bEnableCameraViewChange = true;
    this->bEnableWeaponInput = true;
    this->bIsWeaponSystemDisabled = false;
    this->bIsPitchAxisReversed = false;
    this->bIsCameraUpAxisReversed = false;
    this->bIsTrottleYawReversed = false;
    this->RadarWeaponControlType = EOptionsRadarMapWeaponSwitchingTypes::TypeA;
    this->bIsHighGTurnSingleButton = false;
    this->bIsFlightAssistEnabled = false;
    this->IconBg = NULL;
    this->IconFillTexture = NULL;
    this->LegAnimKneeAngle = 0.00f;
    this->LegAnimFootAngle = 0.00f;
    this->LegAnimScale = 0.50f;
    this->UpgradeParts = NULL;
    this->CockpitCameraBoundaryRadius = 50.00f;
    this->bAllowCameraShakeInVR = false;
    this->PartsAnimationParamDataTable = NULL;
    this->PlayerParamDataTable = NULL;
    this->PlaneBodyMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("PlaneBodyMesh"));
    
	this->LandingGearOnMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("LandingGearOnMesh"));
	this->LandingGearOnMesh->AttachTo(this->PlaneBodyMesh);
    
	this->LandingGearOffMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LandingGearOffMesh"));
	this->LandingGearOffMesh->AttachTo(this->PlaneBodyMesh);
    
	this->RefuelOnMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RefuelOnMesh"));
	this->RefuelOnMesh->AttachTo(this->PlaneBodyMesh);
    
	this->RefuelOffMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RefuelOffMesh"));
	this->RefuelOffMesh->AttachTo(this->PlaneBodyMesh);
    
	this->CanopyWeatherMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CanopyWeatherMesh"));
    this->CanopyPostProcessComponent = CreateDefaultSubobject<UPostProcessComponent>(TEXT("CanopyPostProcessComponent"));
    this->IEWSPostProcessComponent = CreateDefaultSubobject<UPostProcessComponent>(TEXT("IEWSPostProcessComponent"));
    this->VelocityVectorVRMesh = NULL;
    this->RadioStateComp = NULL;
    this->CanopyEffectMaterial = NULL;
    this->MinSpeedToAccelerateDroplet = 1234.80f;
    this->CanopyIEWSEffectMaterial = NULL;
    this->InitialRainSpeed = 0.00f;
    this->CachedCockpitDirectionalLight = NULL;
    this->ThirdPersonDropletSplatRateMax = 1.50f;
    this->CockpitDropletRainSpeedValue = 0.00f;
    this->ThirdPersonDropletInitialSpeed = 0.00f;
    this->CanopyMID = NULL;
    this->CanopyIEWSMID = NULL;
    this->BaseMID = NULL;
    this->BaseDecalMID = NULL;
    this->CockpitAOAMID = NULL;
    this->CockpitVVIMID = NULL;
    this->CockpitCMPMID = NULL;
    this->AirCloudInRainLineDensityRate = 1.00f;
    this->AirCloudInSandLineDensityRate = 1.00f;
    this->bAirCurrentDirectionAdaptationRainSandLine = false;
    this->bAirCurrentDirectionAdaptationRainSandLineYawOnly = false;
    this->bAirCurrentSmallHandAvoidance = true;
    this->AirMaximumAttenuation = 0.50f;
    this->AirMaximumAcceleration = 1.50f;
    this->AirRotationAdaptationRate = 0.80f;
    this->AirRotationInterpSpeed = 10.00f;
    this->EmblemAsset = NULL;
    this->BlankEmblemTexture = NULL;
    this->PlayerWeaponActivator = CreateDefaultSubobject<UPlayerWeaponActivator>(TEXT("PlayerWeaponActivator"));
    this->PauseBokehFocalDistance = 0.00f;
    this->PauseBokehScale = 0.30f;
    this->PauseMaxBokehSize = 3.80f;
    this->CatapultTakeoff_OffsetTransCurve = NULL;
    this->CatapultTakeoff_OffsetRotCurve = NULL;
    this->CatapultTakeoff_OffsetTrans_FSUS = NULL;
    this->CatapultTakeoff_OffsetTransCurveVR = NULL;
    this->CatapultTakeoff_OffsetRotCurveVR = NULL;
    this->RespawnLightningInitialTime = 5.00f;
    this->ForceStallRatio = 1.00f;
    this->CurrentImpactCameraCategory = EImpactCameraPlayCategory::None;
    this->CachedRemotePlayerPlaneClass = NULL;
    this->MADComponent = NULL;
    this->CameraViewComponent = NULL;
    this->OldReplayCameraComponent = NULL;
    this->EnvCollisionBottomLengthFromCenterInMeter = 1.00f;
    this->EnvCollisionTopLengthFromPilotInMeter = 0.50f;
    this->TouchDownSpeedGraph[0] = 0.00f;
    this->TouchDownSpeedGraph[1] = 0.00f;
    this->TouchDownSpeedGraph[2] = 0.00f;
    this->TouchDownSpeedGraph[3] = 0.00f;
    this->TouchDownSpeedGraph[4] = 0.00f;
    this->TouchDownSpeedGraph[5] = 0.00f;
    this->TouchDownSpeedCorrectingBase[0] = 0.00f;
    this->TouchDownSpeedCorrectingBase[1] = 0.00f;
    this->TouchDownSpeedCorrectingBase[2] = 0.00f;
    this->TouchDownSpeedCorrectingBase[3] = 0.00f;
    this->TouchDownSpeedCorrectingBase[4] = 0.00f;
    this->TouchDownSpeedCorrectingBase[5] = 0.00f;
    this->TouchDownSpeedCorrectingCarrier[0] = 0.00f;
    this->TouchDownSpeedCorrectingCarrier[1] = 0.00f;
    this->TouchDownSpeedCorrectingCarrier[2] = 0.00f;
    this->TouchDownSpeedCorrectingCarrier[3] = 0.00f;
    this->TouchDownSpeedCorrectingCarrier[4] = 0.00f;
    this->TouchDownSpeedCorrectingCarrier[5] = 0.00f;
    this->GamerNameRenderTexture = NULL;
    this->CatapultShuttleActor = NULL;
    this->CatapultTakeoffFrontGearAnimScale = 1.00f;
    this->PlayerHUDModeManager = NULL;
    this->DropTankWeaponClass = NULL;
    this->DropTankInputDuration = 1.00f;
    this->DropTankMeshComponent = NULL;
}

