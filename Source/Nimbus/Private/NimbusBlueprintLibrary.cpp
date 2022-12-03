#include "NimbusBlueprintLibrary.h"
#include "Templates/SubclassOf.h"

class UApproachDistObservationComponent;
class AAIPlane;
class UObject;
class AAIGameObject;
class UAkAudioEvent;
class USkeletalMeshComponent;
class AMatineeActor;
class USceneComponent;
class URailgunControliComponent;
class UIntComparator;
class USlateBrushAsset;
class UTexture;
class AActor;
class UUserWidget;
class AGameObject;
class UBoolComparator;
class UActorComponent;
class ANimbusRailgunTarget;
class UTexture2D;
class UMagneticAnomalyDetectorComponent;
class AUnit;
class UCurveFloat;
class AWeaponBase;
class UParticleSystemComponent;
class APlayerController;
class ACameraActor;
class ULevelStreamingKismet;
class USceneCaptureComponent2D;
class APlayerPlane;
class UAnimSequenceBase;
class ANimbusPlayerCameraManager;
class UVariableComparator;
class UCompositeComparator;

void UNimbusBlueprintLibrary::WaitSpecialActionEnd(const UObject* WorldContextObject, FLatentActionInfo LatentInfo, AAIPlane* AIPlane) {
}

void UNimbusBlueprintLibrary::WaitImpactCameraCompletion(const UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
}

float UNimbusBlueprintLibrary::UUToMeter(float Value) {
    return 0.0f;
}

float UNimbusBlueprintLibrary::UUpsToMps(float Value) {
    return 0.0f;
}

float UNimbusBlueprintLibrary::UUpsToKmph(float Value) {
    return 0.0f;
}

void UNimbusBlueprintLibrary::UpdateMaterialAnimation(USkeletalMeshComponent* SkeletalMeshComp, const TArray<int32>& MaterialIndexArray, const TArray<FName>& ParamNames, const TArray<float>& ParamValues) {
}

void UNimbusBlueprintLibrary::UpdateBGM(UAkAudioEvent* BGMUpdateEvent, UObject* WorldContextObject) {
}

void UNimbusBlueprintLibrary::ToggleVisibilityForEngineer(USceneComponent* Target, bool bPropagateToChildren) {
}

void UNimbusBlueprintLibrary::TestStopNimbusMatinee(AMatineeActor* MatineeActor) {
}

void UNimbusBlueprintLibrary::TestPlayNimbusMatinee(AMatineeActor* MatineeActor) {
}

void UNimbusBlueprintLibrary::TerminateNimbusMatinee(AMatineeActor* MatineeActor) {
}

void UNimbusBlueprintLibrary::SwitchRadar(EMiniMapType MiniMapType) {
}

void UNimbusBlueprintLibrary::StopRailgunAiming(const UObject* WorldContextObject, URailgunControliComponent* InRailgunControliComponent) {
}

void UNimbusBlueprintLibrary::StopNimbusCameraShakeAll(const UObject* WorldContextObject) {
}

void UNimbusBlueprintLibrary::StopNimbusCameraShake(const UObject* WorldContextObject, ENimbusCameraShakeType InType) {
}

void UNimbusBlueprintLibrary::StopImpactCamera(const UObject* WorldContextObject) {
}

void UNimbusBlueprintLibrary::StopBGMImmediately(UObject* WorldContextObject) {
}

void UNimbusBlueprintLibrary::StopBGM(UObject* WorldContextObject, UAkAudioEvent* OverrideBGMStopEvent) {
}

void UNimbusBlueprintLibrary::StereoStartFadingBackground(UObject* WorldContextObject, bool bFadeIn, float Duration) {
}

void UNimbusBlueprintLibrary::StereoRemoveWidgetFromViewport(UUserWidget* InWidget) {
}

void UNimbusBlueprintLibrary::StereoAddWidgetToViewport(UUserWidget* InWidget, int32 ZOrder, bool bInEnableBg) {
}

void UNimbusBlueprintLibrary::StartRemainingDistance(const UObject* WorldContextObject, AActor* ApproachTarget, TArray<AGameObject*> ApproachGameObjects, float GoalRadiusMeter) {
}

AActor* UNimbusBlueprintLibrary::StartRailgunAiming(const UObject* WorldContextObject, FLatentActionInfo LatentInfo, URailgunControliComponent* InRailgunControliComponent, AGameObject* InTarget, TSubclassOf<ANimbusRailgunTarget> RailgunTargetClass) {
    return NULL;
}

void UNimbusBlueprintLibrary::StartMissionPhase(const FString& Arg, EMissionPhaseProceedStatus& OutputBranch) {
}

void UNimbusBlueprintLibrary::StartMagneticAnomalyDetectorByClassBP(const UObject* WorldContextObject, TSubclassOf<UMagneticAnomalyDetectorComponent> MADComponentClassBP) {
}

