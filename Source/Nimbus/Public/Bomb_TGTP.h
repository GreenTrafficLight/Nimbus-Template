#pragma once
#include "CoreMinimal.h"
#include "Bomb.h"
#include "UObject/NoExportTypes.h"
#include "ETGTP_AttackResult.h"
#include "ETGTP_ParticleSpawnType.h"
#include "UObject/NoExportTypes.h"
#include "Bomb_TGTP.generated.h"

class USceneComponent;
class AGameObject;

UCLASS(Blueprintable)
class NIMBUS_API ABomb_TGTP : public ABomb {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator PointAdjustment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeaponImpactRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VeryEasy_WeaponImpactRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeaponExplosionRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VeryEasy_WeaponExplosionRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Damage_TGTP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetrRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPipperFixed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PipperFixedRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPipperHeightOuterCircumference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PipperHeightIgnoredDifference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETGTP_ParticleSpawnType ParticleSpawnType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ParticleSpawnHeightIgnoredDifference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OuterCircumferenceCheckCnt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETGTP_AttackResult AttackResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* FallingPointSceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGameObject* MyTarget;
    
public:
    ABomb_TGTP();
    UFUNCTION(BlueprintCallable)
    void ReacquireLocationRotation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetTGTP_DropLocation();
    
    UFUNCTION(BlueprintCallable)
    ETGTP_AttackResult GetAttackResult();
    
};

