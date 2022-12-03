#include "IGCPlaneController.h"

class APlayerPlane;
class ACameraActor;
class AAIPlane;

void AIGCPlaneController::OnIGCStart(bool bStopPlaneSounds) {
}

void AIGCPlaneController::OnIGCEnd() {
}

void AIGCPlaneController::OnIgcCameraChanged(ACameraActor* NewCameraActor) {
}

APlayerPlane* AIGCPlaneController::GetControlledPlayerPlane() const {
    return NULL;
}

AAIPlane* AIGCPlaneController::GetControlledAIPlane() const {
    return NULL;
}

AIGCPlaneController::AIGCPlaneController() {
    this->bSpawnPlayerPlane = false;
    this->bKeepCockpitMesh = false;
    this->SpawnPlayerPlaneClass = NULL;
    this->SpawnAIPlaneClass = NULL;
    this->CameraReferencePlayerPlaneClass = NULL;
    this->bUseReplayDataForAnimation = true;
    this->bEnableSpeedControl = true;
    this->bEnableAIPlaneAutoSpeedControl = false;
    this->bEnableAIPlaneAutoVFXControl = false;
    this->GroundHeightTickDuration = 1.00f;
    this->bAutoSpinTireOnGround = false;
    this->SpecialWeaponNumber = 0;
    this->bShowDropTank = false;
    this->Elvl = 0.00f;
    this->Elvr = 0.00f;
    this->Rudl = 0.00f;
    this->Rudr = 0.00f;
    this->Alrl = 0.00f;
    this->Alrr = 0.00f;
    this->Tefn = 0.00f;
    this->Vctl = 0.00f;
    this->Vctr = 0.00f;
    this->Vcth = 0.00f;
    this->Cndl = 0.00f;
    this->Cndr = 0.00f;
    this->Spll = 0.00f;
    this->Splr = 0.00f;
    this->Nzln = 0.00f;
    this->Abkn = 0.00f;
    this->Rmpn = 0.00f;
    this->Lefn = 0.00f;
    this->Vwgn = 0.00f;
    this->Lipn = 0.00f;
    this->Rotn = 0.00f;
    this->Cmbr = 0.00f;
    this->Gunc = 0.00f;
    this->Misc = 0.00f;
    this->Spwc = 0.00f;
    this->Swc1 = 0.00f;
    this->Swc2 = 0.00f;
    this->Swc3 = 0.00f;
    this->Swca = 0.00f;
    this->Swcb = 0.00f;
    this->Swcc = 0.00f;
    this->Fdwg = 0.00f;
    this->Tire = 0.00f;
    this->Ldga = -1.00f;
    this->Fsus = -1.00f;
    this->Lsus = -1.00f;
    this->Rsus = -1.00f;
    this->Lchb = 0.00f;
    this->Hook = 0.00f;
    this->Ldab = 0.00f;
    this->Replay_PitchPower = 0.00f;
    this->Replay_YawPower = 0.00f;
    this->Replay_RollPower = 0.00f;
    this->Replay_AfterBurner = 0.00f;
    this->Replay_AirBrake = 0.00f;
    this->Replay_Accele = 0.00f;
    this->Replay_Speed = 0.00f;
    this->Replay_Gear = 0.00f;
    this->Replay_Aoa = 0.00f;
    this->Replay_Sus = 0.00f;
    this->Replay_Tire = 0.00f;
    this->Replay_Thrust = 0.00f;
    this->SusFrontMask = 1.00f;
    this->SusBackMask = 1.00f;
    this->WingTipVaporIntensity = 0.00f;
    this->ShoulderVaporIntensity = 0.00f;
    this->WingSurfaceVaporIntensity = 0.00f;
    this->WingOverVaporIntensity = 0.00f;
    this->WingOverVaporHighGTurnIntensity = 0.00f;
    this->AfterburnerIntensity = 0.00f;
    this->bIsForcedMinimumLOD = false;
    this->bIsOnGround = false;
    this->ForcedPitchOnGround = 0.00f;
    this->bEnablePlayerCamera = false;
    this->bShowCockpitMesh = false;
    this->bEnableCameraViewChange = false;
    this->bAlignPlayerPlaneToCamera = false;
    this->bAlignCameraToPlayerPlane = false;
    this->bKeepOnGroundWhenAlignPlayerPlaneToCamera = false;
    this->bEnableAsfxTefnConstrain = false;
    this->bEnableAsfxLefnConstrain = false;
    this->bDisableMotionBlur = false;
    this->AnchoredFollower = NULL;
}

