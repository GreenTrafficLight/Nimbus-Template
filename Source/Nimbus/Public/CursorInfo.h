#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CursorInfo.generated.h"

USTRUCT(BlueprintType)
struct FCursorInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CursorMoveDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Offset;
    
    NIMBUS_API FCursorInfo();
};

