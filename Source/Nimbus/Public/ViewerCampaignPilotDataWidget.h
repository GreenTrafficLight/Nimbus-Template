#pragma once
#include "CoreMinimal.h"
#include "ViewerBasePilotDataWidget.h"
#include "ViewerCampaignPilotDataWidget.generated.h"

class UPlayerDataProfile;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UViewerCampaignPilotDataWidget : public UViewerBasePilotDataWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPlayerDataProfile*> AllProfileData;
    
public:
    UViewerCampaignPilotDataWidget();
};

