#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTCompositeNode.h"
#include "BTComposite_RandomSelect.generated.h"

UCLASS(Blueprintable)
class NIMBUS_API UBTComposite_RandomSelect : public UBTCompositeNode {
    GENERATED_BODY()
public:
    UBTComposite_RandomSelect();
};

