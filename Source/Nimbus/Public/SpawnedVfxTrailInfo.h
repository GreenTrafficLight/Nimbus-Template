#pragma once
#include "CoreMinimal.h"
#include "SpawnedVfxTrailInfo.generated.h"

class UParticleSystemComponent;

USTRUCT(BlueprintType)
struct FSpawnedVfxTrailInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* Vfx;
    
    NIMBUS_API FSpawnedVfxTrailInfo();
};

