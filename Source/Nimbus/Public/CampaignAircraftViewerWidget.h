#pragma once
#include "CoreMinimal.h"
#include "MenuBaseWidget.h"
#include "CampaignAircraftViewerWidget.generated.h"

class ANimbusHangarMeshManager;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UCampaignAircraftViewerWidget : public UMenuBaseWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ANimbusHangarMeshManager* HangarManager;
    
public:
    UCampaignAircraftViewerWidget();
};

