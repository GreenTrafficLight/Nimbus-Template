#include "AIPlane.h"

class UCurveVector;
class UDataTable;

void AAIPlane::StopImbalanceAnime() {
}

void AAIPlane::StartDamagedRotate() {
}

void AAIPlane::SetFormationLightEmissive(float intensity) {
}

void AAIPlane::SetFELocationAndRotation(FVector Location, FRotator Rotation) {
}

void AAIPlane::SetCurrentBehaviorTreeName(const FString& Name) {
}

void AAIPlane::SetCloudAvoidanceAbility(bool CloudAvoidanceAbility) {
}

void AAIPlane::SetBehaviorActive(bool BehaviorActiveState) {
}

void AAIPlane::SetAutopilotYawRelative(float RelativeAngle, float Power) {
}

void AAIPlane::SetAutopilotRollRelative(float RelativeAngle, float Power) {
}

void AAIPlane::SetAutopilotRoll(float AbsoluteAngle, float Power) {
}

void AAIPlane::SetAutopilotPitchRelative(float RelativeAngle, float Power) {
}

bool AAIPlane::SearchFrontCloudDirection() {
    return false;
}

void AAIPlane::RequestSpecialAction(const FAISpecialActionRequestInfo& SpecialActionRequestInfo) {
}

void AAIPlane::PlayImbalanceAnime(UCurveVector* InRotationCurveData) {
}

void AAIPlane::OverwriteFELocationAndRotation(FVector Location, FRotator Rotation) {
}

void AAIPlane::OverrideAIPlaneConfig(const UDataTable* AIPlaneConfig) {
}

void AAIPlane::OnUpdateAIState() {
}

void AAIPlane::OnPostAIState() {
}

bool AAIPlane::IsStrictDrift() const {
    return false;
}

bool AAIPlane::IsInKDSP2() const {
    return false;
}

bool AAIPlane::IsInKDSP1() const {
    return false;
}

bool AAIPlane::IsInCloud() const {
    return false;
}

bool AAIPlane::IsFireMissileFinished() const {
    return false;
}

bool AAIPlane::IsEnabledSurroundPursuitTarget() const {
    return false;
}

bool AAIPlane::IsDrift() const {
    return false;
}

bool AAIPlane::IsApproachingCloud() const {
    return false;
}

void AAIPlane::InputYaw(float Power) {
}

void AAIPlane::InputRoll(float Power) {
}

void AAIPlane::InputPitch(float Power) {
}

float AAIPlane::GetTurnSpeed() const {
    return 0.0f;
}

float AAIPlane::GetMinSpeed() const {
    return 0.0f;
}

float AAIPlane::GetMaxSpeed() const {
    return 0.0f;
}

float AAIPlane::GetDecelerationMpss() const {
    return 0.0f;
}

FNimbusCockpitPartsAnim AAIPlane::GetCockpitPartsAnimation() const {
    return FNimbusCockpitPartsAnim{};
}

FNimbusBodyPartsAnim AAIPlane::GetBodyPartsAnimation() const {
    return FNimbusBodyPartsAnim{};
}

float AAIPlane::GetAccelerationMpss() const {
    return 0.0f;
}

void AAIPlane::FrameUpdate(float DeltaSeconds) {
}

void AAIPlane::EnableTakeoffAfterburner(bool bEnable) {
}

void AAIPlane::EnableLandingGear(bool bEnable, float InDelayTime) {
}

void AAIPlane::EnableAvoidObstacle(bool bEnable) {
}

void AAIPlane::CheckAvoidObstacle() {
}

void AAIPlane::AutopilotHorizontalYaw(float Power) {
}

void AAIPlane::AutopilotAdjustSpeed(float spd, float Power) {
}

void AAIPlane::AIFlightEngineTick(float DeltaTimeSeconds) {
}

void AAIPlane::AIFlightEngineRepositionDebugUseOnly() {
}

AAIPlane::AAIPlane() {
    this->EvadeBT = NULL;
    this->EvadeMissileNearBT = NULL;
    this->EvadeMissileFarBT = NULL;
    this->EvadeGunBT = NULL;
    this->EvadeSpecialBT = NULL;
    this->ProvokeBT = NULL;
    this->ProvokeNearBT = NULL;
    this->ProvokeMidBT = NULL;
    this->ProvokeFarBT = NULL;
    this->EscapeFromPursuerBT = NULL;
    this->MoveAwayFromTargetBT = NULL;
    this->PursueTargetBT = NULL;
    this->ProvokeDeterminationTime = 2.50f;
    this->ProvokeConditionConeAngle = 60.00f;
    this->KDSSelectionTimeLimit = 8.00f;
    this->FrontEntranceTimeLimit = 4.00f;
    this->FrontLeadTimeLimit = 6.00f;
    this->SurroundPursuitMinRange = 10000.00f;
    this->SurroundPursuitMaxRange = 30000.00f;
    this->SurroundPursuitParamA = -10.00f;
    this->SurroundPursuitParamB = 30.00f;
    this->SurroundPursuitParamC = 100.00f;
    this->SurroundPursuitResetTimeMin = 8.00f;
    this->SurroundPursuitResetTimeMax = 20.00f;
    this->bIsLargePlane = false;
    this->bIsVTOLPlane = false;
    this->LargePlaneBankAngle = 0.00f;
    this->LargePlanePitchAngle = 30.00f;
    this->LargePlaneRollSpeedOnPath = 3.00f;
    this->RootHeight = 0.00f;
    this->MaxGroundRotateAngle = 60.00f;
    this->CurrentRunningState = EAIState::Idle;
    this->NearestPlayerPlane = NULL;
    this->EscapeFromPursuerActor = NULL;
    this->MoveAwayFromTargetActor = NULL;
    this->InCloudMovementDegradePercent = 66.00f;
    this->bDamagedRotate = false;
    this->DamagedRotateIntervalMin = 5.00f;
    this->DamagedRotateIntervalMax = 7.00f;
    this->DamagedRotateNum = 3;
    this->PlaneBodyStaticMeshComponent = NULL;
    this->PlaneBodySkelMeshComponent = NULL;
    this->PilotMeshComponent = NULL;
    this->LastAttackingGunOwner = NULL;
    this->bEnableKDSMode = true;
    this->bIsInCloud = false;
    this->WingTipEffectExitCloudDuration = 5.00f;
    this->BattleSituationLowHealthThreshold = 20.00f;
    this->BattleSituationRelativeLowAltitude = 10000.00f;
    this->BattleSituationRelativeHighAltitude = -10000.00f;
    this->KDSPhase = EKDSPhase::None;
    this->OverrideMaxSpeed = 0.00f;
    this->OverrideNormalSpeed = 0.00f;
    this->VariableWingMinSpeedKmph = 0.00f;
    this->BTComponent = NULL;
    this->BlackboardComponent = NULL;
    this->PartsAnimationParamDataTable = NULL;
    this->RadioStateComp = NULL;
    this->bCanManeuverPugachevsCobra = false;
    this->bCanManeuverKulbit = false;
    this->bHasInstabilityInFormation = false;
    this->BehaviorWork = NULL;
    this->PlaneBodyMeshComponent = NULL;
    this->LandingGearOnMeshComponent = NULL;
    this->LandingGearOffMeshComponent = NULL;
    this->RefuelProbeOffMesh = NULL;
    this->RefuelProbeNavyMesh = NULL;
    this->RefuelProbeAirforceMesh = NULL;
    this->PlaneVFXComponent = NULL;
}

