#pragma once
#include "CoreMinimal.h"
#include "UIBaseWidget.h"
#include "RewardScrollboxBaseWidget.generated.h"

class UUIScrollBarWidget;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API URewardScrollboxBaseWidget : public UUIBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IncrFocusableItemStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUIScrollBarWidget* UmgUIScrollBar;
    
public:
    URewardScrollboxBaseWidget();
};

