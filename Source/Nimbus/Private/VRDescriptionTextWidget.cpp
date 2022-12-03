#include "VRDescriptionTextWidget.h"

void UVRDescriptionTextWidget::InitializeAnimate() {
}

UVRDescriptionTextWidget::UVRDescriptionTextWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->DelaySeconds = 1.00f;
    this->DescriptionText = NULL;
}

