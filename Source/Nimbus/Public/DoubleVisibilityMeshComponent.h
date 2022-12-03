#pragma once
#include "CoreMinimal.h"
#include "DoubleVisibilityMeshComponent.generated.h"

class UMeshComponent;
class USceneComponent;

USTRUCT(BlueprintType)
struct FDoubleVisibilityMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMeshComponent* MeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* AttachedParent;
    
    NIMBUS_API FDoubleVisibilityMeshComponent();
};

