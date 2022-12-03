#include "UIBaseWidget.h"

class AUIManagerActor;

AUIManagerActor* UUIBaseWidget::GetUIManagerActor() {
    return NULL;
}

UUIBaseWidget::UUIBaseWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->bEnableGlow = true;
    this->WidgetMeshShape = EWidgetShape::Quad;
    this->bUsedForVROverlay = false;
    this->DelayTimeBeforeTextAnimation = 0.00f;
    this->UIManagerActor = NULL;
    this->UIWidgetComponent = NULL;
}

