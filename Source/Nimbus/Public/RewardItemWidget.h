#pragma once
#include "CoreMinimal.h"
#include "ScrollboxMenuBaseWidget.h"
#include "RewardItemWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API URewardItemWidget : public UScrollboxMenuBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinTimeLeftToShowNextButtonSeconds;
    
public:
    URewardItemWidget();
};

