#include "ImpactCameraData.h"

FImpactCameraData::FImpactCameraData() {
    this->PlayTime = 0.00f;
    this->HitReaction = EImpactCameraObjectHitReaction::None;
    this->HitReactionParameter = 0.00f;
    this->bEmergencyAvoidance = false;
    this->EmergencyAvoidanceTime = 0.00f;
    this->CameraAnim = NULL;
    this->SupplementCurve_Location = NULL;
    this->bSupplementTargetRelativeCoordinatesMode = false;
    this->SupplementCurve_Rotation = NULL;
    this->bSupplementCurve_RotationRollMode = false;
    this->SupplementCurve_Fov = NULL;
    this->LookAtCategory = EImpactCameraLookAtCategory::LookAtTarget;
    this->bWallHitLookAtCategoryForced = false;
    this->LookAtTargetCategory = EImpactCameraObject::FocusObject1;
    this->StandardLocationCategory = EImpactCameraObject::FocusObject1;
    this->StandardRotationCategory = EImpactCameraObject::FocusObject1;
    this->bUesFirstFocusObjectRotation = false;
    this->bUesPreviousCameraLocation = false;
    this->bUesFocusObjectRotation_Pitch = false;
    this->bUesFocusObjectRotation_Roll = false;
    this->bUesFocusObjectRotation_Yaw = false;
    this->bFocusObjectInertiaWhenStopped = false;
    this->InertiaDeceleration = 0.00f;
    this->PostProcessMaterial = NULL;
    this->SlowCurve = NULL;
    this->bPlayBombImpactCameraShake = false;
}

