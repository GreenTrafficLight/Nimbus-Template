#pragma once
#include "CoreMinimal.h"
#include "NimbusMapChangeRequestInfo.generated.h"

class UMapChangeTransitionDelayObject;

USTRUCT(BlueprintType)
struct FNimbusMapChangeRequestInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMapChangeTransitionDelayObject* TransitionDelay;
    
    NIMBUS_API FNimbusMapChangeRequestInfo();
};

