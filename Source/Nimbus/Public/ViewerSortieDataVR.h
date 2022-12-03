#pragma once
#include "CoreMinimal.h"
#include "ViewerSortieDataBase.h"
#include "ViewerSortieDataVR.generated.h"

USTRUCT(BlueprintType)
struct FViewerSortieDataVR {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FViewerSortieDataBase SortieBase;
    
    NIMBUS_API FViewerSortieDataVR();
};

