#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CallsignDataTable.generated.h"

USTRUCT(BlueprintType)
struct FCallsignDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Callsign;
    
    NIMBUS_API FCallsignDataTable();
};

