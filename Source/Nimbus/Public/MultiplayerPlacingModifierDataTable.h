#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MultiplayerPlacingModifierDataTable.generated.h"

USTRUCT(BlueprintType)
struct FMultiplayerPlacingModifierDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> ModifierArray;
    
    NIMBUS_API FMultiplayerPlacingModifierDataTable();
};

