#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ChildSpawnerComponent.generated.h"

class AExplosiveWeapon;
class UPlayerWeaponActivator;
class AGameObject;
class UWeaponParameters;
class AWeaponBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class NIMBUS_API UChildSpawnerComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AExplosiveWeapon* ExplosiveWeaponOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AGameObject* OwningGameObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWeaponParameters* WeaponParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AWeaponBase*> SpawnedChildren;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPlayerWeaponActivator* WeaponActivator;
    
public:
    UChildSpawnerComponent();
};

