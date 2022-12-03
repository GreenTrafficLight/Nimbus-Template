#pragma once
#include "CoreMinimal.h"
#include "Components/TextBlock.h"
#include "CustomizedTextInfo.h"
#include "AnimatedText.h"
#include "TextBlockCustomized.generated.h"

UCLASS(Blueprintable)
class NIMBUS_API UTextBlockCustomized : public UTextBlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCustomizedTextInfo> CustomizedTextInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimatedText AnimatedTextInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableForceShowAllText;
    
    UTextBlockCustomized();
};

