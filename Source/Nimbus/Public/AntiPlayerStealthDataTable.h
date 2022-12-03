#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AntiPlayerStealthDataTable.generated.h"

USTRUCT(BlueprintType)
struct FAntiPlayerStealthDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 StealthLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceToStartDisplaying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceToFullyDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BackBlindHalfAngleInDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BackBlindMinDistance;
    
    NIMBUS_API FAntiPlayerStealthDataTable();
};

