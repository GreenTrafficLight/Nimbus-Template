#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ERadioSpeakerColor.h"
#include "RadioSpeakerTable.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FRadioSpeakerTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* ComWindowImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERadioSpeakerColor Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CallsignID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SilentGroupFlags;
    
    NIMBUS_API FRadioSpeakerTable();
};

