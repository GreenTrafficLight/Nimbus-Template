#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MultiplayerRankingPlayerNumberModifierDataTable.generated.h"

USTRUCT(BlueprintType)
struct FMultiplayerRankingPlayerNumberModifierDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinimumNumberOfPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerNumberModifier;
    
    NIMBUS_API FMultiplayerRankingPlayerNumberModifierDataTable();
};

