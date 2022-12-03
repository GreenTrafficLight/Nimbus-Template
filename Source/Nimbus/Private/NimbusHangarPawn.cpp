#include "NimbusHangarPawn.h"
#include "Camera/CameraComponent.h"

ANimbusHangarPawn::ANimbusHangarPawn() {
    this->CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
    this->UIManagerClass = NULL;
    this->UIManager = NULL;
}

