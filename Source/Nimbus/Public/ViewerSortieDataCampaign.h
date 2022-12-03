#pragma once
#include "CoreMinimal.h"
#include "ViewerSortieDataBase.h"
#include "ViewerSortieDataCampaign.generated.h"

USTRUCT(BlueprintType)
struct FViewerSortieDataCampaign {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FViewerSortieDataBase SortieBase;
    
    NIMBUS_API FViewerSortieDataCampaign();
};

