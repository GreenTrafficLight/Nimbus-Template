#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PlaneRadioStateComponent.generated.h"

class ASystemObjectLine;
class AAIPlane;
class AGameObject;
class APlayerPlane;
class ATeamDeathMatchGameMode;
class AWeaponBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class NIMBUS_API UPlaneRadioStateComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASystemObjectLine*> SystemObjectLines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AGameObject* OwingGameObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerPlane* Player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAIPlane* AIPlane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATeamDeathMatchGameMode* TeamDeathMatchGameMode;
    
public:
    UPlaneRadioStateComponent();
    UFUNCTION(BlueprintCallable)
    void Restore();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandlerObjectFireWeapon(const AGameObject* Causer, const AGameObject* WeaponTarget, const AWeaponBase* Weapon, int32 WeaponNumber);
    
};

