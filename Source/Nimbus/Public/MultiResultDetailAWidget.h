#pragma once
#include "CoreMinimal.h"
#include "MultiMissionMenuBaseWidget.h"
#include "MultiResultDetailAWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UMultiResultDetailAWidget : public UMultiMissionMenuBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowAllPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InactivePeriodAfterAnimationCompletion;
    
public:
    UMultiResultDetailAWidget();
};

