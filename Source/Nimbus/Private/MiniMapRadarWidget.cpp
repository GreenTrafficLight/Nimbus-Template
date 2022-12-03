#include "MiniMapRadarWidget.h"

void UMiniMapRadarWidget::RefreshMiniMap() {
}

void UMiniMapRadarWidget::OnHUDEnabled() {
}

void UMiniMapRadarWidget::OnHUDAlertEnd() {
}

void UMiniMapRadarWidget::OnHUDAlertBegin() {
}

void UMiniMapRadarWidget::OnCurrentHUDAlertColorUpdated(const FLinearColor& NewColor, bool bIsDefaultColor) {
}

void UMiniMapRadarWidget::ChangeRadarLineColor_Implementation() {
}

UMiniMapRadarWidget::UMiniMapRadarWidget() {
    this->IconTextureCircleLarge = NULL;
    this->IconTextureCircleMedium = NULL;
    this->IconTextureCircleSmall = NULL;
    this->MiniMapZoomTimeInSecond = 1.00f;
    this->MiniMapZoomEaseOutExponent = 4.00f;
    this->RadarCircleLarge = NULL;
    this->RadarCircleMedium = NULL;
    this->RadarCircleSmall = NULL;
    this->DirectionCompassRadius = 120.00f;
    this->NorthText = NULL;
    this->SouthText = NULL;
    this->EastText = NULL;
    this->WestText = NULL;
}

