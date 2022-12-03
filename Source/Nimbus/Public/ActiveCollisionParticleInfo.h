#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ActiveCollisionParticleInfo.generated.h"

class UParticleSystemComponent;

USTRUCT(BlueprintType)
struct FActiveCollisionParticleInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector LastImpactPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastImpactElapsedTime;
    
    UPROPERTY(EditAnywhere, Export, Transient)
    TArray<TWeakObjectPtr<UParticleSystemComponent>> ActiveParticles;
    
    NIMBUS_API FActiveCollisionParticleInfo();
};

