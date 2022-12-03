#pragma once
#include "CoreMinimal.h"
#include "AIASChildDelayDestructInfo.generated.h"

class AAIGameObject;

USTRUCT(BlueprintType)
struct FAIASChildDelayDestructInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ChildActorComponentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Delay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAIGameObject* ChildObject;
    
    NIMBUS_API FAIASChildDelayDestructInfo();
};

