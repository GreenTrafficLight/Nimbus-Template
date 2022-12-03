#pragma once
#include "CoreMinimal.h"
#include "EDialogIDs.h"
#include "EDialogType.h"
#include "EDialogResults.h"
#include "DialogData.generated.h"

USTRUCT(BlueprintType)
struct FDialogData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDialogIDs ID;
    
    UPROPERTY(EditAnywhere)
    uint32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDialogType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Arguments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDialogResults Result;
    
    NIMBUS_API FDialogData();
};

