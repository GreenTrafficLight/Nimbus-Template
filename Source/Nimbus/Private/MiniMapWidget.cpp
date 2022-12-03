#include "MiniMapWidget.h"



void UMiniMapWidget::SetRenderIconScale(const float Scale) {
}

void UMiniMapWidget::SetPlayerIconScale(const float Scale) {
}

void UMiniMapWidget::RefreshMiniMap() {
}

void UMiniMapWidget::OnHUDDisabled() {
}

void UMiniMapWidget::OnHUDAlertEnd() {
}

void UMiniMapWidget::OnHUDAlertBegin() {
}

void UMiniMapWidget::OnCurrentHUDAlertColorUpdated(const FLinearColor& NewColor, bool bIsDefaultColor) {
}

void UMiniMapWidget::OnCombatZoneUpdated() {
}

FVector2D UMiniMapWidget::GetMiniMapSize() const {
    return FVector2D{};
}

UMiniMapWidget::UMiniMapWidget() {
    this->MiniMapRefreshRate = 0.50f;
    this->bAlignCanvasToPlayer = false;
    this->bRenderCombatZone = false;
    this->bRenderSelectedTargetBlinking = false;
    this->bRenderWeapons = false;
    this->bRenderGroundAIAsUnits = false;
    this->MiniMapExtent = 500000.00f;
    this->CombatAreaIcon = NULL;
    this->CombatAreaMID = NULL;
    this->MaxOutOfRangeLocatorCount = 4;
    this->DottedLineSegmentSize = 8.00f;
    this->DottedLineSpaceSegmentSize = 6.00f;
    this->RenderIconScale = 1.00f;
    this->ParentMiniMapLayerWidget = NULL;
    this->bIsInitialized = false;
}

