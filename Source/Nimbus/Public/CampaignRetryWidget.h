#pragma once
#include "CoreMinimal.h"
#include "MissionBaseWidget.h"
#include "CampaignRetryWidget.generated.h"

class ANimbusHUD;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UCampaignRetryWidget : public UMissionBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ANimbusHUD* HUD;
    
public:
    UCampaignRetryWidget();
};

