#pragma once
#include "CoreMinimal.h"
#include "MissionConditionData.h"
#include "ETGTP_PhaseType.h"
#include "GameFramework/Actor.h"
#include "EMissionCondition_AzimuthOfClock.h"
#include "EMissionCondition_AzimuthOfDegrees.h"
#include "MissionEventListenerInterface.h"
#include "EMissionCondition_MiniGameCourseAssistant.h"
#include "ESubFaction.h"
#include "EMissionCondition_WeaponType.h"
#include "EMissionCondition_TeamSituation.h"
#include "EMissionCondition_ObjectSpecificType.h"
#include "EMissionCondition_DamageType.h"
#include "EMissionCondition_FailureType.h"
#include "EMissionCondition_MiniGameDistanceType.h"
#include "EMissionCondition_MiniGameType.h"
#include "EMissionCondition_BattleRoyalSituation.h"
#include "EMissionCondition_PlayerDeadReason.h"
#include "ESubmarineRailgunEvent.h"
#include "ESonobuoyEvent.h"
#include "EMissionCondition_ObjectToObjectEvent.h"
#include "EMissionCondition_MultiplayerEvent.h"
#include "EMissionCondition_LostLockonCause.h"
#include "EMissionCondition_ObjectEvent.h"
#include "EMAD_SearchType.h"
#include "EMissionCondition_MiniGameEvent.h"
#include "EMissionCondition_SystemMessageType.h"
#include "EMissionCondition_CloudEvent.h"
#include "MissionConditionChecker.generated.h"

class AGameObject;
class ASystemObjectSonobuoy;
class AAIGroundVehicle;
class AWeaponBase;
class AUnit;

UCLASS(Blueprintable, NotPlaceable)
class NIMBUS_API AMissionConditionChecker : public AActor, public IMissionEventListenerInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnConditionUpdate);
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnConditionUpdate OnConditionUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMissionConditionData> Conditions;
    
public:
    AMissionConditionChecker();
    UFUNCTION(BlueprintCallable)
    void OnMissionPhaseRestarted(const FString& Dummy);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 Get_TargetModifierStar(AGameObject* GameObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 Get_StealthContainerOpacityPercentage(const AGameObject* GameObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EMissionCondition_MiniGameCourseAssistant Get_LandingCourseAssistant(float TouchdownRate, float TopSlopeRate, float BottomSlopeRate, float SideLineRate, float TopExpandAngle, float BottomExpandAngle, float SideExpandAngle, float LimitGauge, float LimitRoll);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EMissionCondition_AzimuthOfDegrees Get_AzimuthOfDegreesToObject(const AGameObject* GameObject, const AGameObject* Target, bool bIsRelativePosition);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EMissionCondition_AzimuthOfClock Get_AzimuthOfClockToObject(const AGameObject* GameObject, const AGameObject* Target, bool bIsRelativePosition);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EMissionCondition_MiniGameCourseAssistant Get_AerialRefuellingCourseAssistant(float ThresholdSideDistance, float ThresholdTopDistance, float ThresholdBottomDistance, float SideExpandAngle, float TopExpandAngle, float BottomExpandAngle, float LimitGauge, float LimitRoll);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Check_WeaponType(const AWeaponBase* Weapon, EMissionCondition_WeaponType WeaponType, AWeaponBase*& OutWeapon);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Check_WeaponLockedOnTarget(const AWeaponBase* HitWeapon, const AGameObject* DamagedObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Check_WeaponInCloud(const AWeaponBase* Weapon);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Check_WeaponFired(EMissionCondition_ObjectSpecificType OwnerType, EMissionCondition_ObjectSpecificType TargetType, EMissionCondition_WeaponType WeaponType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Check_WeaponCountRateLessThanOrEqualTo(int32 WeaponCount, int32 MaxCount, float Rate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Check_TeamDeathMatchSituation(const AGameObject* GameObject, EMissionCondition_TeamSituation Situation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Check_TeamDeathMatchScoreProgress(float Percent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Check_TargetPlaneRank(const AGameObject* GameObject, int32 Rank);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Check_TargetLockon(EMissionCondition_ObjectSpecificType TargetType, EMissionCondition_ObjectSpecificType InstigatorType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Check_PhaseNo(int32 PhaseNo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Check_PhaseElapsedTime(float ElapsedTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Check_OutOfCombatZone(AActor* Actor, bool bAdaptAIFlightBufferDist);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Check_ObjectType(const AGameObject* GameObject, EMissionCondition_ObjectSpecificType SpecificType, AGameObject*& OutGameObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Check_ObjectDestroyed(EMissionCondition_ObjectSpecificType TargetType, EMissionCondition_ObjectSpecificType InstigatorType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Check_ObjectDamaged(EMissionCondition_ObjectSpecificType TargetType, EMissionCondition_ObjectSpecificType InstigatorType, EMissionCondition_DamageType DamageType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Check_MissionFailure(EMissionCondition_FailureType FailureType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Check_MissileLostTarget(EMissionCondition_ObjectSpecificType TargetType, EMissionCondition_ObjectSpecificType OwnerType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Check_MiniGameType(EMissionCondition_MiniGameType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Check_MiniGameDistance(EMissionCondition_MiniGameDistanceType Type, float ThresholdDistanceMeter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Check_LessMissionTimeLeft(float CheckTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Check_ElapsedTimeSinceEnteredCloud(const AGameObject* GameObject, float ElapsedTime, AGameObject*& OutGameObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Check_ElapsedMissionTime(float CheckTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Check_DistanceFromPlayer(const AActor* Actor, float Distance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Check_BattleRoyalSituation(const AGameObject* GameObject, EMissionCondition_BattleRoyalSituation Situation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Check_BattleRoyalRank(const AGameObject* GameObject, int32 Rank);
    
    
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

