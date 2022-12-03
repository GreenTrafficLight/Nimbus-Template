#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DLCDataTable.generated.h"

USTRUCT(BlueprintType)
struct FDLCDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PS4Entitlement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SteamDLCAppID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString XBoxOneProductID;
    
    NIMBUS_API FDLCDataTable();
};

