#include "NimbusBlueprintLibraryVR.h"

class USubtitleWidget;
class ARadioManager;
class APlayerPlane;
class UNimbusGameInstance;
class AGameObject;
class ANimbusHUD;
class UUserWidget;
class AActor;
class UNimbusUserWidget;
class UObject;
class UMenuBaseWidget;
class USceneComponent;
class UTextureRenderTarget2D;
class UStaticMeshComponent;
class UMiniMapLayerWidget;

void UNimbusBlueprintLibraryVR::SubTitleAutoBind(USubtitleWidget* SubtitleWidget, ARadioManager* RadioManager, bool bBind) {
}

void UNimbusBlueprintLibraryVR::StopPlayingID(const int32 in_playingID) {
}

void UNimbusBlueprintLibraryVR::StopPlayerPlaneVibrations(APlayerPlane* PlayerPlane) {
}

void UNimbusBlueprintLibraryVR::StopPlayerPlaneSounds(APlayerPlane* PlayerPlane) {
}

void UNimbusBlueprintLibraryVR::StopAllLoopingSound(ANimbusHUD* NimbusHUD) {
}

void UNimbusBlueprintLibraryVR::StartFading(UNimbusGameInstance* GameInstance, bool bIsFadingIn, float InDuration) {
}

void UNimbusBlueprintLibraryVR::ShowCanopyEffect(APlayerPlane* PlayerPlane, bool bShouldShow, float DropletIntensityScalar, float RainIntensityScalar, float IceBlendScalar, float IceIntensityScalar) {
}

void UNimbusBlueprintLibraryVR::SetWorldBlackFade(bool IsClear) {
}

bool UNimbusBlueprintLibraryVR::SetVRFlatCaptureMode(bool bCaptureEnable) {
    return false;
}

void UNimbusBlueprintLibraryVR::SetRainSpeedScalarParameterValue(APlayerPlane* PlayerPlane, const float Value) {
}

void UNimbusBlueprintLibraryVR::SetRainScalarParameterValue(APlayerPlane* PlayerPlane, const float Value) {
}

void UNimbusBlueprintLibraryVR::SetNimbusVFXComponentParam(int32 Index, float Value) {
}

void UNimbusBlueprintLibraryVR::SetNimbusStereoLayers(bool bEnable) {
}

void UNimbusBlueprintLibraryVR::SetNimbusStereoLayerCurve(float Distance, float curve0to1) {
}

void UNimbusBlueprintLibraryVR::SetNimbusDefaultGravityZ(const float gravityZ, float& prevGravityZ) {
}

void UNimbusBlueprintLibraryVR::SetEnableHUDTestMode(const bool Flag) {
}

void UNimbusBlueprintLibraryVR::SetDropletScalarParameterValue(APlayerPlane* PlayerPlane, const float Value) {
}

void UNimbusBlueprintLibraryVR::SetCurrentGraphicsSetteingsForDevelop(EGraphicsSettings Preset) {
}

void UNimbusBlueprintLibraryVR::SetAutoDeactive(AGameObject* GameObject, const bool Value) {
}

int32 UNimbusBlueprintLibraryVR::PostEventVR(const FString& EventName, AActor* Actor) {
    return 0;
}

int32 UNimbusBlueprintLibraryVR::PostEventAtLocationVR(UNimbusGameInstance* pGameInstance, const FString& EventName, FVector Location, FRotator Orientation) {
    return 0;
}

void UNimbusBlueprintLibraryVR::NimbusDelayGarbageCollection() {
}

bool UNimbusBlueprintLibraryVR::IsVRDLCOwned() {
    return false;
}

void UNimbusBlueprintLibraryVR::IsSuperMode(bool& bSuper) {
}

bool UNimbusBlueprintLibraryVR::IsNimbusDialogOpen() {
    return false;
}

bool UNimbusBlueprintLibraryVR::IsFreeFlight() {
    return false;
}

bool UNimbusBlueprintLibraryVR::IsEnableNimbusOverlay() {
    return false;
}

bool UNimbusBlueprintLibraryVR::IsEnableLocalToViewForCockpit(APlayerPlane* PlayerPlane) {
    return false;
}

bool UNimbusBlueprintLibraryVR::GetVRFlatCaptureMode() {
    return false;
}

void UNimbusBlueprintLibraryVR::GetPhaseNoAndElapsedTime(bool& bValid, int32& PhaseNo, float& PhaseElapsedTime) {
}

float UNimbusBlueprintLibraryVR::GetNoInputElapsedTime(bool& bValid) {
    return 0.0f;
}

EMFDColorType UNimbusBlueprintLibraryVR::GetMFDColorType(const UNimbusUserWidget* Widget, const ANimbusHUD* nimbus_hud) {
    return EMFDColorType::None;
}

AActor* UNimbusBlueprintLibraryVR::GetHitActor(APlayerPlane* PlayerPlane) {
    return NULL;
}

UMenuBaseWidget* UNimbusBlueprintLibraryVR::GetFocusedMenuWidget() {
    return NULL;
}

EMenuIDs UNimbusBlueprintLibraryVR::GetFocusedMenuID() {
    return EMenuIDs::None;
}

EPlayerSystemDamageType UNimbusBlueprintLibraryVR::GetEnvironmentDamageType(APlayerPlane* PlayerPlane) {
    return EPlayerSystemDamageType::CrashOnEnvironment;
}

void UNimbusBlueprintLibraryVR::GetDefaultCameraRelativeTransform(FTransform& Transform, const APlayerPlane* PlayerPlane) {
}

void UNimbusBlueprintLibraryVR::GetCurrentScene(bool& bMission, bool& bHangar, bool& bAirshow) {
}

void UNimbusBlueprintLibraryVR::GetConsoleVariable(const FString& consoleName, bool& bEnable, int32& valueInt, float& valueFloat) {
}

bool UNimbusBlueprintLibraryVR::GetChildSceneComponents(const AActor* Actor, TArray<USceneComponent*>& ComponentList) {
    return false;
}

void UNimbusBlueprintLibraryVR::EnablePostEventVR(bool bEnable) {
}

void UNimbusBlueprintLibraryVR::EnableLocalToViewForCockpit(APlayerPlane* PlayerPlane, const bool bInEnabled) {
}

void UNimbusBlueprintLibraryVR::EnableIGCSkipModeVR(bool bSkip) {
}

void UNimbusBlueprintLibraryVR::DrawWidgetToTarget(UTextureRenderTarget2D* Target, UUserWidget* WidgetToRender, FVector2D DrawSize, bool UseGamma, TEnumAsByte<TextureFilter> Filter, float DeltaTime) {
}

UTextureRenderTarget2D* UNimbusBlueprintLibraryVR::CreateRenderTarget2DVR(UObject* WorldContextObject, int32 Width, int32 Height, FLinearColor ClearColor) {
    return NULL;
}

UStaticMeshComponent* UNimbusBlueprintLibraryVR::CreateAndCopyStaticMeshForVR(AActor* Target, const UStaticMeshComponent* Base) {
    return NULL;
}

void UNimbusBlueprintLibraryVR::ClearStereoLayerBuffer() {
}

void UNimbusBlueprintLibraryVR::ClearMiniMapData(UMiniMapLayerWidget* TargetMiniMap) {
}

void UNimbusBlueprintLibraryVR::ClearHUDMessage(ANimbusHUD* NimbusHUD) {
}

void UNimbusBlueprintLibraryVR::CheckAndApplyVrRenderSetting() {
}

UNimbusBlueprintLibraryVR::UNimbusBlueprintLibraryVR() {
}

