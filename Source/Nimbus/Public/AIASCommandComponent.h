#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AIComponentBase.h"
#include "AIASCommandComponent.generated.h"

class AGameObject;
class ARectennaBarrier;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class NIMBUS_API UAIASCommandComponent : public UAIComponentBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStopBarrier, AGameObject*, Owner);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnActivateBarrier, AGameObject*, Owner);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActivateBarrier OnActivateBarrier;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStopBarrier OnStopBarrier;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ARectennaBarrier>> SpawnRectennaBarrierWeaponClassList;
    
    UPROPERTY(EditAnywhere)
    TArray<TWeakObjectPtr<ARectennaBarrier>> SpawnBarrierList;
    
public:
    UAIASCommandComponent();
    UFUNCTION(BlueprintCallable)
    void StopBarrier();
    
    UFUNCTION(BlueprintCallable)
    void OnReleaseBarrierWeapon();
    
    UFUNCTION(BlueprintCallable)
    void ActivateBarrier(int32 InNumber);
    
};

