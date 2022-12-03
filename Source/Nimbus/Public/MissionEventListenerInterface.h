#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ETGTP_PhaseType.h"
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
#include "MissionEventListenerInterface.generated.h"

class AWeaponBase;
class AAIGroundVehicle;
class AGameObject;
class ASystemObjectSonobuoy;
class AUnit;

UINTERFACE(MinimalAPI)
class UMissionEventListenerInterface : public UInterface {
    GENERATED_BODY()
};

class IMissionEventListenerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION()
    virtual void HandlerWeaponCountChanged(const AGameObject* Caucer, const AWeaponBase* Weapon, int32 WeaponNumber, int32 RemainingCount, int32 PrevCount, int32 MaxCount) PURE_VIRTUAL(HandlerWeaponCountChanged,);
    
    UFUNCTION()
    virtual void HandlerUnitDestroyed(const AUnit* Unit) PURE_VIRTUAL(HandlerUnitDestroyed,);
    
    UFUNCTION()
    virtual void HandlerUnitActivated(const AUnit* Unit) PURE_VIRTUAL(HandlerUnitActivated,);
    
    UFUNCTION()
    virtual void HandlerTimeElapseSinceEnteredCloud(const AGameObject* Caucer, float ElapsedTime, float PrevElapsedTime) PURE_VIRTUAL(HandlerTimeElapseSinceEnteredCloud,);
    
    UFUNCTION()
    virtual void HandlerTGTPEventPhase(ETGTP_PhaseType InPhaseType) PURE_VIRTUAL(HandlerTGTPEventPhase,);
    
    UFUNCTION()
    virtual void HandlerSubmarineEventRailgunState(const AAIGroundVehicle* Submarine, ESubmarineRailgunEvent Event) PURE_VIRTUAL(HandlerSubmarineEventRailgunState,);
    
    UFUNCTION()
    virtual void HandlerSubmarineEventMovedUnderWater(const AAIGroundVehicle* Submarine) PURE_VIRTUAL(HandlerSubmarineEventMovedUnderWater,);
    
    UFUNCTION()
    virtual void HandlerSubmarineEventMovedOnWater(const AAIGroundVehicle* Submarine) PURE_VIRTUAL(HandlerSubmarineEventMovedOnWater,);
    
    UFUNCTION()
    virtual void HandlerSubmarineEventCompletedNoseLift(const AAIGroundVehicle* Submarine) PURE_VIRTUAL(HandlerSubmarineEventCompletedNoseLift,);
    
    UFUNCTION()
    virtual void HandlerSubmarineEventCompletedNoseDown(const AAIGroundVehicle* Submarine) PURE_VIRTUAL(HandlerSubmarineEventCompletedNoseDown,);
    
    UFUNCTION()
    virtual void HandlerSonobuoyEventOccurred(const ASystemObjectSonobuoy* Sonobuoy, ESonobuoyEvent Event) PURE_VIRTUAL(HandlerSonobuoyEventOccurred,);
    
    UFUNCTION()
    virtual void HandlerRadioMessageEnd(const FString& RadioGroupID, const FString& VoiceID, bool bGroupEnd) PURE_VIRTUAL(HandlerRadioMessageEnd,);
    
    UFUNCTION()
    virtual void HandlerRadioMessageBegin(const FString& RadioGroupID, const FString& VoiceID) PURE_VIRTUAL(HandlerRadioMessageBegin,);
    
    UFUNCTION()
    virtual void HandlerRadioGroupBegin(const FString& RadioGroupID) PURE_VIRTUAL(HandlerRadioGroupBegin,);
    
    UFUNCTION()
    virtual void HandlerPlayerDead(EMissionCondition_PlayerDeadReason DeadReason) PURE_VIRTUAL(HandlerPlayerDead,);
    
    UFUNCTION()
    virtual void HandlerObjectToObjectEventOccurred(const AGameObject* Causer, const AGameObject* Target, EMissionCondition_ObjectToObjectEvent Event) PURE_VIRTUAL(HandlerObjectToObjectEventOccurred,);
    
    UFUNCTION()
    virtual void HandlerObjectTakeDamage(const AGameObject* Causer, const AGameObject* DamagedTarget, const AWeaponBase* WeaponEntity, const AWeaponBase* WeaponTypeCDO, float Damage) PURE_VIRTUAL(HandlerObjectTakeDamage,);
    
    UFUNCTION()
    virtual void HandlerObjectLostLockon(const AGameObject* Caucer, const AGameObject* LcokonTarget, EMissionCondition_LostLockonCause Cause) PURE_VIRTUAL(HandlerObjectLostLockon,);
    
    UFUNCTION()
    virtual void HandlerObjectLockon(const AGameObject* Causer, const AGameObject* LockonTarget) PURE_VIRTUAL(HandlerObjectLockon,);
    
    UFUNCTION()
    virtual void HandlerObjectKilledByPlayer(const AGameObject* Causer, ESubFaction SubFaction) PURE_VIRTUAL(HandlerObjectKilledByPlayer,);
    
    UFUNCTION()
    virtual void HandlerObjectInterceptWeapon(const AGameObject* Causer, const AWeaponBase* Weapon, const AGameObject* InterceptedShooter, const AWeaponBase* InterceptedWeapon) PURE_VIRTUAL(HandlerObjectInterceptWeapon,);
    
    UFUNCTION()
    virtual void HandlerObjectGetBehind(const AGameObject* Causer, const AGameObject* ChaseTarget) PURE_VIRTUAL(HandlerObjectGetBehind,);
    
    UFUNCTION()
    virtual void HandlerObjectFoundTarget(const AGameObject* Causer, const AGameObject* TrackingTarget) PURE_VIRTUAL(HandlerObjectFoundTarget,);
    
    UFUNCTION()
    virtual void HandlerObjectFireWeapon(const AGameObject* Causer, const AGameObject* WeaponTarget, const AWeaponBase* Weapon, int32 WeaponNumber) PURE_VIRTUAL(HandlerObjectFireWeapon,);
    
    UFUNCTION()
    virtual void HandlerObjectFireFlare(const AGameObject* Caucer, int32 RemainingCount) PURE_VIRTUAL(HandlerObjectFireFlare,);
    
    UFUNCTION()
    virtual void HandlerObjectEventOccurred(const AGameObject* Causer, EMissionCondition_ObjectEvent Event) PURE_VIRTUAL(HandlerObjectEventOccurred,);
    
    UFUNCTION()
    virtual void HandlerObjectDestroyed(const AGameObject* Causer, const AGameObject* DestroyedTarget, const AGameObject* TargetLockonTarget, const AWeaponBase* HitWeapon, const AWeaponBase* HitWeaponTypeCDO) PURE_VIRTUAL(HandlerObjectDestroyed,);
    
    UFUNCTION()
    virtual void HandlerMissionTimeElapse(float ElapsedTime, float PrevElapsedTime, float TimeLeft, float PrevTimeLeft) PURE_VIRTUAL(HandlerMissionTimeElapse,);
    
    UFUNCTION()
    virtual void HandlerMissionPhaseStart(int32 PhaseNo) PURE_VIRTUAL(HandlerMissionPhaseStart,);
    
    UFUNCTION()
    virtual void HandlerMissionFailed(EMissionCondition_FailureType FailureType) PURE_VIRTUAL(HandlerMissionFailed,);
    
    UFUNCTION()
    virtual void HandlerMissionAccomplished() PURE_VIRTUAL(HandlerMissionAccomplished,);
    
    UFUNCTION()
    virtual void HandlerMissileLostTarget(const AGameObject* Causer, const AGameObject* MissileTarget, const AWeaponBase* Weapon) PURE_VIRTUAL(HandlerMissileLostTarget,);
    
    UFUNCTION()
    virtual void HandlerMiniGamePlayingTick(float DeltaSeconds) PURE_VIRTUAL(HandlerMiniGamePlayingTick,);
    
    UFUNCTION()
    virtual void HandlerMiniGameEventOccurred(EMissionCondition_MiniGameEvent Event) PURE_VIRTUAL(HandlerMiniGameEventOccurred,);
    
    UFUNCTION()
    virtual void HandlerMADEventPhase(EMAD_SearchType InPhaseType) PURE_VIRTUAL(HandlerMADEventPhase,);
    
    UFUNCTION()
    virtual void HandlerLostTargetJammerEnd() PURE_VIRTUAL(HandlerLostTargetJammerEnd,);
    
    UFUNCTION()
    virtual void HandlerDisplayTargetLocator(const AGameObject* Target) PURE_VIRTUAL(HandlerDisplayTargetLocator,);
    
    UFUNCTION()
    virtual void HandlerDisplaySystemMessage(EMissionCondition_SystemMessageType MessageType) PURE_VIRTUAL(HandlerDisplaySystemMessage,);
    
    UFUNCTION()
    virtual void HandlerCloudStateChanged(const AGameObject* Causer, EMissionCondition_CloudEvent CloudEvent) PURE_VIRTUAL(HandlerCloudStateChanged,);
    
    UFUNCTION()
    virtual void HandlerChangedMultiplayerState(const AGameObject* Causer, EMissionCondition_MultiplayerEvent Event) PURE_VIRTUAL(HandlerChangedMultiplayerState,);
    
};

