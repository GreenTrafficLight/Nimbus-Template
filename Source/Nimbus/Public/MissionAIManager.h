#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ETGTP_PhaseType.h"
#include "MissionEventListenerInterface.h"
#include "EMissionCondition_PlayerDeadReason.h"
#include "ESubmarineRailgunEvent.h"
#include "ESonobuoyEvent.h"
#include "EMissionCondition_ObjectToObjectEvent.h"
#include "EMissionCondition_MultiplayerEvent.h"
#include "EMissionCondition_LostLockonCause.h"
#include "ESubFaction.h"
#include "EMissionCondition_ObjectEvent.h"
#include "EMissionCondition_FailureType.h"
#include "EMAD_SearchType.h"
#include "EMissionCondition_MiniGameEvent.h"
#include "EMissionCondition_SystemMessageType.h"
#include "EMissionCondition_CloudEvent.h"
#include "MissionAIManager.generated.h"

class AWeaponBase;
class AAIGroundVehicle;
class AGameObject;
class AUnit;
class ASystemObjectSonobuoy;

UCLASS(Blueprintable)
class NIMBUS_API AMissionAIManager : public AActor, public IMissionEventListenerInterface {
    GENERATED_BODY()
public:
    AMissionAIManager();
    UFUNCTION(BlueprintCallable)
    void OnMissionPhaseRestarted(const FString& Dummy);
    
    
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
    void HandlerMissionPhaseStart(int32 PhaseNo) override PURE_VIRTUAL(HandlerMissionPhaseStart,);
    
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