void UNimbusBlueprintLibrary::StartMagneticAnomalyDetector(const UObject* WorldContextObject, bool bDebugDisplay, float SearchDistance, float SearchDownwardAngle, float MaxSearchRadius, UCurveFloat* SearchDistanceRange, UCurveFloat* ObservationRange, EMADObservationOption ObservationOption, EMADObservationWaveDirectionOption ObservationWaveDirectionOption, float MaxVibrationScale, UCurveFloat* WaveNumRange, UCurveFloat* WaveOffsetRange, UCurveFloat* WaveMinRatioRange, UCurveFloat* WaveMaxRatioRange, UCurveFloat* WaveMaxIntervalRange, UCurveFloat* WaveMaxTimeRange, EMADObservationWaveReferenceOption WaveScaleReference, EMADObservationWaveReferenceOption WaveNumReference, EMADObservationWaveReferenceOption WaveOffsetReference, EMADObservationWaveReferenceOption WaveMinReference, EMADObservationWaveReferenceOption WaveMaxReference, bool bSearchUnderMode) {
}

void UNimbusBlueprintLibrary::StartDisplayTimer(float TotalTime, bool bIsEmergency, FName TriggerEventWhenEnd) {
}

AWeaponBase* UNimbusBlueprintLibrary::SpawnExplosionWeapon(AGameObject* OwnerGameObject, TSubclassOf<AWeaponBase> WeaponClass, FVector SpawnLocation) {
    return NULL;
}

void UNimbusBlueprintLibrary::SetVisibilityForEngineer(USceneComponent* Target, bool bNewVisibility, bool bPropagateToChildren) {
}

void UNimbusBlueprintLibrary::SetNearClipDistance(float NewDistance) {
}

void UNimbusBlueprintLibrary::SetComponentTickEnabledForEngineer(UActorComponent* Target, bool bEnabled) {
}

void UNimbusBlueprintLibrary::SetActorHiddenInGameForEngineerToArray(TArray<AActor*> Target, bool bNewHidden) {
}

void UNimbusBlueprintLibrary::SetActorHiddenInGameForEngineer(AActor* Target, bool bNewHidden) {
}

void UNimbusBlueprintLibrary::SaveAndUseIGCCamera(AMatineeActor* MatineeActor) {
}

void UNimbusBlueprintLibrary::ResetTutorialMessage() {
}

void UNimbusBlueprintLibrary::ResetParticlesCall(UParticleSystemComponent* ParticleSystem, bool bEmptyInstances) {
}

void UNimbusBlueprintLibrary::ResetNearClipDistance() {
}

void UNimbusBlueprintLibrary::ReplaceTextureReference(UTexture* OriginalTexture, UTexture* NewTexture) {
}

FVector2D UNimbusBlueprintLibrary::Project(const FVector& Pos, const FMatrix& ViewProjMtx, const FVector2D& ViewSize) {
    return FVector2D{};
}

void UNimbusBlueprintLibrary::PostEvent2D(UAkAudioEvent* akevent) {
}

void UNimbusBlueprintLibrary::PlayRadioText(APlayerController* InPlayerController, UTexture2D* InComWindowImage, const FString& InSpeakerName, const FString& InMessage, bool bHasWarning, FSlateColor InSpeakerColor, FSlateColor InMessageColor) {
}

void UNimbusBlueprintLibrary::PlayNimbusMatinee(AMatineeActor* MatineeActor) {
}

void UNimbusBlueprintLibrary::PlayNimbusCameraShake_DistanceLocation(const UObject* WorldContextObject, ENimbusCameraShakeType InType, FVector InLocation, UCurveFloat* OverrideDistanceScaleCurve, UCurveFloat* OverrideFovScaleCurve) {
}

void UNimbusBlueprintLibrary::PlayNimbusCameraShake(const UObject* WorldContextObject, ENimbusCameraShakeType InType, float InDistanceMeter) {
}

bool UNimbusBlueprintLibrary::PlayImpactCamera(AActor* FocusObject1, AActor* FocusObject2, EImpactCameraPlayCategory InPlayCategory, FName CameraName, bool bInAutoEnd, bool bEnemyDestruction) {
    return false;
}

void UNimbusBlueprintLibrary::PlayBGM(UAkAudioEvent* BGMPlayEvent, UAkAudioEvent* BGMStopEvent, UObject* WorldContextObject) {
}

void UNimbusBlueprintLibrary::PingPositionOnRadar(APlayerController* InPlayerController, FVector PingPosition, ENimbusPingType InPingType) {
}

void UNimbusBlueprintLibrary::PingObjectsOnRadar(APlayerController* InPlayerController, const TArray<AGameObject*>& ObjectsToPing, ENimbusPingType InPingType, bool ShowContainerName) {
}

