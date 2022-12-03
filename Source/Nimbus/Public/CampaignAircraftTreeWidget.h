#pragma once
#include "CoreMinimal.h"
#include "CommonAircraftTreeWidget.h"
#include "CampaignAircraftTreeWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UCampaignAircraftTreeWidget : public UCommonAircraftTreeWidget {
    GENERATED_BODY()
public:
    UCampaignAircraftTreeWidget();
};

