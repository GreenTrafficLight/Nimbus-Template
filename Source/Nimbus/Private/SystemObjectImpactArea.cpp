#include "SystemObjectImpactArea.h"

void ASystemObjectImpactArea::SetAreaModeShrinking(float InTime, float InWaitTime) {
}

void ASystemObjectImpactArea::SetAreaModeExpansion(float InFallDelaySeconds, float InHeliosRadioForeWarnTime) {
}

ASystemObjectImpactArea::ASystemObjectImpactArea() {
    this->Radius = 10000.00f;
    this->bInsideImpactAreaIsOutline = true;
    this->bAreaOutlineSliceDisplay = true;
    this->bImpactAreaSliceDisplay = true;
    this->MinAltitudeInMeter = 0.00f;
}

