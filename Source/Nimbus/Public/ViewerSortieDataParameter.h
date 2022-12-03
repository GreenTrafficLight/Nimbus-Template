#pragma once
#include "CoreMinimal.h"
#include "EMissionRule.h"
#include "ViewerSortieDataParameter.generated.h"

USTRUCT(BlueprintType)
struct FViewerSortieDataParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MissionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StageNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Sortie;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMissionRule Rule;
    
    NIMBUS_API FViewerSortieDataParameter();
};

