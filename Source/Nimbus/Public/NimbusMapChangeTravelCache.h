#pragma once
#include "CoreMinimal.h"
#include "NimbusMapChangeTravelCache.generated.h"

class UObject;
class UNimbusCachedWorldContainer;

USTRUCT(BlueprintType)
struct FNimbusMapChangeTravelCache {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNimbusCachedWorldContainer* MainWorldContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNimbusCachedWorldContainer* SubWorldContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UClass* PlayerPlaneClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> PreloadAssets;
    
    NIMBUS_API FNimbusMapChangeTravelCache();
};

