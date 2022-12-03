#include "PlaneVFXComponent.h"

void UPlaneVFXComponent::ResetParameters() {
}

void UPlaneVFXComponent::OnRestored() {
}

void UPlaneVFXComponent::OnReposition() {
}

void UPlaneVFXComponent::OnOwnerVisibilityChanged(bool bVisibility) {
}

void UPlaneVFXComponent::IGCUpdateParams(float WingTipVapor, float ShoulderVapor, float WingSurfaceVapor, float WingOverVapor, float WingOverVaporHighGTurn, float AfterBurner) {
}

UPlaneVFXComponent::UPlaneVFXComponent() {
    this->PlaneMeshName = TEXT("PlaneBodyMesh");
    this->CockpitMeshName = TEXT("CockpitMesh");
    this->CockpitMeshVRName = TEXT("CockpitMeshVR");
    this->VFXTickMinDistanceUU = 40000.00f;
    this->VFXTickMaxIntervalSeconds = 1.00f;
    this->VFXFadeTime = 1.00f;
    this->WingTipVaporFadeInOutTime = 1.00f;
    this->WingTipVaporMaxSize = 200.00f;
    this->WingTipVaporMinDistanceUU = 5000.00f;
    this->WingTipVaporMaxSpawnPerUnit = 1000.00f;
    this->WingTipVaporMinSpawnPerUnit = 500.00f;
    this->HeatDistortionEmissionRateMin = 24.00f;
    this->HeatDistortionEmissionRateMax = 24.00f;
    this->HeatDistortionIntensityMin = 0.02f;
    this->HeatDistortionIntensityMax = 0.04f;
    this->SpeedRatioThresholdToDisplayAfterburnerForAI = 0.80f;
    this->bUseRibbonCollectionForAIWingTip = true;
    this->LowAltitudeTrail = NULL;
    this->WingTipRibbonCollectionActor = NULL;
}

