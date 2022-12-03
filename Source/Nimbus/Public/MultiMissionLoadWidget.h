#pragma once
#include "CoreMinimal.h"
#include "MenuBaseWidget.h"
#include "MultiMissionLoadWidget.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UMultiMissionLoadWidget : public UMenuBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* TipsAnimation;
    
public:
    UMultiMissionLoadWidget();
};

