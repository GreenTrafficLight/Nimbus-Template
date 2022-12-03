#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PhaseCompleteEventDelegateDelegate.h"
#include "PhaseStartEventDelegateDelegate.h"
#include "MiniGameLevelName.h"
#include "EPhaseStartNotificationType.h"
#include "EPhaseBeginFadeType.h"
#include "Engine/EngineTypes.h"
#include "EPhaseStatus.h"
#include "MissionPhase.generated.h"

class ASystemObjectWayPointMarker;
class AVolume;
class UMissionObjectiveBase;
class AMiniGamePhase;
class ACombatZone;
class UTexture2D;
class UNimbusLevelSleepManager;
class ULevel;
class UMissionOverlapActorManager;

UCLASS(Blueprintable)
class NIMBUS_API AMissionPhase : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnTimeIsUp);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnChangeWayPointState, bool, bReached, ASystemObjectWayPointMarker*, WayPointMarker);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeSearchLightState, bool, bInside);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeRestrictedAltitudeState, bool, bOver);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeRadarAreaState, bool, bInside);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangePulloutLineState, bool, bBeyond);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeJammingAreaState, bool, bInside);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeImpactAreaState, bool, bInside);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnAddMissionScore, int32, CurrentMissionScore, int32, ObjectiveMissionScore, bool, bAchieved);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeRadarAreaState OnChangeRadarAreaState;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeImpactAreaState OnChangeImpactAreaState;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeJammingAreaState OnChangeJammingAreaState;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeSearchLightState OnChangeSearchLightState;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangePulloutLineState OnChangePulloutLineState;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeRestrictedAltitudeState OnChangeRestrictedAltitudeState;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeWayPointState OnChangeWayPointState;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAddMissionScore OnAddMissionScore;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTimeIsUp OnTimeIsUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVolume* TakeoffVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVolume* NavyTakeoffVolume;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PhaseName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PhaseNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSaveCheckPointEnabledEasy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSaveCheckPointEnabledNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSaveCheckPointEnabledHard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSaveCheckPointEnabledAce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMissionObjectiveBase*> Objectives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckTimeCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFailedByTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMiniGamePhase* MiniGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACombatZone* CombatZoneOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* PhaseEnlargedMiniMapBackgroundTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* PhaseBattleMiniMapBackgroundTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AVolume* CurrentTakeoffVolume;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeLimit;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhaseStartEventDelegate PhaseStartEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhaseStartEventDelegate PhaseRestartEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhaseCompleteEventDelegate PhaseCompleteEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PhaseStartNotificationDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMiniGameLevelName AirMiniGameLevelNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMiniGameLevelName NavyMiniGameLevelNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* AirEnlargedMinimapBackgroundImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* AirMinimapBackgroundImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* NavyEnlargedMinimapBackgroundImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* NavyMinimapBackgroundImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bContinueLastPhaseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTelePlayerAtPhaseStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* PlayerStartMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverwriteInputDelayPhaseStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverwriteInputDelayPhaseRestart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPhaseStartNotificationType PhaseStartNotificationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPhaseBeginFadeType PhaseBeginFadeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNimbusLevelSleepManager* LevelSleepManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ULevel*> CurrentMiniGameLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<ULevel*> AllMiniGameLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMissionOverlapActorManager* PhaseOverlapVolumeManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMissionOverlapActorManager* MiniGameOverlapVolumeManager;
    
public:
    AMissionPhase();
    UFUNCTION(BlueprintCallable)
    void StartMiniGame();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldShowNavyMiniGameLevels() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSkipMiniGamePhaseHandler(float FadeOutDuration);
    
    UFUNCTION()
    void OnReferencedActorEndPlayHandler(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
    UFUNCTION(BlueprintCallable)
    void OnPreStartMiniGamePhaseHandler(bool bIsRetry);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPhaseStatus GetStatus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMissionPhaseTimeLeft() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetElapsedMissionPhaseTime() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceUpdateStatus(EPhaseStatus NewStatus);
    
    UFUNCTION(BlueprintCallable)
    void CompleteMiniGame();
    
};

