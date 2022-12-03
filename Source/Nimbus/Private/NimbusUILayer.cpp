#include "NimbusUILayer.h"

class UNimbusUILayerManager;









bool UNimbusUILayer::IsCurrentLayer() {
    return false;
}

void UNimbusUILayer::GotoPreviousLayer() {
}

void UNimbusUILayer::GotoNextLayer() {
}

UNimbusUILayerManager* UNimbusUILayer::GetUILayerManager() {
    return NULL;
}

UNimbusUILayer::UNimbusUILayer() : UUserWidget(FObjectInitializer::Get()) {
    this->CurrentFocusedButton = NULL;
    this->DefaultNextLayerUIId = ENimbusUIId::None;
    this->bEnableLayerNavigation = true;
    this->bNeedBackground = true;
}

