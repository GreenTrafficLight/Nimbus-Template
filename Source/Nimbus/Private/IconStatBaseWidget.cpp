#include "IconStatBaseWidget.h"

void UIconStatBaseWidget::SetForcedPlaneIconDefaultColor(const FLinearColor& Color) {
}

void UIconStatBaseWidget::OnWeaponActivatorInitialize() {
}

void UIconStatBaseWidget::OnSpecialWeaponChanged() {
}

void UIconStatBaseWidget::OnHUDEnabled() {
}

UIconStatBaseWidget::UIconStatBaseWidget() {
    this->WeaponDisplaySequence.AddDefaulted(12);
}

