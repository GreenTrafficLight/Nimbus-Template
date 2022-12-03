#pragma once
#include "CoreMinimal.h"
#include "ELanguages.h"
#include "Fonts/SlateFontInfo.h"
#include "CustomizedTextInfo.generated.h"

USTRUCT(BlueprintType)
struct FCustomizedTextInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELanguages Language;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateFontInfo FontInfo;
    
    NIMBUS_API FCustomizedTextInfo();
};

