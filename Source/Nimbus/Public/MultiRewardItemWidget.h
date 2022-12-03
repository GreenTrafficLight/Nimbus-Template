#pragma once
#include "CoreMinimal.h"
#include "MultiMissionMenuBaseWidget.h"
#include "MultiRewardItemWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UMultiRewardItemWidget : public UMultiMissionMenuBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinTimeLeftToShowNextButtonSeconds;
    
public:
    UMultiRewardItemWidget();
};

