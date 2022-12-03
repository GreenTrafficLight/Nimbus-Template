#pragma once
#include "CoreMinimal.h"
#include "CheckPointItem.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "CheckPointUnit.generated.h"

USTRUCT(BlueprintType)
struct FCheckPointUnit : public FCheckPointItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator Rotation;
    
public:
    NIMBUS_API FCheckPointUnit();
};

