#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTCompositeNode.h"
#include "BTComposite_LaxSequence.generated.h"

UCLASS(Blueprintable)
class NIMBUS_API UBTComposite_LaxSequence : public UBTCompositeNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInverseChildResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceContinue;
    
    UBTComposite_LaxSequence();
};

