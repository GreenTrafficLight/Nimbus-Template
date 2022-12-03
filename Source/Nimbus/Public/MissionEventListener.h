#pragma once
#include "CoreMinimal.h"
#include "ETGTP_PhaseType.h"
#include "GameFramework/Actor.h"
#include "MissionEventListenerInterface.h"
#include "MissionEventObjectFireWeaponDelegate.h"
#include "MissionEventObjectDestroyedDelegate.h"
#include "MissionEventObjectTakeDamageDelegate.h"
#include "MissionEventObjectLockonDelegate.h"
#include "MissionEventObjectFoundTargetDelegate.h"
#include "MissionEventMissileLostTargetDelegate.h"
#include "MissionEventObjectGetBehindDelegate.h"
#include "EMissionCondition_ObjectToObjectEvent.h"
#include "MissionEventCloudStateChangedDelegate.h"
#include "MissionEventObjectKilledByPlayerDelegate.h"
#include "MissionEventUnitDestroyedDelegate.h"
#include "MissionEventUnitActivatedDelegate.h"
#include "MissionEventMissionPhaseStartDelegate.h"
#include "EMissionCondition_CloudEvent.h"
#include "MissionEventMissionFailedDelegate.h"
#include "MissionEventMissionAccomplishedDelegate.h"
#include "MissionEventPlayerDeadDelegate.h"
#include "MissionEventRadioGroupBeginDelegate.h"
#include "EMAD_SearchType.h"
#include "EMissionCondition_MiniGameEvent.h"
#include "MissionEventRadioMessageBeginDelegate.h"
#include "ESubmarineRailgunEvent.h"
#include "MissionEventDisplaySystemMessageDelegate.h"
#include "MissionEventRadioMessageEndDelegate.h"
#include "MissionEventDisplayTargetLocatorDelegate.h"
#include "MissionEventWeaponCountChangedDelegate.h"
#include "MissionEventTimeElapseSinceEnteredCloudDelegate.h"
#include "MissionEventObjectLostLockonDelegate.h"
#include "MissionEventObjectFireFlareDelegate.h"
#include "MissionEventMissionTimeElapseDelegate.h"
#include "MissionEventObjectToObjectEventOccurredDelegate.h"
#include "MissionEventObjectInterceptWeaponDelegate.h"
#include "MissionEventChangedMultiplayerStateDelegate.h"
#include "MissionEventObjectEventOccurredDelegate.h"
#include "MissionEventMiniGamePlayingTickDelegate.h"
#include "MissionEventMiniGameEventOccurredDelegate.h"
#include "MissionEventTGTPEventPhaseDelegate.h"
#include "MissionEventMADEventPhaseDelegate.h"
#include "MissionEventSubmarineEventMovedOnWaterDelegate.h"
#include "MissionEventSonobuoyEventOccurredDelegate.h"
#include "MissionEventSubmarineEventMovedUnderWaterDelegate.h"
#include "MissionEventSubmarineEventCompletedNoseLiftDelegate.h"
#include "MissionEventSubmarineEventRailgunStateDelegate.h"
#include "MissionEventSubmarineEventCompletedNoseDownDelegate.h"
#include "MissionEventTargetLostJammerEndDelegate.h"
#include "EMissionCondition_PlayerDeadReason.h"
#include "ESonobuoyEvent.h"
#include "EMissionCondition_MultiplayerEvent.h"
#include "EMissionCondition_LostLockonCause.h"
#include "ESubFaction.h"
#include "EMissionCondition_ObjectEvent.h"
#include "EMissionCondition_FailureType.h"
#include "EMissionCondition_SystemMessageType.h"
#include "MissionEventListener.generated.h"

class ASystemObjectSonobuoy;
class AGameObject;
class AAIGroundVehicle;
class AWeaponBase;
class AUnit;

