#pragma once
#include "CoreMinimal.h"
#include "NimbusMapChangeLongevityCache.generated.h"

class UNimbusBundleDataAsset;

USTRUCT(BlueprintType)
struct FNimbusMapChangeLongevityCache {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UNimbusBundleDataAsset*> HangarPlayerTextures;
    
    NIMBUS_API FNimbusMapChangeLongevityCache();
};

