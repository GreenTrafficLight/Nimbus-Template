#include "TargetSelectionComponent.h"

class AGameObject;
class AWeaponBase;
class UWeaponParameters;

void UTargetSelectionComponent::StartSelectTarget() {
}

void UTargetSelectionComponent::SetJammed(bool bJammed) {
}

void UTargetSelectionComponent::SetIsWideMode(bool bWideMode) {
}

void UTargetSelectionComponent::SetIsAngleFirst(bool bIsAngleFirst) {
}

AGameObject* UTargetSelectionComponent::SelectTarget(bool bForcedSelect) {
    return NULL;
}

void UTargetSelectionComponent::Reset(float LockonRange, bool bResetLockOnRange, float LockonHeight) {
}

void UTargetSelectionComponent::OverrideCloudParameters(const TArray<FCloudVisibilityTime>& VisibilityTimeSettings, const TArray<FCloudVisibilityTime>& SWPVisibilityTimeSettings, const TArray<FCloudVisibilityDistance>& VisibilityDistanceSettings, const TArray<FCloudVisibilityDistance>& SWPVisibilityDistanceSettings) {
}

void UTargetSelectionComponent::OnToggleWeapon(const AWeaponBase* Weapon, const UWeaponParameters* WeaponParam, bool bIsWeaponSpecial) {
}

AGameObject* UTargetSelectionComponent::GetSelectionAssistTarget() const {
    return NULL;
}

AGameObject* UTargetSelectionComponent::GetSelectedTarget() const {
    return NULL;
}

AGameObject* UTargetSelectionComponent::GetFirstLockedOnTarget() const {
    return NULL;
}

TArray<AGameObject*> UTargetSelectionComponent::GetAllLockedOnTargets() {
    return TArray<AGameObject*>();
}

UTargetSelectionComponent::UTargetSelectionComponent() {
    this->UnguidedAssistIconRKT = NULL;
    this->UnguidedAssistIconMGP = NULL;
    this->SemiActiveAssistIcon = NULL;
    this->WingmanIcon = NULL;
    this->WingmanBlockedIcon = NULL;
    this->AirTargetIcon = NULL;
    this->AirTargetBlockedIcon = NULL;
    this->GroundTargetIcon = NULL;
    this->GroundTargetBlockedIcon = NULL;
    this->CloudAirTargetIcon = NULL;
    this->CloudGroundTargetIcon = NULL;
    this->LockonMainIcon = NULL;
    this->LockonMainExIcon = NULL;
    this->LockonMultiTargetIconRow = 3;
    this->LockonMultiTargetIconCol = 4;
    this->LockonSpecialIcon = NULL;
    this->LockonSpecialExIcon = NULL;
    this->LockonImpossibleIcon = NULL;
    this->AirLockonImpossibleIcon = NULL;
    this->GroundLockonImpossibleIcon = NULL;
    this->AirEscortIcon = NULL;
    this->GroundEscortIcon = NULL;
    this->AirEscortLockonImpossibleIcon = NULL;
    this->GroundEscortLockonImpossibleIcon = NULL;
    this->SurrenderIcon = NULL;
    this->WayPointMarkerIcon = NULL;
    this->TGTPReticleIcon = NULL;
    this->TGTPReticleDrawSize = 120.00f;
    this->bUseCameraDistance = false;
    this->MaximumHudBoxScale = 1.00f;
    this->MinimumHudBoxScale = 0.25f;
    this->SelectTargetTimeLimit = 0.50f;
    this->SelectTargetBlinkInterval = 0.20f;
    this->ReactionDuration = 1.00f;
    this->SelectedTarget = NULL;
    this->PreviousSelectedTarget = NULL;
    this->NextTarget = NULL;
    this->bIsJammed = false;
    this->bAngleFirst = true;
    this->bEnableNewTargetSelectionAlgorithm = true;
    this->bInWideMode = true;
    this->TargetDistanceLimit[0] = 30000.00f;
    this->TargetDistanceLimit[1] = 30000.00f;
    this->TargetDistanceLimit[2] = 30000.00f;
    this->TargetAngleLimit[0] = 1.00f;
    this->TargetAngleLimit[1] = 1.00f;
    this->TargetAngleLimit[2] = 1.00f;
    this->TargetAngleLimit[3] = 1.00f;
    this->TargetAngleLimit[4] = 1.00f;
    this->SeekerReturnToCenterTime = 1.00f;
    this->SeekerEnteredCloudTime = 1.00f;
    this->SeekerEnteredCloudSpeed = 0.60f;
    this->SeekerLockingInCloudChangeDirectionTime = 1.00f;
    this->SeekerLockingInCloudSpeed = 1.50f;
    this->SeekerMaxCloudOffsetDistance = 500.00f;
    this->UpdateTargetCandidatesRate = 10.00f;
    this->bUseVisualIdentification = false;
    this->DistanceToBecomeVisibleInSandMeters = 300.00f;
    this->DistanceToBecomeInvisibleInSandMeters = 500.00f;
    this->PlayerWeaponActivator = NULL;
    this->HUD = NULL;
    this->TargetHistoryResetTime = 1.50f;
    this->CurrentSelectionAssistLockTarget = NULL;
    this->ShootPromptCloudDensity = 0.25f;
}

