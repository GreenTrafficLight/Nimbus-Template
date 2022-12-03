#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "UnitActivationType.h"
#include "UObject/NoExportTypes.h"
#include "EFaction.h"
#include "EEngagement.h"
#include "ESubFaction.h"
#include "FormationSlot.h"
#include "UObject/NoExportTypes.h"
#include "UnitChildActor.h"
#include "EWeaponNumber.h"
#include "EWeaponSpecialBehaviorType.h"
#include "EHudBoxAttribute.h"
#include "ETargetType.h"
#include "AISpecialActionRequestInfo.h"
#include "EHPModifier.h"
#include "EEnemySearchPriority.h"
#include "EEnemySearchPriorityExtension.h"
#include "Unit.generated.h"

class AAIPath;
class UAsyncTaskProcessUnit;
class AAIGameObject;
class AAIPathPoint;
class AGameObject;
class UAIUAVComponent;
class AUnit;
class UAIPathComponent;
class APawn;

UCLASS(Blueprintable)
class NIMBUS_API AUnit : public AActor {
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
    FOnReachedPathPoint OnReachedPathPoint;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReachedPathEntryPoint OnReachedPathEntryPoint;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFinishedMovingOnPath OnFinishedMovingOnPath;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnResetPath OnResetPath;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsMoving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bUsingSpecifiedFormation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActivateFromStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFaction Faction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESubFaction SubFaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinAltitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAltitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AAIGameObject*> AttachedObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AGameObject*> HostileGameObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAIUAVComponent*> UAVComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HostileSearchDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsNotActivateDeadObjectOnRestart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFormationSlot> FormationSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFormationSlot> DefaultFormationSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFormationSlot> DefaultFormationSlotsBackup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FormationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAsyncTaskProcessUnit* UnitAsyncTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUnitChildActor> ChildActorList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAIPathComponent* AIPathComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNotUnitIconCandidate;
    
public:
    AUnit();
    UFUNCTION(BlueprintCallable)
    void UndockChildActorUAVs();
    
    UFUNCTION(BlueprintCallable)
    void SkipOutOfWoldCheck(bool bSkip);
    
    UFUNCTION(BlueprintCallable)
    void SetWeaponSpecialBehavior(EWeaponNumber WeaponNumber, EWeaponSpecialBehaviorType BehaviorType);
    
    UFUNCTION(BlueprintCallable)
    void SetWeaponSettings(bool bInCanDamageTGT, bool bInCanFireNoCollisionWeapon);
    
    UFUNCTION(BlueprintCallable)
    void SetShowHudBox(bool bShowHUDBox);
    
    UFUNCTION(BlueprintCallable)
    void SetRadiusMeters(float RadiusInMeters);
    
    UFUNCTION(BlueprintCallable)
    void SetPathParameter(float InSpeedKmph, float InAccelerationMpss, float InRotationSpeedDegree);
    
    UFUNCTION(BlueprintCallable)
    void SetMinHealth(float InHealth);
    
    UFUNCTION(BlueprintCallable)
    void SetMinAltitudeMeters(float MinAltitudeMeters);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxAltitudeMeters(float MaxAltitudeMeters);
    
    UFUNCTION(BlueprintCallable)
    void SetIsTGT(bool bIsTarget);
    
    UFUNCTION(BlueprintCallable)
    void SetIsInvincible(bool bInvincible);
    
    UFUNCTION(BlueprintCallable)
    void SetIsCosmetic();
    
    UFUNCTION(BlueprintCallable)
    void SetIsAttackTargetsException(bool bAttackTargetsException);
    
    UFUNCTION(BlueprintCallable)
    void SetHudBoxVisibilityRange(float RadiusMeters);
    
    UFUNCTION(BlueprintCallable)
    void SetHudBoxAttribute(EHudBoxAttribute Attribute);
    
    UFUNCTION(BlueprintCallable)
    void SetGameObjectCurrentSpeed(float SpeedKmph);
    
    UFUNCTION(BlueprintCallable)
    void SetFaction(EFaction NewFaction);
    
    UFUNCTION(BlueprintCallable)
    void SetExceptionTarget(AGameObject* ExceptionTarget);
    
    UFUNCTION(BlueprintCallable)
    void SetEnemySearchType(ETargetType InType);
    
    UFUNCTION(BlueprintCallable)
    void SetCommonAttributes(bool bShowHUDBox, bool bIsInvincible, bool bIsTGT);
    
    UFUNCTION(BlueprintCallable)
    void RestoreUnit();
    
    UFUNCTION(BlueprintCallable)
    void RequestSpecialAction(const FAISpecialActionRequestInfo& SpecialActionRequestInfo);
    
    UFUNCTION(BlueprintCallable)
    void RepositionUnit(UnitActivationType RepositionType, FVector Position, FRotator Rotation, AActor* TransformReferenceActor, bool bAddHeightOfGroundToZ);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAIGameObject(AAIGameObject* Object);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRestored();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDeath(AUnit* DeadUnit);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActivation(AUnit* ActivatedUnit);
    
    UFUNCTION(BlueprintCallable)
    void ModifyHealth(EHPModifier ModType, float InValue, APawn* DamageCauser, bool bCauseDamageEvent);
    
    UFUNCTION(BlueprintCallable)
    void K2_DestroyActor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDestroyed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActivated() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAliveGameObject(bool bIncludeChild) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetUnitDamagePercentage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalGameObjectNum(bool bIncludeChild) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESubFaction GetSubFaction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRadiusMeters();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFaction GetFaction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDeadGameObjectNum(bool bIncludeChild) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAliveGameObjectNum(bool bIncludeChild) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<AAIGameObject*> GetAIGameObjectsCopy(TSubclassOf<AAIGameObject> SubClass);
    
    UFUNCTION(BlueprintCallable)
    void EngagementOrder(EEngagement Order, AActor* TargetEnemy, EEnemySearchPriority SearchPriority, EEnemySearchPriorityExtension SearchPriorityExtension, bool bIgnoreUnidentifiedObject, bool IgnoreAttackQuota, bool CanFireWeapon1, bool CanFireWeapon2, bool CanFireWeapon3);
    
    UFUNCTION(BlueprintCallable)
    void EnableKDSMode(bool bInEnabled);
    
    UFUNCTION(BlueprintCallable)
    void DockUAVsToActor(AGameObject* ParentObject, const FString& DockSocketName, int32 FirstSlot, int32 LastSlot);
    
    UFUNCTION(BlueprintCallable)
    void DockChildActorUAVs();
    
    UFUNCTION(BlueprintCallable)
    void DeactivateUnit();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool AreAllUnitsUAVDocked(TArray<AUnit*> Units);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreAllUAVDocked();
    
    UFUNCTION(BlueprintCallable)
    void AddAIGameObject(AAIGameObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void Activate(bool bActivate);
    
};

