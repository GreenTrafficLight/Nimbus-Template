#pragma once
#include "CoreMinimal.h"
#include "NimbusMapChangeTransitionCache.generated.h"

class UNimbusCachedWorldContainer;

USTRUCT(BlueprintType)
struct FNimbusMapChangeTransitionCache {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNimbusCachedWorldContainer* MainWorldContainer;
    
    NIMBUS_API FNimbusMapChangeTransitionCache();
};

