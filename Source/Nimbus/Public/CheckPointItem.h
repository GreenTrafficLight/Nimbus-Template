#pragma once
#include "CoreMinimal.h"
#include "CheckPointItem.generated.h"

USTRUCT(BlueprintType)
struct FCheckPointItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    uint64 FakePointer;
    
public:
    NIMBUS_API FCheckPointItem();
};

