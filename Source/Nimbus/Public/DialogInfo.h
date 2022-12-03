#pragma once
#include "CoreMinimal.h"
#include "DialogData.h"
#include "DialogInfo.generated.h"

USTRUCT(BlueprintType)
struct FDialogInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDialogData DialogData;
    
    NIMBUS_API FDialogInfo();
};

