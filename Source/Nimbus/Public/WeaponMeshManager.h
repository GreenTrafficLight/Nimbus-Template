#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WeaponMeshManager.generated.h"

class UStaticMeshComponent;
class USplineComponent;
class AReturnMoveSplineDataActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class NIMBUS_API UWeaponMeshManager : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> MainWeaponMeshCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> Spw0MeshCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> Spw1MeshCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> Spw2MeshCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AReturnMoveSplineDataActor* SplineActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineComponent;
    
public:
    UWeaponMeshManager();
    UFUNCTION(BlueprintCallable)
    void SetAllExtraMeshesMasterVisibility(bool bShowAllMeshes, bool bForceOperation);
    
};

