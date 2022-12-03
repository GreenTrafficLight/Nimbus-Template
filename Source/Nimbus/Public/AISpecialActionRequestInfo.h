#pragma once
#include "CoreMinimal.h"
#include "EAIPlaneSpecialActionTrigger.h"
#include "AISpecialActionRequestInfo.generated.h"

class UBehaviorTree;
class AGameObject;

USTRUCT(BlueprintType)
struct FAISpecialActionRequestInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* SpecialActionBT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIPlaneSpecialActionTrigger Trigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGameObject* SpecifiedObject;
    
    NIMBUS_API FAISpecialActionRequestInfo();
};

