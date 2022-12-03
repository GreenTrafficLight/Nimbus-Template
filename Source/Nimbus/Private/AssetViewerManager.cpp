#include "AssetViewerManager.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"

AAssetViewerManager::AAssetViewerManager() {
    this->CameraPrefix = TEXT("AVCam_");
    this->ReflectionCubeMap = NULL;
    this->ReflectionCubeMapParameterName = TEXT("RTReflection_Map");
    this->DirectionalLightPrefix = TEXT("AVLight_");
    this->InputScrollInterval = 0.05f;
    this->InputAxisThreshold = 0.50f;
    this->CameraRotationChangeSpeed = 100.00f;
    this->ActorRotationChangeSpeed = 66.60f;
    this->PositionChangeSpeed = 100.00f;
    this->ZoomChangeSpeed = 100.00f;
    this->FOVChangeSpeed = 15.00f;
    this->bBackgroundIsAlpha = false;
    this->RegistryState = EAVRegistryState::AVR_Root;
    this->AssetViewerWidgetClass = NULL;
    this->AssetViewerWidget = NULL;
    this->SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComponent"));
    this->CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
    this->DirectionalLight = NULL;
    this->CurrentSelectedActor = NULL;
    this->AssetObject = NULL;
    this->PlayerPlaneAssetObject = NULL;
    this->AIAssetObject = NULL;
    this->AIPlaneAssetObject = NULL;
    this->bShowingPilot = false;
    this->bShowingWeapons = false;
    this->bShowingLandingGear = false;
    this->bShowingRefuelGear = false;
}

