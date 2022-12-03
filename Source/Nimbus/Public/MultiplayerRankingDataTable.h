#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ERankTitle.h"
#include "MultiplayerRankingDataTable.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FMultiplayerRankingDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERankTitle RankTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RankTitleLocalizationID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* RankTextureS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* RankTextureB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartRankingPoint;
    
    NIMBUS_API FMultiplayerRankingDataTable();
};

