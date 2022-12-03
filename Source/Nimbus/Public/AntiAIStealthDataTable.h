#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AntiAIStealthDataTable.generated.h"

USTRUCT(BlueprintType)
struct FAntiAIStealthDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 StealthLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartFiringDistancePercent;
    
    NIMBUS_API FAntiAIStealthDataTable();
};

