#include "MiniMapLayerWidget.h"

void UMiniMapLayerWidget::UpdateMiniMapRadarVisibility(EMiniMapType NewMiniMapType) {
}

void UMiniMapLayerWidget::OnUpdateMiniMapRadarVisibility_Implementation(EMiniMapType NewMiniMapType) {
}

void UMiniMapLayerWidget::OnHUDAlertEnd() {
}

void UMiniMapLayerWidget::OnHUDAlertBegin() {
}

void UMiniMapLayerWidget::OnCurrentHUDAlertColorUpdated(const FLinearColor& NewColor, bool bIsDefaultColor) {
}

UMiniMapLayerWidget::UMiniMapLayerWidget() {
    this->InitialMiniMap = EMiniMapType::MMRADAR;
    this->IconImageMaterialBase = NULL;
    this->MiniMapSearchCombatAreaMaterialBase = NULL;
    this->CircleIconMaterialBase = NULL;
    this->IconTextureAir = NULL;
    this->IconTextureAirGradation = NULL;
    this->IconTextureAirCloud = NULL;
    this->IconTextureAirEscort = NULL;
    this->IconTextureAirEscortGradation = NULL;
    this->IconTextureAirNPC = NULL;
    this->IconTextureAirNPCGradation = NULL;
    this->IconTextureAirTGT = NULL;
    this->IconTextureAirTGTGradation = NULL;
    this->IconTextureGround = NULL;
    this->IconTextureGroundGradation = NULL;
    this->IconTextureGroundEscort = NULL;
    this->IconTextureGroundEscortGradation = NULL;
    this->IconTextureGroundTGT = NULL;
    this->IconTextureGroundTGTGradation = NULL;
    this->IconTexturePlayer = NULL;
    this->IconTexturePlayerHeading = NULL;
    this->IconTexturePlayerGradation = NULL;
    this->IconTextureWeapon = NULL;
    this->IconTextureAreaCircleDashedLine = NULL;
    this->IconTextureAreaCircleSolidLine = NULL;
    this->IconTextureAreaCircleFill = NULL;
    this->IconTextureAreaCircleGradation = NULL;
    this->IconTexturePingRadius = NULL;
    this->IconTextureOutOfRange = NULL;
    this->IconTextureOutOfRangeGradation = NULL;
    this->IconTextureTGTOutOfRange = NULL;
    this->IconTextureTGTOutOfRangeGradation = NULL;
    this->IconTextureAirAlly = NULL;
    this->IconTextureAirAllyGradation = NULL;
    this->IconTextureArea = NULL;
    this->IconTextureJammingArea = NULL;
    this->IconTextureSubmarineSearchArea = NULL;
    this->IconSubmarineSearchAreaLineWidth = 0.00f;
    this->IconTextureSubmarineSearchAreaGradation = NULL;
    this->IconReturnLine = NULL;
    this->IconTextureWhite = NULL;
    this->IconTexturePredictedWeaponTrajectory = NULL;
    this->IconTexturePredictedWeaponTrajectoryAlcnLine = NULL;
    this->IconTexturePredictedWeaponTrajectoryAlcn = NULL;
    this->IconTexturePredictedWeaponTrajectoryAlcnFill = NULL;
    this->IconTextureCombatZoneHorizontalLine = NULL;
    this->IconTextureCombatZoneVerticalLine = NULL;
    this->IconTextureSonar = NULL;
    this->IconTextureSonarPosition = NULL;
    this->CombatZoneAreaBrush = NULL;
    this->IconTextureAirTGTRing = NULL;
    this->IconTextureAirTGTRingGradation = NULL;
    this->IconTextureGroundTGTRing = NULL;
    this->IconTextureGroundTGTRingGradation = NULL;
    this->IconRenderScale = 1.00f;
    this->IconInCloudOpacity = 0.00f;
    this->IconInCloudGradationOpacity = 0.00f;
    this->IconGradationOpacity = 0.00f;
    this->IconPlayerGradationOpacity = 0.00f;
    this->EnemyDamagedHealth = 40.00f;
    this->UnidentifiedColorChangeTime = 1.00f;
    this->PingScaleAmount = 7.00f;
    this->BackgroundColorDesaturationMultiplier = 0.00f;
    this->BackgroundOpacityDesaturationMultiplier = 0.00f;
    this->PredictedWeaponTrajectoryWidth = 10.00f;
    this->PredictedWeaponTrajectoryWidthAlcn = 30.00f;
    this->PredictedWeaponTrajectoryMinDistanceMeters = 10000.00f;
    this->PredictedWeaponTrajectoryTimeToReachFullLength = 1.00f;
    this->CombatZoneLineIconThickness = 5.00f;
    this->LandingLineIconThickness = 5.00f;
    this->CombatAreaTextureSize = 3072.00f;
    this->bRenderCombatZone = true;
    this->CircleIconDensityCurve = NULL;
    this->PredictedWeaponTrajectoryAlphaCurve = NULL;
    this->EffectsSaturation = 0.02f;
    this->bApplyGammaCorrection = false;
    this->PingTotalDuration = 0.00f;
    this->AllyPingTotalDuration = 0.00f;
    this->PingPlayEvent = NULL;
    this->MiniMapSearchWidget = NULL;
    this->MiniMapEnlargedWidget = NULL;
    this->MiniMapBattleWidget = NULL;
    this->MiniMapJammerWidget = NULL;
    this->ScanningWidget = NULL;
    this->ScanningImage = NULL;
    this->ScanningImageMID = NULL;
}

