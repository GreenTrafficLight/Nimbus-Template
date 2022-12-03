#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PurchaseAnimationNodeBase.generated.h"

class UCommonAircraftTreeWidget;

UCLASS(Blueprintable)
class NIMBUS_API UPurchaseAnimationNodeBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCommonAircraftTreeWidget* Menu;
    
public:
    UPurchaseAnimationNodeBase();
};

