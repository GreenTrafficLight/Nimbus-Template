#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EquippedWeaponConfig.h"
#include "WeaponManager.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class NIMBUS_API UWeaponManager : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FEquippedWeaponConfig> EquippedWeapons;
    
public:
    UWeaponManager();
};

