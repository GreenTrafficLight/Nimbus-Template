#include "NimbusReplayPawn.h"
#include "Components/SkeletalMeshComponent.h"

void ANimbusReplayPawn::OnPlayerReposition() {
}

ANimbusReplayPawn::ANimbusReplayPawn() {
    this->PreviewMesh = NULL;
    this->ReplayWidgetClass = NULL;
    this->CameraInfoWidgetClass = NULL;
    this->PassCameraSettingsTable = NULL;
    this->PassCameraDebugSettingsTable = NULL;
    this->PassCameraDefaultSettingsTable = NULL;
    this->CameraSettingsTable = NULL;
    this->PreviewMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("PreviewMesh"));
    this->PlayerPlane = NULL;
}

