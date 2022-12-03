#pragma once
#include "CoreMinimal.h"
#include "CampaignAircraftViewerWidget.h"
#include "MultiplayAircraftViewerWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UMultiplayAircraftViewerWidget : public UCampaignAircraftViewerWidget {
    GENERATED_BODY()
public:
    UMultiplayAircraftViewerWidget();
};

