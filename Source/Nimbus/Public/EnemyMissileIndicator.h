#pragma once
#include "CoreMinimal.h"
#include "EnemyMissileIndicator.generated.h"

class UStaticMeshComponent;

USTRUCT(BlueprintType)
struct FEnemyMissileIndicator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeLeftToVisibilityToggle;
    
    NIMBUS_API FEnemyMissileIndicator();
};

