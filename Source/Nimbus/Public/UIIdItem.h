#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ENimbusUIId.h"
#include "UIIdItem.generated.h"

class UNimbusUILayer;

USTRUCT(BlueprintType)
struct NIMBUS_API FUIIdItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENimbusUIId ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNimbusUILayer> UIClass;
    
    FUIIdItem();
};

