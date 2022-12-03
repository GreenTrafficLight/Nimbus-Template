#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BTTask_ActivateFlares.generated.h"

UCLASS(Blueprintable)
class NIMBUS_API UBTTask_ActivateFlares : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReactToPlayerOnly;
    
public:
    UBTTask_ActivateFlares();
};

