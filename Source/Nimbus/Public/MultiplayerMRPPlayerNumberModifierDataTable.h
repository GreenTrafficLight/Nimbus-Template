#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MultiplayerMRPPlayerNumberModifierDataTable.generated.h"

USTRUCT(BlueprintType)
struct FMultiplayerMRPPlayerNumberModifierDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinimumNumberOfPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MRPModifier;
    
    NIMBUS_API FMultiplayerMRPPlayerNumberModifierDataTable();
};

