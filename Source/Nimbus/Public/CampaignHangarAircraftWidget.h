#pragma once
#include "CoreMinimal.h"
#include "CommonHangarAircraftWidget.h"
#include "CampaignHangarAircraftWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UCampaignHangarAircraftWidget : public UCommonHangarAircraftWidget {
    GENERATED_BODY()
public:
    UCampaignHangarAircraftWidget();
};

