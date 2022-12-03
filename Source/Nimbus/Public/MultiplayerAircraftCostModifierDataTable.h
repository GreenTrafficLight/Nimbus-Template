#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MultiplayerAircraftCostModifierDataTable.generated.h"

USTRUCT(BlueprintType)
struct FMultiplayerAircraftCostModifierDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinimumAircraftCostDifference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CostDifferenceModifier;
    
    NIMBUS_API FMultiplayerAircraftCostModifierDataTable();
};