void UNimbusBlueprintLibrary::PingObjectOnRadar(APlayerController* InPlayerController, AGameObject* ObjectToPing, ENimbusPingType InPingType, bool ShowContainerName) {
}

void UNimbusBlueprintLibrary::OverridePostProcessSettingForIGCCockpitView(ACameraActor* InCameraActor) {
}

void UNimbusBlueprintLibrary::OverridePostProcessMaterialBlendWeightForIGC(ACameraActor* InCameraActor, float BlendWeight) {
}

void UNimbusBlueprintLibrary::NimbusUnLoadLevelInstance(UObject* WorldContextObject, ULevelStreamingKismet* UnloadLevel, bool& bOutSuccess) {
}

void UNimbusBlueprintLibrary::NimbusSetDrawTypeLocalToView(USceneComponent* SceneComponent, bool bUseLTV, const bool bForceUpdateTransform, bool& bOutLTVFlag) {
}

void UNimbusBlueprintLibrary::NimbusOpenLevel(UObject* WorldContextObject, FName LevelName) {
}

ULevelStreamingKismet* UNimbusBlueprintLibrary::NimbusLoadLevelInstance(UObject* WorldContextObject, const FString& LevelName, const FVector Location, const FRotator Rotation, bool& bOutSuccess) {
    return NULL;
}

void UNimbusBlueprintLibrary::NimbusDrawLine(FPaintContext& Context, FVector2D PositionA, FVector2D PositionB, int32 Layer, FLinearColor Tint, bool bAntiAlias) {
}

void UNimbusBlueprintLibrary::NimbusDrawBox(FPaintContext& Context, FVector2D Position, FVector2D Size, USlateBrushAsset* Brush, int32 Layer, FLinearColor Tint) {
}

float UNimbusBlueprintLibrary::MpsToUUps(float Value) {
    return 0.0f;
}

float UNimbusBlueprintLibrary::MpsToKmph(float Value) {
    return 0.0f;
}

float UNimbusBlueprintLibrary::MeterToUU(float Value) {
    return 0.0f;
}

float UNimbusBlueprintLibrary::KmphToUUps(float Value) {
    return 0.0f;
}

float UNimbusBlueprintLibrary::KmphToMps(float Value) {
    return 0.0f;
}

bool UNimbusBlueprintLibrary::IsWithEditorOnlyData() {
    return false;
}

bool UNimbusBlueprintLibrary::IsVeryEasyMode(UObject* WorldContextObject) {
    return false;
}

bool UNimbusBlueprintLibrary::IsThisObjectInClouds(const AGameObject* GameObject) {
    return false;
}

bool UNimbusBlueprintLibrary::IsReplaying() {
    return false;
}

bool UNimbusBlueprintLibrary::IsPlaykillCameraWithImpactCamera(const UObject* WorldContextObject) {
    return false;
}

bool UNimbusBlueprintLibrary::IsPlacedInIGCLevel(const AActor* Actor) {
    return false;
}

bool UNimbusBlueprintLibrary::IsLastInputDeviceGamepad() {
    return false;
}

bool UNimbusBlueprintLibrary::IsInHangar() {
    return false;
}

bool UNimbusBlueprintLibrary::IsGamepadConnected() {
    return false;
}

bool UNimbusBlueprintLibrary::IsDebugMode(bool bAllowTestBuild) {
    return false;
}

bool UNimbusBlueprintLibrary::IsDebug() {
    return false;
}

void UNimbusBlueprintLibrary::HideAllActorsForSceneCapture(USceneCaptureComponent2D* CaptureComp, AActor* ExceptActor) {
}

FString UNimbusBlueprintLibrary::GetRevision() {
    return TEXT("");
}

UApproachDistObservationComponent* UNimbusBlueprintLibrary::GetRemainingDistanceComponent(const UObject* WorldContextObject) {
    return NULL;
}

APlayerPlane* UNimbusBlueprintLibrary::GetPlayerPlane(UObject* WorldContextObject, int32 PlayerIndex) {
    return NULL;
}

AGameObject* UNimbusBlueprintLibrary::GetPlayerKillObject(const UObject* WorldContextObject) {
    return NULL;
}

float UNimbusBlueprintLibrary::GetNearestPointDistance(FVector LineSegmentA, FVector LineSegmentB, FVector CheckLocation) {
    return 0.0f;
}

FVector UNimbusBlueprintLibrary::GetNearestPoint(FVector LineSegmentA, FVector LineSegmentB, FVector CheckLocation) {
    return FVector{};
}

bool UNimbusBlueprintLibrary::GetMissionClearFlag(UObject* WorldContextObject) {
    return false;
}

UMagneticAnomalyDetectorComponent* UNimbusBlueprintLibrary::GetMADComponent(const UObject* WorldContextObject) {
    return NULL;
}

