#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Pawn.h"
#include "NimbusBeginOverlapDelegate.h"
#include "EGameObjectCategory.h"
#include "EHudBoxAttribute.h"
#include "EGameObjectSubCategory.h"
#include "EMissileAlert.h"
#include "UObject/NoExportTypes.h"
#include "AirCurrentData.h"
#include "OneTimeFunc.h"
#include "NimbusEndOverlapDelegate.h"
#include "ENimbusCameraShakeType.h"
#include "GameObject.generated.h"

class AGameObject;
class AWeaponBase;
class AElectronicSupportMeasures;
class UAkAudioEvent;
class USphereComponent;
class UParticleSystem;
class AUnit;
class ATargetContainer3DUIActor;
class ANimbusTriggerBase;
class UWeaponManager;
class UMeshComponent;
class AAirCurrentVolume;
class AActor;
class UNimbusGameObjectComponent;
class ANimbusHUD;

UCLASS(Blueprintable)
class NIMBUS_API AGameObject : public APawn {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnVisibilityChanged, bool, bVisibility);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FOnTakeDamage, const AGameObject*, Causer, const AGameObject*, DamagedObject, const AWeaponBase*, Weapon, float, Damage, const AWeaponBase*, WeaponTypeCDO);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSleepChanged);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnRestoredDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnRepositionDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnLockedOnByEnemy, AGameObject*, LockedObject, AGameObject*, EnemyObject);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnIdentified);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChildGameObjectRecoveryTriggered, AGameObject*, ChildGameObject);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChildGameObjectRecoveryEnded, AGameObject*, ChildGameObject);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChildGameObjectDeath, AGameObject*, DeadChildGameObject);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTakeDamage OnTakeDamage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChildGameObjectDeath OnChildGameObjectDeath;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChildGameObjectRecoveryTriggered OnChildGameObjectRecoveryTriggered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChildGameObjectRecoveryEnded OnChildGameObjectRecoveryEnded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnIdentified OnIdentified;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVisibilityChanged OnVisibilityChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRestoredDelegate OnRestoredDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* OverlapCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* SphereCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameObjectCategory GameObjectCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameObjectSubCategory GameObjectSubCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MinHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Speed;
    
    UPROPERTY(EditAnywhere)
    uint8 StealthLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 KillBountyScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsActivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsInvincible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsReplayMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsIGCMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsShownDuringIGC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAttackTargetsException;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsExcludeFromGunAutoFire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LookAheadTimeSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ObjNameID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CallsignID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SpeakerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AWeaponBase*> AttackingMainWeaponArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AWeaponBase*> AttackingSpecialWeaponArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AGameObject* LastAttackingSpecialWeaponOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AGameObject*> AttachedGameObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMissileAlert MissileAlert;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMissileAlertedByAI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AWeaponBase* AlertedWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AGameObject*> PursuitAttackers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AGameObject*> NonPursuitAttackers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* DeathVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* StruckByLightningVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StruckByLightningSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector HitCenterOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PursuitPointOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LeadPointOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FrontViewHalfConeAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AirCurrentPositionInfluenceModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AirCurrentRotationInfluenceModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToRecoverFromLightningStrike;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LightningAffectModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsUnidentified;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNeedsDetection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetectionDistanceMeters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IdentifyDistanceMeters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWeaponManager* WeaponManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPlayerTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AGameObject* OwningParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AGameObject* ChildGameObjectParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CloudEnterDensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CloudExitDensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToDeactivateAfterDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATargetContainer3DUIActor* TargetContainerActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<AAirCurrentVolume*, FAirCurrentData> AirCurrentDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMeshComponent*> OverriddenForceLODMeshs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsPersistentForceLOD;
    
    UPROPERTY(EditAnywhere)
    uint16 PilotDataID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableOverlapEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UNimbusGameObjectComponent*> GameObjectComponentsToTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FOneTimeFunc> SafelyCallBeforeTickComponentOneTimeFuncs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ANimbusTriggerBase*> OverlappedNimbusTriggerActors;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNimbusBeginOverlap OnNimbusBeginOverlap;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNimbusEndOverlap OnNimbusEndOverlap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BackBlindZoneTransitionDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMeshComponent* GunHitMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName OriginalCollisionProfileName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName CurrentCollisionProfileName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDeathCameraShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENimbusCameraShakeType DeathCameraShakeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrowHUDMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float FullDisplayTimeAfterStealthAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ReturnToStealthTimeAfterStealthAttack;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AElectronicSupportMeasures* JammingMeasures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AElectronicSupportMeasures* SupportMeasures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HealthInternal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ANimbusHUD* NimbusHUDCache;
    
