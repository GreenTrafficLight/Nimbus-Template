#pragma once
#include "CoreMinimal.h"
#include "AircraftTreeAnimationBase.h"
#include "AircraftTreeAnimationPurchase.generated.h"

class UAircraftTreeNodeBase;
class UPurchaseAnimationNodeBase;

UCLASS(Blueprintable)
class NIMBUS_API UAircraftTreeAnimationPurchase : public UAircraftTreeAnimationBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAircraftTreeNodeBase* Node;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPurchaseAnimationNodeBase* AnimNode;
    
public:
    UAircraftTreeAnimationPurchase();
};

