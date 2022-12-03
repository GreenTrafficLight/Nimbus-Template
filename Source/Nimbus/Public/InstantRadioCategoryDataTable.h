#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EInstantRadioCategory.h"
#include "InstantRadioCategoryDataTable.generated.h"

USTRUCT(BlueprintType)
struct FInstantRadioCategoryDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInstantRadioCategory Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LocalizationKey;
    
    NIMBUS_API FInstantRadioCategoryDataTable();
};

