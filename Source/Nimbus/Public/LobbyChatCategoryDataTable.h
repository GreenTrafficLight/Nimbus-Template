#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ELobbyChatCategory.h"
#include "LobbyChatCategoryDataTable.generated.h"

USTRUCT(BlueprintType)
struct FLobbyChatCategoryDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELobbyChatCategory Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LocalizationKey;
    
    NIMBUS_API FLobbyChatCategoryDataTable();
};

