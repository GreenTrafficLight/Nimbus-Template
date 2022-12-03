#pragma once
#include "CoreMinimal.h"
#include "VRMenuBaseWidget.h"
#include "VRReviewWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UVRReviewWidget : public UVRMenuBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeOutSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KeepingBlackSeconds;
    
    UVRReviewWidget();
};

