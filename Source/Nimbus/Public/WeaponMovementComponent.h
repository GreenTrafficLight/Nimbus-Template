#pragma once
#include "CoreMinimal.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "WeaponMovementComponent.generated.h"

class AActor;
class AGameObject;
class USceneComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class NIMBUS_API UWeaponMovementComponent : public UProjectileMovementComponent {
    GENERATED_BODY()
public:

	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnMovementHomingMiss);
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnMovementImpactDelegate);

    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMovementHomingMiss OnHomingMiss;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMovementImpactDelegate OnMovementImpact;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AGameObject* HomingTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* OwningActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AGameObject* OwningGameObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* FakeUpdatedComponent;
    
public:
    UWeaponMovementComponent();
};