UCLASS(Blueprintable)
class NIMBUS_API AMissionEventListener : public AActor, public IMissionEventListenerInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMissionEventListenerTick, float, DeltaSeconds);
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionEventListenerTick OnListenerTick;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionEventObjectFireWeapon OnObjectFireWeapon;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionEventObjectDestroyed OnObjectDestroyed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionEventObjectTakeDamage OnObjectTakeDamage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionEventObjectLockon OnObjectLockon;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionEventObjectFoundTarget OnObjectFoundTarget;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionEventObjectGetBehind OnObjectGetBehind;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionEventMissileLostTarget OnMissileLostTarget;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionEventCloudStateChanged OnCloudStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionEventObjectKilledByPlayer OnObjectKilledByPlayer;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionEventUnitActivated OnUnitActivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionEventUnitDestroyed OnUnitDestroyed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionEventMissionPhaseStart OnMissionPhaseStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionEventMissionFailed OnMissionFailed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionEventPlayerDead OnPlayerDead;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionEventMissionAccomplished OnMissionAccomplished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionEventRadioGroupBegin OnRadioGroupBegin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionEventRadioMessageBegin OnRadioMessageBegin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionEventRadioMessageEnd OnRadioMessageEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionEventDisplaySystemMessage OnDisplaySystemMessage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionEventDisplayTargetLocator OnDisplayTargetLocator;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionEventWeaponCountChanged OnWeaponCountChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionEventObjectLostLockon OnObjectLostLockon;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionEventTimeElapseSinceEnteredCloud OnTimeElapseSinceEnteredCloud;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionEventObjectFireFlare OnObjectFireFlare;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionEventMissionTimeElapse OnMissionTimeElapse;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionEventObjectInterceptWeapon OnObjectInterceptWeapon;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionEventChangedMultiplayerState OnChangedMultiplayerState;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionEventObjectToObjectEventOccurred OnObjectToObjectEventOccurred;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionEventObjectEventOccurred OnObjectEventOccurred;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionEventMiniGameEventOccurred OnMiniGameEventOccurred;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionEventMiniGamePlayingTick OnMiniGamePlayingTick;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionEventTGTPEventPhase OnEventTGTPEventPhase;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionEventMADEventPhase OnEventMADEventPhase;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionEventSonobuoyEventOccurred OnSonobuoyEventOccurred;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionEventSubmarineEventMovedOnWater OnSubmarineEventMovedOnWater;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionEventSubmarineEventMovedUnderWater OnSubmarineEventMovedUnderWater;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionEventSubmarineEventCompletedNoseLift OnSubmarineEventCompletedNoseLift;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionEventSubmarineEventCompletedNoseDown OnSubmarineEventCompletedNoseDown;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionEventSubmarineEventRailgunState OnSubmarineEventRailgunState;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionEventTargetLostJammerEnd OnTargetLostJammerEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableEventFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PhaseNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableDuringMission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableDuringMiniGame;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableReplaying;
    