public:
    AGameObject();
    UFUNCTION(BlueprintCallable)
    void SetMinHealth(float InHealth);
    
    UFUNCTION(BlueprintCallable)
    void SetIsUnidentified(bool bUnidentified);
    
    UFUNCTION(BlueprintCallable)
    void SetIsInvincibleFromAI(bool bInvincible);
    
    UFUNCTION(BlueprintCallable)
    void SetIsInvincible(bool bInvincible);
    
    UFUNCTION(BlueprintCallable)
    void SetIsExcludeFromGunAutoFire(bool bExcludeFromGunAutoFire);
    
    UFUNCTION(BlueprintCallable)
    void SetIsAttackTargetsException(bool bAttackTargetsException);
    
    UFUNCTION(BlueprintCallable)
    void SetHudBoxAttribute(EHudBoxAttribute Type);
    
    UFUNCTION(BlueprintCallable)
    void SetActive(bool bActive, bool bReset);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWeaponLocked();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWeaponDetectionLost();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWeaponDetectionAcquired();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRestored();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnReposition();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMissileAlertStateChange(EMissileAlert NewState, AActor* Attacker);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnHitByGun(AActor* Attacker);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExecRecordableEvent(int32 EventID);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDeath(AGameObject* DeadGameObject);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDeactivate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAttackedBySpecialWeapon(bool isAttacked, AActor* Attacker);
    
    UFUNCTION(BlueprintCallable)
    void OnAttachedActorLockedOnByEnemy(AGameObject* LockedObject, AGameObject* EnemyObject);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActivate();
    
    UFUNCTION(BlueprintCallable)
    float ModifyHealth(float InValue, APawn* DamageCauser, bool bCauseDamageEvent);
    
    UFUNCTION(BlueprintCallable)
    void K2_DestroyActor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStruckByLightning() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNimbusOverlappingActor(const AActor* Other) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAttackedBySpecialWeapon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAttackedByOpponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAttackedByMainWeapon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAlive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActivated() const;
    
    UFUNCTION(BlueprintCallable)
    AUnit* GetUnit();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTrueSkyQueryID(int32 RelativeID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpeedMps() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpeedKmph() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSpeakerID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetPursuitPoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetObjNameID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetObjName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetNimbusOverlappingActors(TArray<AActor*>& OverlappingActors, TSubclassOf<AActor> ClassFilter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMinHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxHealth() const;
    
    UFUNCTION(BlueprintCallable)
    AGameObject* GetLockedOnTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLeadPoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsUnidentified() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsInStealth(const FVector& PlayerLocation, const AGameObject* GameObject) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsDetected() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDamagePercentage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCallsignID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCallsign() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AWeaponBase*> GetAttackingMainWeaponArray() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAltitudeMeters() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceShowHudBoxInSand(bool bShow);
    
    UFUNCTION(BlueprintCallable)
    void ForceDetection();
    
    UFUNCTION(BlueprintCallable)
    void ExecRecordableEvent(int32 EventID);
    
    UFUNCTION(BlueprintCallable)
    void EnableKDSMode(bool bIsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void EnableFriendlyFireDamage(bool bEnable);
    
};

