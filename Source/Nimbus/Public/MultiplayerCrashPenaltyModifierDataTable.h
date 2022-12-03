#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MultiplayerCrashPenaltyModifierDataTable.generated.h"

USTRUCT(BlueprintType)
struct FMultiplayerCrashPenaltyModifierDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinimumCrashCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrashPenaltyModifier;
    
    NIMBUS_API FMultiplayerCrashPenaltyModifierDataTable();
};

