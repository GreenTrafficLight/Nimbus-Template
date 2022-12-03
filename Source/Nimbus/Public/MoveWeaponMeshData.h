#pragma once
#include "CoreMinimal.h"
#include "MoveWeaponMeshData.generated.h"

class UMeshComponent;

USTRUCT(BlueprintType)
struct FMoveWeaponMeshData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMeshComponent* MeshComponent;
    
    NIMBUS_API FMoveWeaponMeshData();
};

