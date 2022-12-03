#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MultiplayerScoreBasePointDataTable.generated.h"

USTRUCT(BlueprintType)
struct FMultiplayerScoreBasePointDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinimumAircraftCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BasePoint;
    
    NIMBUS_API FMultiplayerScoreBasePointDataTable();
};

