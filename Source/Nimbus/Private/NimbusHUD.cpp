#include "NimbusHUD.h"

class UTexture2D;
class UFont;
class UMaterialInterface;
class UWidget;
class UCanvasPanelSlot;

void ANimbusHUD::ShowMovieEmblem(const TArray<UTexture2D*> ImageTextures) {
}

void ANimbusHUD::SetHUDDistortionScale(float NewDistortionScale) {
}

void ANimbusHUD::ResetCameraSensitivePosition(bool bIsPlaneBodyVisible) {
}

void ANimbusHUD::PlayMiniMapScanningEffect() {
}

bool ANimbusHUD::OpenDebugMenu() {
    return false;
}

void ANimbusHUD::OnEndLanding() {
}

void ANimbusHUD::OnEndAerialRefueling() {
}

void ANimbusHUD::OnBeginLanding() {
}

void ANimbusHUD::OnBeginAerialRefueling() {
}

bool ANimbusHUD::IsDebugMode() {
    return false;
}

bool ANimbusHUD::IsBehindMiniMap(const FVector2D& InScreenPosition) {
    return false;
}

void ANimbusHUD::HideMovieEmblem() {
}

void ANimbusHUD::HideGuideMessage() {
}

FVector2D ANimbusHUD::GetScreenSize() const {
    return FVector2D{};
}

FVector2D ANimbusHUD::GetMiniMapSize() const {
    return FVector2D{};
}

UFont* ANimbusHUD::GetHUDFont() const {
    return NULL;
}

bool ANimbusHUD::GetHUDEnabled() const {
    return false;
}

EMiniMapType ANimbusHUD::GetCurrentMiniMapType() const {
    return EMiniMapType::MMRADAR;
}

void ANimbusHUD::EndHUDDistortion() {
}

void ANimbusHUD::DrawWidgetTextWorldSpace(const FString& Text, FLinearColor TextColor, const FVector& WldPos, const FVector2D& ScreenOffset, float Scale, bool bScalePosition, int32 ZOrder) {
}

void ANimbusHUD::DrawWidgetTextureWorldSpace(UTexture2D* InTexture, const FVector& WldPos, const FVector2D& ScreenOffset, const FVector2D& Size, float Rotation, const FLinearColor& Color, int32 ZOrder, bool bNeedDrawAccurately, float inScale) {
}

void ANimbusHUD::DrawWidgetTexture(UTexture2D* InTexture, const FVector2D& Pos, const FVector2D& Size, float Rotation, const FLinearColor& Color, int32 ZOrder) {
}

void ANimbusHUD::DrawWidgetText(const FString& Text, FLinearColor TextColor, const FVector2D& Pos, float Scale, bool bScalePosition, int32 ZOrder, const FVector2D& Alignment) {
}

void ANimbusHUD::DrawWidgetMaterialWorldSpace(UMaterialInterface* InMaterial, const FVector& WldPos, const FVector2D& ScreenOffset, const FVector2D& Size, float Rotation, const FLinearColor& Color, int32 ZOrder, bool bNeedDrawAccurately, float inScale) {
}

void ANimbusHUD::DrawWidgetMaterial(UMaterialInterface* InMaterial, const FVector2D& Pos, const FVector2D& Size, float Rotation, const FLinearColor& Color, int32 ZOrder) {
}

void ANimbusHUD::DrawWidgetLineWorldSpace(const FVector& StartWldPos, const FVector& EndWldPos, int32 SegmentCount, const FLinearColor& InColor) {
}

void ANimbusHUD::DrawWidgetLineVectorWorldSpace(const FVector& StartWldPos, const FVector& Extent, float LengthOnScreen, int32 SegmentCount, const FLinearColor& InColor) {
}

void ANimbusHUD::DrawWidgetLine(const FVector2D& StartPos, const FVector2D& EndPos, int32 SegmentCount, const FLinearColor& InColor) {
}

void ANimbusHUD::DrawWidgetEllipseWorldSpace(const FVector& Center, const FVector& HorizontalExtent, const FVector& VerticalExtent, const FVector& SegmentXAxis, int32 SegmentCount, const FLinearColor& InColor) {
}

void ANimbusHUD::DrawWidgetEllipse(const FVector2D& Center, float HorizontalRadius, float VerticalRadius, float Rotation, float SegmentOrientation, int32 SegmentCount, const FLinearColor& InColor) {
}

void ANimbusHUD::DrawWidgetCircleWorldSpace(const FVector& Center, const FVector& Normal, float Radius, const FVector& SegmentXAxis, int32 SegmentCount, const FLinearColor& InColor) {
}

