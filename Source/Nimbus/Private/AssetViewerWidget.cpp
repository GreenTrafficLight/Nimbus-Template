#include "AssetViewerWidget.h"

UAssetViewerWidget::UAssetViewerWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->ScrollBarItemOffset = 0.00f;
    this->RegistryText = NULL;
    this->RegistryScrollBox = NULL;
    this->PlayerInfoCanvas = NULL;
    this->SWPNoHBox = NULL;
    this->CurrentCameraText = NULL;
    this->CameraLocationXText = NULL;
    this->CameraLocationYText = NULL;
    this->CameraLocationZText = NULL;
    this->CameraRotationPitchText = NULL;
    this->CameraRotationYawText = NULL;
    this->CameraRotationRollText = NULL;
    this->CameraDistText = NULL;
    this->CameraFOVText = NULL;
    this->CurrentActorText = NULL;
    this->ActorLocationXText = NULL;
    this->ActorLocationYText = NULL;
    this->ActorLocationZText = NULL;
    this->ActorRotationPitchText = NULL;
    this->ActorRotationYawText = NULL;
    this->ActorRotationRollText = NULL;
    this->AssetViewerManager = NULL;
}