EPlatforms UNimbusBlueprintLibrary::GetGamePlatform(UObject* WorldContextObject) {
    return EPlatforms::PlayStation4;
}

EGameDifficulty UNimbusBlueprintLibrary::GetGameDifficulty(UObject* WorldContextObject) {
    return EGameDifficulty::GD_EASY;
}

EOptionsDistanceUnits UNimbusBlueprintLibrary::GetDistanceUnit(UObject* WorldContextObject) {
    return EOptionsDistanceUnits::Meter;
}

bool UNimbusBlueprintLibrary::GetCampaignClearFlag(UObject* WorldContextObject) {
    return false;
}

FString UNimbusBlueprintLibrary::GetBuildDate() {
    return TEXT("");
}

float UNimbusBlueprintLibrary::GetAnimationSequenceLength(UAnimSequenceBase* Sequence) {
    return 0.0f;
}

AActor* UNimbusBlueprintLibrary::GetActiveTrueSkySequenceActor(const UObject* WorldContextObject) {
    return NULL;
}

ANimbusPlayerCameraManager* UNimbusBlueprintLibrary::GetActiveNimbusCameraManager(const UObject* WorldContextObject) {
    return NULL;
}

void UNimbusBlueprintLibrary::GetAcceptCancelConfigKeys(TArray<FKey>& OutAcceptKeys, TArray<FKey>& OutCancelKeys) {
}

UIntComparator* UNimbusBlueprintLibrary::GenerateIntComparator(const int32& Property, EComparatorType Type, int32 Value) {
    return NULL;
}

UCompositeComparator* UNimbusBlueprintLibrary::GenerateCompositeComparator(ELogicalType Type, UVariableComparator*& Child1, UVariableComparator*& Child2) {
    return NULL;
}

UBoolComparator* UNimbusBlueprintLibrary::GenerateBoolComparator(const bool& Property, bool IsEqual, bool Value) {
    return NULL;
}

void UNimbusBlueprintLibrary::EndRemainingDistance(const UObject* WorldContextObject) {
}

void UNimbusBlueprintLibrary::EndMagneticAnomalyDetector(const UObject* WorldContextObject) {
}

void UNimbusBlueprintLibrary::EnableHMDBlackOverlay(bool bIsEnabled) {
}

void UNimbusBlueprintLibrary::DrawPredictedWeaponTrajectoryOnRadar(const UObject* WorldContextObject, AGameObject* FiringObject, float Duration) {
}

void UNimbusBlueprintLibrary::DisplayTutorialMessage(const FString& TextId, float Duration) {
}

void UNimbusBlueprintLibrary::DisplayMissionUpdated() {
}

void UNimbusBlueprintLibrary::DisplayMissionStart() {
}

void UNimbusBlueprintLibrary::Deproject(const FVector2D& ScreenPos, const FMatrix& InvViewProjMtx, const FVector2D& ViewSize, FVector& OutRayOrigin, FVector& OutRayDir) {
}

float UNimbusBlueprintLibrary::ConvertEngineThrustToEngineSoundRTPC(float EngineThrust) {
    return 0.0f;
}

void UNimbusBlueprintLibrary::ClearAllTimersAndLatentActionForObject(UObject* WorldContextObject) {
}

void UNimbusBlueprintLibrary::CancelDisplayTimer() {
}

void UNimbusBlueprintLibrary::BindMissionPhaseEvents(AActor* MissionPhaseActor, FMissionPhaseEventDelegate StartEvent, FMissionPhaseEventDelegate RetryEvent) {
}

void UNimbusBlueprintLibrary::BattleNavigationUnitList(const TArray<AUnit*>& UnitsToPing, bool bForciblySWitchToBattleMap, int32 BattleNavigationID) {
}

void UNimbusBlueprintLibrary::BattleNavigationUnit(AUnit* UnitToPing, bool bForciblySWitchToBattleMap, int32 BattleNavigationID) {
}

void UNimbusBlueprintLibrary::BattleNavigationList(const TArray<AAIGameObject*>& AIObjectsToPing, bool bForciblySWitchToBattleMap, int32 BattleNavigationID) {
}

void UNimbusBlueprintLibrary::BattleNavigation(AAIGameObject* AIObjectToPing, bool bForciblySWitchToBattleMap, int32 BattleNavigationID) {
}

void UNimbusBlueprintLibrary::AddMissionWarningMessage(const FString& Message) {
}

UCompositeComparator* UNimbusBlueprintLibrary::AddComparatorIntoComposite(UCompositeComparator*& Composite, UVariableComparator*& Child) {
    return NULL;
}

void UNimbusBlueprintLibrary::ActivateConditionActionEntry(UObject* WorldContextObject, int32 EventID) {
}

UNimbusBlueprintLibrary::UNimbusBlueprintLibrary() {
}

