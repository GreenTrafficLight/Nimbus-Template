#pragma once
#include "CoreMinimal.h"
#include "ViewerSortieDataParameter.h"
#include "ViewerSortieDataBase.generated.h"

USTRUCT(BlueprintType)
struct FViewerSortieDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalSortie;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FViewerSortieDataParameter> SortieData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FViewerSortieDataParameter> SortieDataDLC;
    
    NIMBUS_API FViewerSortieDataBase();
};

