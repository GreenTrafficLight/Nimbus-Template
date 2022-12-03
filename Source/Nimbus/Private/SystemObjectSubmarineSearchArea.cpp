#include "SystemObjectSubmarineSearchArea.h"

void ASystemObjectSubmarineSearchArea::SetSearchArea(const FVector NewPosition, float InRadius) {
}

void ASystemObjectSubmarineSearchArea::SetRadius(float InRadius) {
}

void ASystemObjectSubmarineSearchArea::SetEnable(bool bEnabled) {
}

void ASystemObjectSubmarineSearchArea::PlaySonarEffect() {
}

ASystemObjectSubmarineSearchArea::ASystemObjectSubmarineSearchArea() {
    this->bAutoEnable = true;
    this->Radius = 5000.00f;
    this->ContractionTime = 0.30f;
    this->IconAlphaFadePerSecond = 0.80f;
    this->IconSubmarineSearchAreaAlphaCurve = NULL;
    this->IconDisableSubmarineSearchAreaAlpha = 0.00f;
}

