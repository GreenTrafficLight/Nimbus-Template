#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameObject.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "EWeaponNumber.h"
#include "EAIPathMovingActorSnap.h"
#include "EWeaponSpecialBehaviorType.h"
#include "ETargetType.h"
#include "EEngagement.h"
#include "ESubFaction.h"
#include "EFaction.h"
#include "EEnemySearchPriority.h"
#include "EEnemySearchPriorityExtension.h"
#include "AIGameObject.generated.h"

class AAIPath;
class AAIPathPoint;
class AUnit;
class UAIFireControlSystem;
class AExplosion;
class UAIPathComponent;
class UDataTable;
class UCurveVector;
class AActor;
class AAIGameObject;

UCLASS(Blueprintable)
class NIMBUS_API AAIGameObject : public AGameObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStartedMovingOnPath, AAIPath*, Path);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnResetPath, AAIPath*, Path);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnReachedPathPoint, AAIPathPoint*, PathPoint);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnReachedPathEntryPoint, AAIPath*, Path);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFinishedMovingOnPath, AAIPath*, Path);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStartedMovingOnPath OnStartedMovingOnPath;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReachedPathEntryPoint OnReachedPathEntryPoint;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReachedPathPoint OnReachedPathPoint;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFinishedMovingOnPath OnFinishedMovingOnPath;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnResetPath OnResetPath;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AUnit* Unit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAIFireControlSystem* FCS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAIPathComponent* AIPathComp;
    
    UPROPERTY(EditAnywhere)
    uint8 AILevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* AIPilotDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* AIParamDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* AIParamModifierDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* AIFlaresDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* AIWeaponDurabilityDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* AIWeaponExplosionDurabilityDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bScaleLevelWithDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldShowInBriefing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFocusableInBriefing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTgtInBriefing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldRecordForDebriefing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceDisplayObjNameIDForDebriefing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowHUDBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPermissionToEngage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPermissionToFire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPermissionToUseFlares;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPermissionToProvoke;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPermissionToEvade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIgnoreAttackQuota;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsTGT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMissionSpecialObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsICBM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AExplosion> ExplosionWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCauseExplosionOnDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCauseExplosionWeaponOwnerIsKilledByAttacker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bNeedOutOfWldReact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CloudCoverDensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanRecover;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RecoveryTimes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RecoveryDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle NPCMoveSoundRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle NPCPassingSoundSwitchRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanActivateFlares;
    
public:
    AAIGameObject();
    UFUNCTION(BlueprintCallable)
    void StopFireContinuousShotWeapon();
    
    UFUNCTION(BlueprintCallable)
    void SetWeaponSpecialBehavior(EWeaponNumber WeaponNumber, EWeaponSpecialBehaviorType BehaviorType);
    
    UFUNCTION(BlueprintCallable)
    void SetWeaponSettings(bool bInCanDamageTGT, bool bInCanFireNoCollisionWeapon);
    
    UFUNCTION(BlueprintCallable)
    void SetShowHudBox(bool bShow);
    
    UFUNCTION(BlueprintCallable)
    void SetPathParameter(float InSpeedKmph, float InAccelerationMpss, float InRotationSpeedDegree, EAIPathMovingActorSnap InSnapSetting);
    
    UFUNCTION(BlueprintCallable)
    void SetParkingMode(bool bParked, float DelayTime);
    
    UFUNCTION(BlueprintCallable)
    void SetMoveOnPathApproachTimeOutValue(float InTime);
    
    UFUNCTION(BlueprintCallable)
    void SetIsTGT(bool bIsTarget);
    
    UFUNCTION(BlueprintCallable)
    void SetIsMissionSpecialObject(bool bIsMissionSpecial);
    
    UFUNCTION(BlueprintCallable)
    void SetExceptionTarget(AGameObject* ExceptionTarget);
    
    UFUNCTION(BlueprintCallable)
    void SetEnemySearchType(ETargetType InType);
    
    UFUNCTION(BlueprintCallable)
    void RemoveFromDebriefingRecording();
    
    UFUNCTION(BlueprintCallable)
    void ParkOnPoint(AActor* Point);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRecoveryTriggered();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRecoveryEnded();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNotRecoveryTriggered();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEngagementOrderIssued();
    
    UFUNCTION(BlueprintCallable)
    void MoveWithCurve(UCurveVector* TransCurve, UCurveVector* RotCurve);
    
    UFUNCTION(BlueprintCallable)
    void MoveOnPath(AAIPath* AIPath, float InSpeedKmph, float InAccelerationMpss, float InRotationSpeedDegree, EAIPathMovingActorSnap InSnapSetting, float InPointRadiusMeter, bool bTeleport, bool bUseApproachActorForwardVector, bool bKeepOnLastPathPoint, bool bUseQuaternionVersion);
    
    UFUNCTION(BlueprintCallable)
    bool IsTrackingAirTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTGT() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSea() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReallyOnGround();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsParkingMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAir() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGameObject* GetTrackingTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESubFaction GetSubFaction() const;
    
    UFUNCTION(BlueprintCallable)
    AGameObject* GetLockedOnTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFaction GetFaction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AAIGameObject* GetChildGameObject(FName ComponentName);
    
    UFUNCTION(BlueprintCallable)
    void FireOneShotWeaponWithTargetTracking(EWeaponNumber WeaponNumber, AGameObject* Target, bool bIgnoreTargetRange, bool bContinueTrackingTarget);
    
    UFUNCTION(BlueprintCallable)
    void FireOneShotWeaponWithLocationTracking(EWeaponNumber WeaponNumber, const FVector& Target, bool bIgnoreTargetRange, bool bContinueTrackingTarget);
    
    UFUNCTION(BlueprintCallable)
    bool FireOneShotWeapon(EWeaponNumber WeaponNumber, AGameObject* Target, FVector DummyTargetOffset);
    
    UFUNCTION(BlueprintCallable)
    void FireContinuousShotWeapon(EWeaponNumber WeaponNumber, AGameObject* Target, FVector DummyTargetOffset, float InFCSVolleyTime, float InFCSVolleyFireInterval);
    
    UFUNCTION(BlueprintCallable)
    void EngagementOrderOverride(EEngagement Order, AActor* TargetEnemy, EEnemySearchPriority SearchPriority, EEnemySearchPriorityExtension SearchPriorityExtension, bool bIgnoreUnidentifiedObject, bool IgnoreAttackQuota, bool CanFireWeapon1, bool CanFireWeapon2, bool CanFireWeapon3, bool PropogateToChild);
    
    UFUNCTION(BlueprintCallable)
    void DisableRecovery(bool bDisable);
    
    UFUNCTION(BlueprintCallable)
    void CheckOutOfWorld();
    
    UFUNCTION(BlueprintCallable)
    void CancelMovingOnPath();
    
    UFUNCTION(BlueprintCallable)
    void AddToDebriefingRecording();
    
    UFUNCTION(BlueprintCallable)
    void ActivateFlares();
    
};

