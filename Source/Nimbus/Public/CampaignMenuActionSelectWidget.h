#pragma once
#include "CoreMinimal.h"
#include "MenuBaseWidget.h"
#include "CampaignMenuActionSelectWidget.generated.h"

class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UCampaignMenuActionSelectWidget : public UMenuBaseWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUserWidget* UmgLoadIcon;
    
public:
    UCampaignMenuActionSelectWidget();
};

