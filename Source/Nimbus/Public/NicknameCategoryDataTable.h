#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ENicknameCategory.h"
#include "NicknameCategoryDataTable.generated.h"

USTRUCT(BlueprintType)
struct FNicknameCategoryDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENicknameCategory Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LocalizationKey;
    
    NIMBUS_API FNicknameCategoryDataTable();
};

