#pragma once
#include "CoreMinimal.h"
#include "ViewerSortieDataBase.h"
#include "ViewerSortieDataMulti.generated.h"

USTRUCT(BlueprintType)
struct FViewerSortieDataMulti {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FViewerSortieDataBase SortieBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BRTotal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TDMTotal;
    
    NIMBUS_API FViewerSortieDataMulti();
};

