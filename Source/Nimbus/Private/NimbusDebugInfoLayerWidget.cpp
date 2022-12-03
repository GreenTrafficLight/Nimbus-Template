#include "NimbusDebugInfoLayerWidget.h"

void UNimbusDebugInfoLayerWidget::OnEnableHud() {
}

void UNimbusDebugInfoLayerWidget::OnDisableHud() {
}

void UNimbusDebugInfoLayerWidget::OnDetectedMissionHitch(const FMissionHitchInfo& InMissionHitchInfo) {
}

UNimbusDebugInfoLayerWidget::UNimbusDebugInfoLayerWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->DebugContainerIcon = NULL;
    this->TargetContainerWidgetClass = NULL;
    this->PickedTarget = NULL;
}

