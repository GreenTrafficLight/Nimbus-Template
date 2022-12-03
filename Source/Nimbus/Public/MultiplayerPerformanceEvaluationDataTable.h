#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EMedalTitle.h"
#include "MultiplayerPerformanceEvaluationDataTable.generated.h"

USTRUCT(BlueprintType)
struct FMultiplayerPerformanceEvaluationDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMedalTitle MedalTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MedalTitleLocalizationID;
    
    NIMBUS_API FMultiplayerPerformanceEvaluationDataTable();
};

