#pragma once
#include "CoreMinimal.h"
#include "ImageHidingItem.h"
#include "ImageHidingGroup.generated.h"

USTRUCT(BlueprintType)
struct FImageHidingGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FImageHidingItem> Items;
    
    NIMBUS_API FImageHidingGroup();
};

