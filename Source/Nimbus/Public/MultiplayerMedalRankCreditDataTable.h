#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EMedalRank.h"
#include "MultiplayerMedalRankCreditDataTable.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FMultiplayerMedalRankCreditDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMedalRank MedalRank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* MedalTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OnlineCredit;
    
    NIMBUS_API FMultiplayerMedalRankCreditDataTable();
};

