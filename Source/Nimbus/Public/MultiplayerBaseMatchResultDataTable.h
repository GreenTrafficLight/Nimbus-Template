#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MultiplayerBaseMatchResultDataTable.generated.h"

USTRUCT(BlueprintType)
struct FMultiplayerBaseMatchResultDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ScoreArray;
    
    NIMBUS_API FMultiplayerBaseMatchResultDataTable();
};

