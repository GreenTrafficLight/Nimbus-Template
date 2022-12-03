#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "PlayerSpecialWeaponConfig.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EWeaponNumber.h"
#include "PlayerWeaponActivator.generated.h"

class UWeaponParameters;
class ABullet;
class AFlare;
class AActor;
class AWeaponBase;
class UMeshComponent;
class AExplosiveWeapon;
class AGameObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class NIMBUS_API UPlayerWeaponActivator : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABullet> MachineGunClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxGunCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AWeaponBase> MainWeaponClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxMainWeaponCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FreeRestockAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FreeRestockTimeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FreeRestockTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator MainWeaponShotAdjustRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerSpecialWeaponConfig SpecialWeaponConfig1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerSpecialWeaponConfig SpecialWeaponConfig2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerSpecialWeaponConfig SpecialWeaponConfig3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpecialWeaponCoverTLSCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> UAV_ReturnMoveSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AWeaponBase> SpecialWeaponClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxSpecialWeaponCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFlare> FlareClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FlareParticlePerActivation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlareParticlePeriod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlareParticleMaxSpawnAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FlareParticleSpawnPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator FlareParticleSpawnRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlareEffectiveRangeSquared;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlareReloadTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxFlareCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshComponent* ActiveSWPMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCastInsetShadow;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AExplosiveWeapon*> ExplosiveWeaponsShot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AGameObject*> HomingTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AWeaponBase*> SpawnedWeapons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AWeaponBase*> ActiveWeapons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AWeaponBase* DummyPredictionWeapon;
    
public:
    UPlayerWeaponActivator();
    UFUNCTION(BlueprintCallable)
    bool ToggleSpecial();
    
    UFUNCTION(BlueprintCallable)
    void ReleaseWeaponInput();
    
    UFUNCTION(BlueprintCallable)
    void MainWeaponReleased();
    
    UFUNCTION(BlueprintCallable)
    void MainWeaponPressed();
    
    UFUNCTION(BlueprintCallable)
    void MachineGunReleased();
    
    UFUNCTION(BlueprintCallable)
    void MachineGunPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetWeaponNameString(EWeaponNumber WeaponNumber) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSpecialWeaponNameString() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSpecialWeaponCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetMainWeaponNameString() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMainWeaponCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetGunWeaponNameString() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGunCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFlareCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWeaponParameters* GetArmedWeaponParameters() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AWeaponBase* GetArmedWeapon() const;
    
    UFUNCTION(BlueprintCallable)
    void FlareReleased();
    
    UFUNCTION(BlueprintCallable)
    void FlarePressed();
    
};

