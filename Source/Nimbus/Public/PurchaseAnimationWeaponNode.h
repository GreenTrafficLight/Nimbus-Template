#pragma once
#include "CoreMinimal.h"
#include "PurchaseAnimationNodeBase.h"
#include "PurchaseAnimationWeaponNode.generated.h"

class UAircraftTreeWeaponNode;

UCLASS(Blueprintable)
class NIMBUS_API UPurchaseAnimationWeaponNode : public UPurchaseAnimationNodeBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAircraftTreeWeaponNode* Node;
    
public:
    UPurchaseAnimationWeaponNode();
};

