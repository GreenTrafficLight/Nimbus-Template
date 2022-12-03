#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "LocalizeTextDataTable.generated.h"

USTRUCT(BlueprintType)
struct FLocalizeTextDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Label;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Steam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PS4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString XOne;
    
    NIMBUS_API FLocalizeTextDataTable();
};

