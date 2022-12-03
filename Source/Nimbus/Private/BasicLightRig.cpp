#include "BasicLightRig.h"
#include "Components/SceneComponent.h"
#include "Components/SceneCaptureComponentCube.h"





void ABasicLightRig::UpdateBlendHeight() {
}





void ABasicLightRig::OnTransitionToMiniGameEvent_Native(bool bIsTransitingIn) {
}



bool ABasicLightRig::GetUseOfflineCapture() const {
    return false;
}





































ABasicLightRig::ABasicLightRig() {
    this->SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->bUseOfflineCapture = false;
    this->Output_BelowClouds = NULL;
    this->Output_InClouds = NULL;
    this->Output_AboveClouds = NULL;
    this->Output_NoCubemapBlending = NULL;
    this->bUseUndergroundSunMask = false;
    this->UndergroundSunMaskMinHeight = 0.00f;
    this->UndergroundSunMaskMaxHeight = 0.00f;
    this->GlobalMPC = NULL;
    this->LightRigMPC = NULL;
    this->MaterialTextureBelowClouds = NULL;
    this->MaterialTextureInClouds = NULL;
    this->MaterialTextureAboveClouds = NULL;
    this->MaterialTextureNoBlending = NULL;
    this->OfflineCapture_BelowClouds = CreateDefaultSubobject<USceneCaptureComponentCube>(TEXT("SceneCaptureCube_BelowClouds_Native"));
    this->OfflineCapture_InClouds = CreateDefaultSubobject<USceneCaptureComponentCube>(TEXT("SceneCaptureCube_InClouds_Native"));
    this->OfflineCapture_AboveClouds = CreateDefaultSubobject<USceneCaptureComponentCube>(TEXT("SceneCaptureCube_AboveClouds_Native"));
    this->OfflineCapture_NoCubemapBlending = CreateDefaultSubobject<USceneCaptureComponentCube>(TEXT("SceneCaptureCube_Native"));
}

