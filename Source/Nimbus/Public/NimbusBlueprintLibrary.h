#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EMADObservationWaveDirectionOption.h"
#include "EImpactCameraPlayCategory.h"
#include "Engine/LatentActionManager.h"
#include "EMiniMapType.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ENimbusCameraShakeType.h"
#include "EMissionPhaseProceedStatus.h"
#include "EPlatforms.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h"
#include "EMADObservationOption.h"
#include "EMADObservationWaveReferenceOption.h"
#include "Styling/SlateColor.h"
#include "UObject/NoExportTypes.h"
#include "ENimbusPingType.h"
#include "EOptionsDistanceUnits.h"
#include "UObject/NoExportTypes.h"
#include "EGameDifficulty.h"
#include "ELogicalType.h"
#include "InputCoreTypes.h"
#include "EComparatorType.h"
#include "MissionPhaseEventDelegateDelegate.h"
#include "NimbusBlueprintLibrary.generated.h"

class AMatineeActor;
class USceneComponent;
class UApproachDistObservationComponent;
class AAIPlane;
class UObject;
class AAIGameObject;
class UAkAudioEvent;
class USkeletalMeshComponent;
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
class UCompositeComparator;
class UVariableComparator;

UCLASS(Blueprintable)
class NIMBUS_API UNimbusBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UNimbusBlueprintLibrary();
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void WaitSpecialActionEnd(const UObject* WorldContextObject, FLatentActionInfo LatentInfo, AAIPlane* AIPlane);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void WaitImpactCameraCompletion(const UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float UUToMeter(float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float UUpsToMps(float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float UUpsToKmph(float Value);
    
    UFUNCTION(BlueprintCallable)
    static void UpdateMaterialAnimation(USkeletalMeshComponent* SkeletalMeshComp, const TArray<int32>& MaterialIndexArray, const TArray<FName>& ParamNames, const TArray<float>& ParamValues);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UpdateBGM(UAkAudioEvent* BGMUpdateEvent, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void ToggleVisibilityForEngineer(USceneComponent* Target, bool bPropagateToChildren);
    
    UFUNCTION(BlueprintCallable)
    static void TestStopNimbusMatinee(AMatineeActor* MatineeActor);
    
    UFUNCTION(BlueprintCallable)
    static void TestPlayNimbusMatinee(AMatineeActor* MatineeActor);
    
    UFUNCTION(BlueprintCallable)
    static void TerminateNimbusMatinee(AMatineeActor* MatineeActor);
    
    UFUNCTION(BlueprintCallable)
    static void SwitchRadar(EMiniMapType MiniMapType);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StopRailgunAiming(const UObject* WorldContextObject, URailgunControliComponent* InRailgunControliComponent);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StopNimbusCameraShakeAll(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StopNimbusCameraShake(const UObject* WorldContextObject, ENimbusCameraShakeType InType);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StopImpactCamera(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StopBGMImmediately(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StopBGM(UObject* WorldContextObject, UAkAudioEvent* OverrideBGMStopEvent);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StereoStartFadingBackground(UObject* WorldContextObject, bool bFadeIn, float Duration);
    
    UFUNCTION(BlueprintCallable)
    static void StereoRemoveWidgetFromViewport(UUserWidget* InWidget);
    
    UFUNCTION(BlueprintCallable)
    static void StereoAddWidgetToViewport(UUserWidget* InWidget, int32 ZOrder, bool bInEnableBg);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StartRemainingDistance(const UObject* WorldContextObject, AActor* ApproachTarget, TArray<AGameObject*> ApproachGameObjects, float GoalRadiusMeter);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static AActor* StartRailgunAiming(const UObject* WorldContextObject, FLatentActionInfo LatentInfo, URailgunControliComponent* InRailgunControliComponent, AGameObject* InTarget, TSubclassOf<ANimbusRailgunTarget> RailgunTargetClass);
    
    UFUNCTION(BlueprintCallable)
    static void StartMissionPhase(const FString& Arg, EMissionPhaseProceedStatus& OutputBranch);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StartMagneticAnomalyDetectorByClassBP(const UObject* WorldContextObject, TSubclassOf<UMagneticAnomalyDetectorComponent> MADComponentClassBP);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StartMagneticAnomalyDetector(const UObject* WorldContextObject, bool bDebugDisplay, float SearchDistance, float SearchDownwardAngle, float MaxSearchRadius, UCurveFloat* SearchDistanceRange, UCurveFloat* ObservationRange, EMADObservationOption ObservationOption, EMADObservationWaveDirectionOption ObservationWaveDirectionOption, float MaxVibrationScale, UCurveFloat* WaveNumRange, UCurveFloat* WaveOffsetRange, UCurveFloat* WaveMinRatioRange, UCurveFloat* WaveMaxRatioRange, UCurveFloat* WaveMaxIntervalRange, UCurveFloat* WaveMaxTimeRange, EMADObservationWaveReferenceOption WaveScaleReference, EMADObservationWaveReferenceOption WaveNumReference, EMADObservationWaveReferenceOption WaveOffsetReference, EMADObservationWaveReferenceOption WaveMinReference, EMADObservationWaveReferenceOption WaveMaxReference, bool bSearchUnderMode);
    
    UFUNCTION(BlueprintCallable)
    static void StartDisplayTimer(float TotalTime, bool bIsEmergency, FName TriggerEventWhenEnd);
    
    UFUNCTION(BlueprintCallable)
    static AWeaponBase* SpawnExplosionWeapon(AGameObject* OwnerGameObject, TSubclassOf<AWeaponBase> WeaponClass, FVector SpawnLocation);
    
    UFUNCTION(BlueprintCallable)
    static void SetVisibilityForEngineer(USceneComponent* Target, bool bNewVisibility, bool bPropagateToChildren);
    
    UFUNCTION(BlueprintCallable)
    static void SetNearClipDistance(float NewDistance);
    
    UFUNCTION(BlueprintCallable)
    static void SetComponentTickEnabledForEngineer(UActorComponent* Target, bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    static void SetActorHiddenInGameForEngineerToArray(TArray<AActor*> Target, bool bNewHidden);
    
    UFUNCTION(BlueprintCallable)
    static void SetActorHiddenInGameForEngineer(AActor* Target, bool bNewHidden);
    
    UFUNCTION(BlueprintCallable)
    static void SaveAndUseIGCCamera(AMatineeActor* MatineeActor);
    
    UFUNCTION(BlueprintCallable)
    static void ResetTutorialMessage();
    
    UFUNCTION(BlueprintCallable)
    static void ResetParticlesCall(UParticleSystemComponent* ParticleSystem, bool bEmptyInstances);
    
    UFUNCTION(BlueprintCallable)
    static void ResetNearClipDistance();
    
    UFUNCTION(BlueprintCallable)
    static void ReplaceTextureReference(UTexture* OriginalTexture, UTexture* NewTexture);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D Project(const FVector& Pos, const FMatrix& ViewProjMtx, const FVector2D& ViewSize);
    
    UFUNCTION(BlueprintCallable)
    static void PostEvent2D(UAkAudioEvent* akevent);
    
    UFUNCTION(BlueprintCallable)
    static void PlayRadioText(APlayerController* InPlayerController, UTexture2D* InComWindowImage, const FString& InSpeakerName, const FString& InMessage, bool bHasWarning, FSlateColor InSpeakerColor, FSlateColor InMessageColor);
    
    UFUNCTION(BlueprintCallable)
    static void PlayNimbusMatinee(AMatineeActor* MatineeActor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PlayNimbusCameraShake_DistanceLocation(const UObject* WorldContextObject, ENimbusCameraShakeType InType, FVector InLocation, UCurveFloat* OverrideDistanceScaleCurve, UCurveFloat* OverrideFovScaleCurve);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PlayNimbusCameraShake(const UObject* WorldContextObject, ENimbusCameraShakeType InType, float InDistanceMeter);
    
    UFUNCTION(BlueprintCallable)
    static bool PlayImpactCamera(AActor* FocusObject1, AActor* FocusObject2, EImpactCameraPlayCategory InPlayCategory, FName CameraName, bool bInAutoEnd, bool bEnemyDestruction);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PlayBGM(UAkAudioEvent* BGMPlayEvent, UAkAudioEvent* BGMStopEvent, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void PingPositionOnRadar(APlayerController* InPlayerController, FVector PingPosition, ENimbusPingType InPingType);
    
    UFUNCTION(BlueprintCallable)
    static void PingObjectsOnRadar(APlayerController* InPlayerController, const TArray<AGameObject*>& ObjectsToPing, ENimbusPingType InPingType, bool ShowContainerName);
    
    UFUNCTION(BlueprintCallable)
    static void PingObjectOnRadar(APlayerController* InPlayerController, AGameObject* ObjectToPing, ENimbusPingType InPingType, bool ShowContainerName);
    
    UFUNCTION(BlueprintCallable)
    static void OverridePostProcessSettingForIGCCockpitView(ACameraActor* InCameraActor);
    
    UFUNCTION(BlueprintCallable)
    static void OverridePostProcessMaterialBlendWeightForIGC(ACameraActor* InCameraActor, float BlendWeight);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void NimbusUnLoadLevelInstance(UObject* WorldContextObject, ULevelStreamingKismet* UnloadLevel, bool& bOutSuccess);
    
    UFUNCTION(BlueprintCallable)
    static void NimbusSetDrawTypeLocalToView(USceneComponent* SceneComponent, bool bUseLTV, const bool bForceUpdateTransform, bool& bOutLTVFlag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void NimbusOpenLevel(UObject* WorldContextObject, FName LevelName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ULevelStreamingKismet* NimbusLoadLevelInstance(UObject* WorldContextObject, const FString& LevelName, const FVector Location, const FRotator Rotation, bool& bOutSuccess);
    
    UFUNCTION(BlueprintCallable)
    static void NimbusDrawLine(UPARAM(Ref) FPaintContext& Context, FVector2D PositionA, FVector2D PositionB, int32 Layer, FLinearColor Tint, bool bAntiAlias);
    
    UFUNCTION(BlueprintCallable)
    static void NimbusDrawBox(UPARAM(Ref) FPaintContext& Context, FVector2D Position, FVector2D Size, USlateBrushAsset* Brush, int32 Layer, FLinearColor Tint);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float MpsToUUps(float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float MpsToKmph(float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float MeterToUU(float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float KmphToUUps(float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float KmphToMps(float Value);
    
    UFUNCTION(BlueprintCallable)
    static bool IsWithEditorOnlyData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsVeryEasyMode(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool IsThisObjectInClouds(const AGameObject* GameObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsReplaying();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsPlaykillCameraWithImpactCamera(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool IsPlacedInIGCLevel(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsLastInputDeviceGamepad();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsInHangar();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsGamepadConnected();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDebugMode(bool bAllowTestBuild);
    
    UFUNCTION(BlueprintCallable)
    static bool IsDebug();
    
    UFUNCTION(BlueprintCallable)
    static void HideAllActorsForSceneCapture(USceneCaptureComponent2D* CaptureComp, AActor* ExceptActor);
    
    UFUNCTION(BlueprintCallable)
    static FString GetRevision();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UApproachDistObservationComponent* GetRemainingDistanceComponent(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static APlayerPlane* GetPlayerPlane(UObject* WorldContextObject, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AGameObject* GetPlayerKillObject(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static float GetNearestPointDistance(FVector LineSegmentA, FVector LineSegmentB, FVector CheckLocation);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetNearestPoint(FVector LineSegmentA, FVector LineSegmentB, FVector CheckLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetMissionClearFlag(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UMagneticAnomalyDetectorComponent* GetMADComponent(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static EPlatforms GetGamePlatform(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static EGameDifficulty GetGameDifficulty(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static EOptionsDistanceUnits GetDistanceUnit(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetCampaignClearFlag(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static FString GetBuildDate();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetAnimationSequenceLength(UAnimSequenceBase* Sequence);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AActor* GetActiveTrueSkySequenceActor(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ANimbusPlayerCameraManager* GetActiveNimbusCameraManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void GetAcceptCancelConfigKeys(TArray<FKey>& OutAcceptKeys, TArray<FKey>& OutCancelKeys);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UIntComparator* GenerateIntComparator(const int32& Property, EComparatorType Type, int32 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UCompositeComparator* GenerateCompositeComparator(ELogicalType Type, UVariableComparator*& Child1, UVariableComparator*& Child2);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UBoolComparator* GenerateBoolComparator(const bool& Property, bool IsEqual, bool Value);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void EndRemainingDistance(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void EndMagneticAnomalyDetector(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void EnableHMDBlackOverlay(bool bIsEnabled);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DrawPredictedWeaponTrajectoryOnRadar(const UObject* WorldContextObject, AGameObject* FiringObject, float Duration);
    
    UFUNCTION(BlueprintCallable)
    static void DisplayTutorialMessage(const FString& TextId, float Duration);
    
    UFUNCTION(BlueprintCallable)
    static void DisplayMissionUpdated();
    
    UFUNCTION(BlueprintCallable)
    static void DisplayMissionStart();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void Deproject(const FVector2D& ScreenPos, const FMatrix& InvViewProjMtx, const FVector2D& ViewSize, FVector& OutRayOrigin, FVector& OutRayDir);
    
    UFUNCTION(BlueprintCallable)
    static float ConvertEngineThrustToEngineSoundRTPC(float EngineThrust);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ClearAllTimersAndLatentActionForObject(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void CancelDisplayTimer();
    
    UFUNCTION(BlueprintCallable)
    static void BindMissionPhaseEvents(AActor* MissionPhaseActor, FMissionPhaseEventDelegate StartEvent, FMissionPhaseEventDelegate RetryEvent);
    
    UFUNCTION(BlueprintCallable)
    static void BattleNavigationUnitList(const TArray<AUnit*>& UnitsToPing, bool bForciblySWitchToBattleMap, int32 BattleNavigationID);
    
    UFUNCTION(BlueprintCallable)
    static void BattleNavigationUnit(AUnit* UnitToPing, bool bForciblySWitchToBattleMap, int32 BattleNavigationID);
    
    UFUNCTION(BlueprintCallable)
    static void BattleNavigationList(const TArray<AAIGameObject*>& AIObjectsToPing, bool bForciblySWitchToBattleMap, int32 BattleNavigationID);
    
    UFUNCTION(BlueprintCallable)
    static void BattleNavigation(AAIGameObject* AIObjectToPing, bool bForciblySWitchToBattleMap, int32 BattleNavigationID);
    
    UFUNCTION(BlueprintCallable)
    static void AddMissionWarningMessage(const FString& Message);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UCompositeComparator* AddComparatorIntoComposite(UCompositeComparator*& Composite, UVariableComparator*& Child);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ActivateConditionActionEntry(UObject* WorldContextObject, int32 EventID);
    
};

