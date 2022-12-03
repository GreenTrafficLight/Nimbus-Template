#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ELobbyChatCategory.h"
#include "LobbyChatDataTable.generated.h"

USTRUCT(BlueprintType)
struct FLobbyChatDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LocalizationKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELobbyChatCategory Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnableForSteam;
    
    NIMBUS_API FLobbyChatDataTable();
};

