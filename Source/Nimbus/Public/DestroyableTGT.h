#pragma once
#include "CoreMinimal.h"
#include "AIGroundVehicle.h"
#include "DestroyableTGT.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class NIMBUS_API ADestroyableTGT : public AAIGroundVehicle {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
public:
    ADestroyableTGT();
    UFUNCTION(BlueprintCallable)
    void ActivateTGT(bool bActive);
    
};

