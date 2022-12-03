#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "PreRestartPhaseDelegateDelegate.h"
#include "PhaseEndDelegateDelegate.h"
#include "GameFramework/Actor.h"
#include "CheckPointLoadedDelegateDelegate.h"
#include "MissionEventDelegateDelegate.h"
#include "ObjectiveEventDelegateDelegate.h"
#include "IGCEnableDelegateDelegate.h"
#include "TransitionToMiniGameDelegateDelegate.h"
#include "MissionIGCRequestInfo.h"
#include "MissionVariableChangeHistory.h"
#include "UObject/NoExportTypes.h"
#include "KillStats.h"
#include "MissionVariableEvent.h"
#include "MiniMapGridSettings.h"
#include "EMissionSuccessNotificationType.h"
#include "UObject/NoExportTypes.h"
#include "ENimbusSoundType.h"
#include "EMissionStatePhaseFailReason.h"
#include "Mission.generated.h"

class UMissionFadeSoundManager;
class AMission;
class AMissionPhase;
class ACameraActor;
class AMissionConditionChecker;
class UMissionDelayStateFactory;
class APlayerPlane;
class UNimbusGameInstance;
class UMissionVariables;
class UMissionOverlapActorManager;
class ANimbusLevelScriptActor;
class ANimbusHUD;
class ANimbusReplayPawn;
class UDataTable;
class ACombatZone;
class UNimbusLevelSleepManager;
class AMissionAIManager;
class UMissionCooldownStateDeadFactory;
class UAkAudioEvent;
class UNimbusGarbageCollectManager;
class UMissionIGCPlayer;
class ULevel;
class AWeaponBase;
class UAutomatedCollectMissionAsset;
class UMissionStateManager;
class UMissionReplayChapterManager;
class UMissionSetupFrameManager;
class UMissionTransitionStateFactory;
class AMissionUIManagerActor;

UCLASS(Blueprintable)
class NIMBUS_API AMission : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPreStartMiniGamePhaseDelegate, bool, bIsRetry);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnIgcCameraChanged, ACameraActor*, NewCameraActor);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGCPreviewDelegate, int32, IGCNumber);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCombatZoneUpdatedDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObjectiveEventDelegate ObjEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPreRestartPhaseDelegate PreRestartPhaseEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCheckPointLoadedDelegate CheckPointLoadedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhaseEndDelegate PhaseEndEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGCEnableDelegate IGCEnableEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransitionToMiniGameDelegate TransitionToMiniGameEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGCPreviewDelegate IGCViewerEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCombatZoneUpdatedDelegate CombatZoneUpdatedEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMissionVariables* MissionVariables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMissionVariableChangeHistory> MissionVariableChangeHistory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AMissionPhase*> SortedPhases;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AMissionPhase*> AllPhases;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AMissionPhase*> AllMiniGamePhases;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMissionPhase* CurrentPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ANimbusLevelScriptActor* GlobalPhaseLevelScriptActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ANimbusHUD* NimbusHUD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MissionNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PhaseAssetTable;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionEventDelegate MissionEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACombatZone* CombatZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMissionAIManager* AIManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AirObjectIdentificationRateMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GroundObjectIdentificationRateMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VeryEasy_AirObjectIdentificationRateMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VeryEasy_GroundObjectIdentificationRateMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKillStats> MissionKillStatList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MissionCooldownDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MissionFailureCooldownDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MissionFailureByDeathCooldownDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CurrentQuotaMissionVariableName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TargetQuotaMissionVariableName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CooldownFadingDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMissionVariableEvent> MissionVariableEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMissionPhase* SupplyPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNimbusGameInstance* GameInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerPlane* PlayerPlane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMiniMapSeaChart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMiniMapGridSettings MiniMapEnlargedGridSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMiniMapGridSettings MiniMapBattleGridSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMiniMapGridSettings CurrentMiniMapEnlargedGridSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMiniMapGridSettings CurrentMiniMapBattleGridSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> MissionEnvironmentLevelNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> MissionLogicLevelNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForcedAirForceTakeoffParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GndSpeedTakeoff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GndSpeedMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GndSpeedLift;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PowerAfterBurnerR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GndDrag3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AcceleR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForcedAirForceLandingParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GndDrag2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedCruise;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNimbusLevelSleepManager* LevelSleepManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNimbusGarbageCollectManager* GarbageCollectManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ANimbusLevelScriptActor*> LevelScriptActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ULevel*> MissionEnvironmentLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ULevel*> MissionLogicLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<ULevel*> AllMiniGameLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<ULevel*> AllIGCLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AWeaponBase> SpecificWeaponClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OnDeathMissionFailDelayTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AmbientSoundEventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* BGMStopEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* BGMPlayEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAutomatedCollectMissionAsset* AutomatedCollectMissionAsset;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMissionStateManager* StateManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ANimbusReplayPawn* ReplayPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMissionReplayChapterManager* ReplayChapterManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMissionIGCPlayer* IGCPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMissionOverlapActorManager* GlobalOverlapVolumeManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMissionOverlapActorManager* AllMiniGameOverlapVolumeManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMissionFadeSoundManager* FadeSoundManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMissionSetupFrameManager* SetupFrameManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMissionTransitionStateFactory* TransitionStateFactory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMissionCooldownStateDeadFactory* DeadStateFactory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMissionDelayStateFactory* DelayStateFactory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMissionUIManagerActor* MissionUIManagerActor;
    
