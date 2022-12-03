#pragma once
#include "CoreMinimal.h"
#include "AIGameObject.h"
#include "AIGroundVehicle.generated.h"

class UParticleSystemComponent;
class USkeletalMeshComponent;
class USubmarineMoveComponent;

UCLASS(Blueprintable)
class NIMBUS_API AAIGroundVehicle : public AAIGameObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLargeShip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKeepOnGround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RootHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxGroundRotateAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Acceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReachDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArriveDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPropeller;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PropellerAnimRateChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float PropellerCurrentAnimRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float PropellerTargetAnimRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* PropellerMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VFXTickMinDistanceUU;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrailVFXTickMinDistanceUU;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GroundCheckMinInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GroundCheckMaxInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USubmarineMoveComponent* SubmarineMoveComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* TrailParticleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShootAppearanceAngle;
    
public:
    AAIGroundVehicle();
    UFUNCTION(BlueprintCallable)
    void SubmarineSurface();
    
    UFUNCTION(BlueprintCallable)
    void SubmarineStartNoseLift();
    
    UFUNCTION(BlueprintCallable)
    void SubmarineRailgunStored();
    
    UFUNCTION(BlueprintCallable)
    void SubmarineRailgunExtract();
    
    UFUNCTION(BlueprintCallable)
    void SubmarineRailgunDown();
    
    UFUNCTION(BlueprintCallable)
    void SubmarineRailgunBroken();
    
    UFUNCTION(BlueprintCallable)
    void SubmarineRailgunAttack();
    
    UFUNCTION(BlueprintCallable)
    void SubmarineForcedUnderWater();
    
    UFUNCTION(BlueprintCallable)
    void SubmarineForcedOnWater();
    
    UFUNCTION(BlueprintCallable)
    void SubmarineEndNoseLift();
    
    UFUNCTION(BlueprintCallable)
    void SubmarineDiving();
    
    UFUNCTION(BlueprintCallable)
    void SetLocationAboveGround();
    
};

