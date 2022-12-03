#pragma once
#include "CoreMinimal.h"
#include "PurchaseAnimationNodeBase.h"
#include "PurchaseAnimationItemNode.generated.h"

class UAircraftTreeNode;

UCLASS(Blueprintable)
class NIMBUS_API UPurchaseAnimationItemNode : public UPurchaseAnimationNodeBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAircraftTreeNode* Node;
    
public:
    UPurchaseAnimationItemNode();
};