void ANimbusHUD::DrawWidgetCircle(const FVector2D& Center, float Radius, float SegmentOrientation, int32 SegmentCount, const FLinearColor& InColor) {
}

void ANimbusHUD::DrawSimpleWidgetCircleWorldSpace(const FVector& Center, const FVector& Up, const FVector& Normal, float Radius, int32 SegmentCount, const FLinearColor& InColor, bool bDottedLine) {
}

void ANimbusHUD::DisplayGuideMessage(EGuideMessageType MessageType) {
}

bool ANimbusHUD::CloseDebugMenu() {
    return false;
}

void ANimbusHUD::ChangeHUDMode(ENimbusHUDMode NewMode) {
}

void ANimbusHUD::BeginHUDDistortion(float MinDistortionScale, float MaxDistortionScale, float HideContainerDuration, float ShowContainerDuration) {
}

UCanvasPanelSlot* ANimbusHUD::AddChildToHudWidget(UWidget* Content) {
    return NULL;
}

ANimbusHUD::ANimbusHUD() {
    this->HudWidgetClass = NULL;
    this->HudWidgetVRClass = NULL;
    this->HudWidget = NULL;
    this->HudWidgetConverter = NULL;
    this->HudPostProcessConverter = NULL;
    this->HudWidgetVRActor = NULL;
    this->StereoCentralUIMID = NULL;
    this->StereoHudWidgetClass = NULL;
    this->StereoCentralUIMaterial = NULL;
    this->StereoHudWidget = NULL;
    this->HUD3DUIMgr = NULL;
    this->VRHudFontSize = 12.00f;
    this->GunReticleTextureVR = NULL;
    this->MaxDistanceToShowGunReticle = 1200.00f;
    this->GunReticleEffectiveRangeRatio = 0.75f;
    this->GunReticleBarMaterial = NULL;
    this->GunReticleBarMaterialVR = NULL;
    this->GunReticleBarMID = NULL;
    this->ShowGroupAppearInterval = 0.50f;
    this->ShowGroupAppearDelay = 1.00f;
    this->VelocityVectorShowGroup = 0;
    this->VelocityVectorDrawDepth = 50.00f;
    this->VelocityVectorTexture = NULL;
    this->ExplosiveWeaponReticleTexture = NULL;
    this->EscortOutOfScreenTexture = NULL;
    this->EscortDisplayScreenOffsetRatio = 0.00f;
    this->PaperPlaneSceneCaptureActor = NULL;
    this->PaperArrowSceneCaptureActor = NULL;
    this->TargetContainerWidgetClass = NULL;
    this->MovieSubtitleWidgetClass = NULL;
    this->MovieSubtitleWidget = NULL;
    this->MiniMapLayerWidgetClass = NULL;
    this->DebugInfoLayerWidgetClass = NULL;
    this->DistortionEffectScale = 0.10f;
    this->LandingGuideHorizontalTexture = NULL;
    this->LandingGuideVerticalTexture = NULL;
    this->LandingGuideMaterial = NULL;
    this->LandingGuideHorizontalInst = NULL;
    this->LandingGuideVerticalInst = NULL;
    this->LandingGuideBillboardActor = NULL;
    this->LandingGuideSlopeLength = 18000.00f;
    this->LandingGuideSlopeHeight = 2000.00f;
    this->LandingGuideTextureScale = 1.00f;
    this->LandingGuideVRTextureScale = 0.50f;
    this->TGTPLineMaxLengthMeters = 200.00f;
    this->TGTPLineThickness = 1.00f;
    this->AerialRefuelBillboardActor = NULL;
    this->GlowIntensityOnEnabled = 5.00f;
    this->GlowFadeDuration = 0.50f;
    this->PaperArrowNearDistanceMeters = 1000.00f;
    this->PaperArrowFarDistanceMeters = 10000.00f;
    this->PaperArrowNearDistanceScale = 1.00f;
    this->PaperArrowFarDistanceScale = 2.00f;
    this->StarStatusImageMaterial = NULL;
    this->StarStatusMaterialInst = NULL;
    this->OverlayTargetContainerOpacity = 0.20f;
    this->BattleNavigationPingDuration = 15.00f;
    this->JammingDistortionDecayRate = 9.00f;
    this->JammingDistortionMinScale = 0.05f;
    this->JammingDistortionMaxScale = 0.30f;
    this->StrongJammingDistortionDefaultScale = 3.00f;
    this->Texture3DUIActorClass = NULL;
    this->TargetContainer3DUIActorClass = NULL;
    this->AerialRefuel3DUIActorClass = NULL;
    this->PlayerPlane = NULL;
    this->GameInstance = NULL;
    this->MADIndicatorImageMID = NULL;
    this->LandingVolume = NULL;
}

