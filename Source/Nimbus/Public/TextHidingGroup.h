#pragma once
#include "CoreMinimal.h"
#include "TextHidingItem.h"
#include "TextHidingGroup.generated.h"

USTRUCT(BlueprintType)
struct FTextHidingGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTextHidingItem> Items;
    
    NIMBUS_API FTextHidingGroup();
};

