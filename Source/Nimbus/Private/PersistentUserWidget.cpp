#include "PersistentUserWidget.h"

void UPersistentUserWidget::OnWeaponActivatorInitialize() {
}

void UPersistentUserWidget::OnSpecialWeaponChanged() {
}

void UPersistentUserWidget::OnHUDEnabled() {
}

void UPersistentUserWidget::OnCurrentHUDAlertColorUpdated(const FLinearColor& NewColor, bool bIsDefaultColor) {
}

UPersistentUserWidget::UPersistentUserWidget() {
    this->MissionPhaseSecondsLeftToStartBlinking = 10.00f;
    this->TimerBlinkRate = 4.00f;
    this->PitchMeterAngleInterval = 2.50f;
    this->PitchMeterPositiveTexture = NULL;
    this->PitchMeterHalfPositiveTexture = NULL;
    this->PitchMeterNegativeTexture = NULL;
    this->PitchMeterHalfNegativeTexture = NULL;
    this->PitchMeterNeutralTexture = NULL;
    this->TimeScoreTargetInfoShowGroup = 0;
    this->PlaneIconInfoShowGroup = 0;
    this->PlaneTextInfoShowGroup = 0;
    this->PlayerWeaponActivator = NULL;
    this->WeaponDisplaySequence.AddDefaulted(12);
    this->TargetSelectionComp = NULL;
}

