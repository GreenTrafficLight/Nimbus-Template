#pragma once
#include "CoreMinimal.h"
#include "MissionBaseWidget.h"
#include "CampaignHudPauseWidget.generated.h"

class ANimbusHUD;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UCampaignHudPauseWidget : public UMissionBaseWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ANimbusHUD* HUD;
    
public:
    UCampaignHudPauseWidget();
};

