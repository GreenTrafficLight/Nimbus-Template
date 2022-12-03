#include "PitchMeterWidget.h"

void UPitchMeterWidget::CurrentHUDAlertColorUpdated_Implementation(const FLinearColor& NewColor, bool bIsDefaultColor) {
}

UPitchMeterWidget::UPitchMeterWidget() {
    this->PitchMeterAngleInterval = 2.50f;
    this->PitchMeterPositiveTexture = NULL;
    this->PitchMeterHalfPositiveTexture = NULL;
    this->PitchMeterNegativeTexture = NULL;
    this->PitchMeterHalfNegativeTexture = NULL;
    this->PitchMeterNeutralTexture = NULL;
}

