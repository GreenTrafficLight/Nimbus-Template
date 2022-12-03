#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RadioAutomaticSpeakerIDTable.generated.h"

USTRUCT(BlueprintType)
struct FRadioAutomaticSpeakerIDTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AutoSpeakerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TargetSpeakerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGeneral;
    
    NIMBUS_API FRadioAutomaticSpeakerIDTable();
};

