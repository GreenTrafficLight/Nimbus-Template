#include "GenericMenu.h"
#include "Camera/CameraComponent.h"

bool AGenericMenu::SetActiveLayerId(int32 LayerId, bool ForceSet) {
    return false;
}

void AGenericMenu::PrevLayer() {
}

void AGenericMenu::NextLayer() {
}

AGenericMenu::AGenericMenu() {
    this->MaxMenuLayers = 0;
    this->MaxVisibleLayers = 0;
    this->ActiveLayerDistance = 890.00f;
    this->LayerDistanceInterval = 380.00f;
    this->LocationTransitionDuration = 1.00f;
    this->ActiveLayerAlpha = 0.95f;
    this->LayerAlphaStep = -0.10f;
    this->AlphaTransitionDuration = 0.75f;
    this->ActiveLayerId = 0;
    this->bUseDOF = true;
    this->bUseSeparateTranslucency = true;
    this->Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("MenuCamera"));
    this->CameraTransitionDuration = 1.50f;
}