public:
    AMissionEventListener();
    UFUNCTION(BlueprintCallable)
    void EnableBPEvent(bool bEnable);
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    void HandlerWeaponCountChanged(const AGameObject* Caucer, const AWeaponBase* Weapon, int32 WeaponNumber, int32 RemainingCount, int32 PrevCount, int32 MaxCount) override PURE_VIRTUAL(HandlerWeaponCountChanged,);
    
    UFUNCTION()
    void HandlerUnitDestroyed(const AUnit* Unit) override PURE_VIRTUAL(HandlerUnitDestroyed,);
    
    UFUNCTION()
    void HandlerUnitActivated(const AUnit* Unit) override PURE_VIRTUAL(HandlerUnitActivated,);
    
    UFUNCTION()
    void HandlerTimeElapseSinceEnteredCloud(const AGameObject* Caucer, float ElapsedTime, float PrevElapsedTime) override PURE_VIRTUAL(HandlerTimeElapseSinceEnteredCloud,);
    
    UFUNCTION()
    void HandlerTGTPEventPhase(ETGTP_PhaseType InPhaseType) override PURE_VIRTUAL(HandlerTGTPEventPhase,);
    
    UFUNCTION()
    void HandlerSubmarineEventRailgunState(const AAIGroundVehicle* Submarine, ESubmarineRailgunEvent Event) override PURE_VIRTUAL(HandlerSubmarineEventRailgunState,);
    
    UFUNCTION()
    void HandlerSubmarineEventMovedUnderWater(const AAIGroundVehicle* Submarine) override PURE_VIRTUAL(HandlerSubmarineEventMovedUnderWater,);
    
    UFUNCTION()
    void HandlerSubmarineEventMovedOnWater(const AAIGroundVehicle* Submarine) override PURE_VIRTUAL(HandlerSubmarineEventMovedOnWater,);
    
    UFUNCTION()
    void HandlerSubmarineEventCompletedNoseLift(const AAIGroundVehicle* Submarine) override PURE_VIRTUAL(HandlerSubmarineEventCompletedNoseLift,);
    
    UFUNCTION()
    void HandlerSubmarineEventCompletedNoseDown(const AAIGroundVehicle* Submarine) override PURE_VIRTUAL(HandlerSubmarineEventCompletedNoseDown,);
    
    UFUNCTION()
    void HandlerSonobuoyEventOccurred(const ASystemObjectSonobuoy* Sonobuoy, ESonobuoyEvent Event) override PURE_VIRTUAL(HandlerSonobuoyEventOccurred,);
    
    UFUNCTION()
    void HandlerRadioMessageEnd(const FString& RadioGroupID, const FString& VoiceID, bool bGroupEnd) override PURE_VIRTUAL(HandlerRadioMessageEnd,);
    
    UFUNCTION()
    void HandlerRadioMessageBegin(const FString& RadioGroupID, const FString& VoiceID) override PURE_VIRTUAL(HandlerRadioMessageBegin,);
    
    UFUNCTION()
    void HandlerRadioGroupBegin(const FString& RadioGroupID) override PURE_VIRTUAL(HandlerRadioGroupBegin,);
    
    UFUNCTION()
    void HandlerPlayerDead(EMissionCondition_PlayerDeadReason DeadReason) override PURE_VIRTUAL(HandlerPlayerDead,);
    
    UFUNCTION()
    void HandlerObjectToObjectEventOccurred(const AGameObject* Causer, const AGameObject* Target, EMissionCondition_ObjectToObjectEvent Event) override PURE_VIRTUAL(HandlerObjectToObjectEventOccurred,);
    
    UFUNCTION()
    void HandlerObjectTakeDamage(const AGameObject* Causer, const AGameObject* DamagedTarget, const AWeaponBase* WeaponEntity, const AWeaponBase* WeaponTypeCDO, float Damage) override PURE_VIRTUAL(HandlerObjectTakeDamage,);
    
    UFUNCTION()
    void HandlerObjectLostLockon(const AGameObject* Caucer, const AGameObject* LcokonTarget, EMissionCondition_LostLockonCause Cause) override PURE_VIRTUAL(HandlerObjectLostLockon,);
    
    UFUNCTION()
    void HandlerObjectLockon(const AGameObject* Causer, const AGameObject* LockonTarget) override PURE_VIRTUAL(HandlerObjectLockon,);
    
    UFUNCTION()
    void HandlerObjectKilledByPlayer(const AGameObject* Causer, ESubFaction SubFaction) override PURE_VIRTUAL(HandlerObjectKilledByPlayer,);
    
    UFUNCTION()
    void HandlerObjectInterceptWeapon(const AGameObject* Causer, const AWeaponBase* Weapon, const AGameObject* InterceptedShooter, const AWeaponBase* InterceptedWeapon) override PURE_VIRTUAL(HandlerObjectInterceptWeapon,);
    
    UFUNCTION()
    void HandlerObjectGetBehind(const AGameObject* Causer, const AGameObject* ChaseTarget) override PURE_VIRTUAL(HandlerObjectGetBehind,);
    
    UFUNCTION()
    void HandlerObjectFoundTarget(const AGameObject* Causer, const AGameObject* TrackingTarget) override PURE_VIRTUAL(HandlerObjectFoundTarget,);
    
    UFUNCTION()
    void HandlerObjectFireWeapon(const AGameObject* Causer, const AGameObject* WeaponTarget, const AWeaponBase* Weapon, int32 WeaponNumber) override PURE_VIRTUAL(HandlerObjectFireWeapon,);
    
    UFUNCTION()
    void HandlerObjectFireFlare(const AGameObject* Caucer, int32 RemainingCount) override PURE_VIRTUAL(HandlerObjectFireFlare,);
    
    UFUNCTION()
    void HandlerObjectEventOccurred(const AGameObject* Causer, EMissionCondition_ObjectEvent Event) override PURE_VIRTUAL(HandlerObjectEventOccurred,);
    
    UFUNCTION()
    void HandlerObjectDestroyed(const AGameObject* Causer, const AGameObject* DestroyedTarget, const AGameObject* TargetLockonTarget, const AWeaponBase* HitWeapon, const AWeaponBase* HitWeaponTypeCDO) override PURE_VIRTUAL(HandlerObjectDestroyed,);
    
    UFUNCTION()
    void HandlerMissionTimeElapse(float ElapsedTime, float PrevElapsedTime, float TimeLeft, float PrevTimeLeft) override PURE_VIRTUAL(HandlerMissionTimeElapse,);
    
    UFUNCTION()
    void HandlerMissionPhaseStart(int32 NewPhaseNo) override PURE_VIRTUAL(HandlerMissionPhaseStart,);
    
    UFUNCTION()
    void HandlerMissionFailed(EMissionCondition_FailureType FailureType) override PURE_VIRTUAL(HandlerMissionFailed,);
    
    UFUNCTION()
    void HandlerMissionAccomplished() override PURE_VIRTUAL(HandlerMissionAccomplished,);
    
    UFUNCTION()
    void HandlerMissileLostTarget(const AGameObject* Causer, const AGameObject* MissileTarget, const AWeaponBase* Weapon) override PURE_VIRTUAL(HandlerMissileLostTarget,);
    
    UFUNCTION()
    void HandlerMiniGamePlayingTick(float DeltaSeconds) override PURE_VIRTUAL(HandlerMiniGamePlayingTick,);
    
    UFUNCTION()
    void HandlerMiniGameEventOccurred(EMissionCondition_MiniGameEvent Event) override PURE_VIRTUAL(HandlerMiniGameEventOccurred,);
    
    UFUNCTION()
    void HandlerMADEventPhase(EMAD_SearchType InPhaseType) override PURE_VIRTUAL(HandlerMADEventPhase,);
    
    UFUNCTION()
    void HandlerLostTargetJammerEnd() override PURE_VIRTUAL(HandlerLostTargetJammerEnd,);
    
    UFUNCTION()
    void HandlerDisplayTargetLocator(const AGameObject* Target) override PURE_VIRTUAL(HandlerDisplayTargetLocator,);
    
    UFUNCTION()
    void HandlerDisplaySystemMessage(EMissionCondition_SystemMessageType MessageType) override PURE_VIRTUAL(HandlerDisplaySystemMessage,);
    
    UFUNCTION()
    void HandlerCloudStateChanged(const AGameObject* Causer, EMissionCondition_CloudEvent CloudEvent) override PURE_VIRTUAL(HandlerCloudStateChanged,);
    
    UFUNCTION()
    void HandlerChangedMultiplayerState(const AGameObject* Causer, EMissionCondition_MultiplayerEvent Event) override PURE_VIRTUAL(HandlerChangedMultiplayerState,);
    
};

