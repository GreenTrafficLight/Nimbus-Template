#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MultiplayerEvaluationModifierDataTable.generated.h"

USTRUCT(BlueprintType)
struct FMultiplayerEvaluationModifierDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Modifier;
    
    NIMBUS_API FMultiplayerEvaluationModifierDataTable();
};

