#pragma once
#include "CoreMinimal.h"
#include "NimbusTextureManagerBundleAssetInfo.generated.h"

class UNimbusBundleDataAsset;

USTRUCT(BlueprintType)
struct FNimbusTextureManagerBundleAssetInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNimbusBundleDataAsset* Asset;
    
    NIMBUS_API FNimbusTextureManagerBundleAssetInfo();
};