public:
    AMission();
    UFUNCTION(BlueprintCallable)
    void SkipMiniGame();
    
    UFUNCTION(BlueprintCallable)
    void ShowMissionQuota(bool bShow);
    
    UFUNCTION(BlueprintCallable)
    static void ShowMissionAccomplished_S(EMissionSuccessNotificationType Type);
    
    UFUNCTION(BlueprintCallable)
    static void SetTrueSkyTime_S(int32 Hour, int32 Minute, float ShadowBase);
    
    UFUNCTION(BlueprintCallable)
    void SetRemainingHpPercentage(float Percentage);
    
    UFUNCTION(BlueprintCallable)
    static void SetObjectiveMissionScore_S(int32 Score);
    
    UFUNCTION(BlueprintCallable)
    static void SetMissionObjectivesOnPause_S(int32 Value);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSystemMissionHandler(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void OnSystemLevelScriptActorHandler(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void OnSystemEndPhysicsHandler(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void OnSuccessSupplyPhaseHandler(AMissionPhase* MissionPhase, const FVector& RestartLocation, const FRotator& RestartRotation);
    
    UFUNCTION(BlueprintCallable)
    void OnSuccessCurrentPhaseHandler(AMissionPhase* MissionPhase);
    
    UFUNCTION(BlueprintCallable)
    void OnStoppedReplayHandler();
    
    UFUNCTION(BlueprintCallable)
    void OnStartSupplyPhaseHandler(AMissionPhase* MissionPhase);
    
    UFUNCTION(BlueprintCallable)
    void OnStartNextPhaseHandler(AMissionPhase* MissionPhase, bool bIsRestart);
    
    UFUNCTION(BlueprintCallable)
    void OnPreStopBusEvent(ENimbusSoundType BusType);
    
    UFUNCTION(BlueprintCallable)
    void OnPreStartReplayHandler(bool bIsRestart);
    
    UFUNCTION(BlueprintCallable)
    void OnPostStartReplayHandler(bool bIsRestart);
    
    UFUNCTION(BlueprintCallable)
    void OnIgcStartSkipFadeOutHandler(bool bStopBGM, UAkAudioEvent* OverrideStopBGMEvent, float Duration);
    
    UFUNCTION(BlueprintCallable)
    void OnIgcCameraChangedHandler(ACameraActor* NewCameraActor);
    
    UFUNCTION(BlueprintCallable)
    void OnGameEndPhysicsHandler(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void OnFailCurrentPhaseHandler(AMissionPhase* MissionPhase, EMissionStatePhaseFailReason Reason);
    
    UFUNCTION(BlueprintCallable)
    void OnEndIGCHandler(const FMissionIGCRequestInfo& RequestInfo, AMissionPhase* MiniGameMapPhase);
    
    UFUNCTION(BlueprintCallable)
    void OnCooldownStartTimeOutHandler();
    
    UFUNCTION(BlueprintCallable)
    void OnCooldownStartSuccessfulHandler();
    
    UFUNCTION(BlueprintCallable)
    void OnCooldownStartOutOfZoneHandler();
    
    UFUNCTION(BlueprintCallable)
    void OnCooldownStartFailObjectiveHandler();
    
    UFUNCTION(BlueprintCallable)
    void OnCooldownStartDeadHandler();
    
    UFUNCTION(BlueprintCallable)
    void OnCooldownFinishedHandler();
    
    UFUNCTION(BlueprintCallable)
    void OnCheckInterruptStateHandler();
    
    UFUNCTION(BlueprintCallable)
    void OnChangedReplayChapterHandler();
    
    UFUNCTION(BlueprintCallable)
    void OnBeginIGCHandler(const FMissionIGCRequestInfo& RequestInfo, AMissionPhase* MiniGameMapPhase);
    
    UFUNCTION(BlueprintCallable)
    void OnActorSpawnedHandler(AActor* SpawnedActor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingBGM() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMissionStarted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMissionFailed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMissionCompleted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInIGC() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetObjectiveMissionScore_S();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMissionScore_S();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetMissionPhaseTimeLeftInSeconds_S();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetMissionPhaseElapsedTimeInSeconds_S();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetMissionElapsedTimeInSeconds_S();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetKillStatCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetKillStat(int32 Index, FString& OutName, int32& OutScore, float& OutTime) const;
    
    UFUNCTION(BlueprintCallable)
    static AMission* GetCurrentMission(bool bIncludeOnline);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AMissionConditionChecker* GetConditionChecker() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AMissionAIManager* GetAIManager() const;
    
    UFUNCTION(BlueprintCallable)
    static void ForcePauseMissionTimer_S(bool bPause);
    
    UFUNCTION(BlueprintCallable)
    void CompleteCoolDownOverride(float NewCooldownDuration, float NewCooldownFadingDuration);
    
    UFUNCTION(BlueprintCallable)
    void Complete();
    
};

