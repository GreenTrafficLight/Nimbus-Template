#pragma once
#include "CoreMinimal.h"
#include "NimbusAssetLoaderRequestLoadInfo.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FNimbusAssetLoaderRequestLoadInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> LoadedObjects;
    
    NIMBUS_API FNimbusAssetLoaderRequestLoadInfo();
};

