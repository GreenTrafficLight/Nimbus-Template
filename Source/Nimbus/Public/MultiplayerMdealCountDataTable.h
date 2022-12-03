#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MultiplayerMdealCountDataTable.generated.h"

USTRUCT(BlueprintType)
struct FMultiplayerMdealCountDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaximumMedal;
    
    NIMBUS_API FMultiplayerMdealCountDataTable();
};

