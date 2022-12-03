#pragma once
#include "CoreMinimal.h"
#include "MenuBaseWidget.h"
#include "UnlockMenuBaseWidget.generated.h"

class URewardScrollboxMedalWidget;
class UTextBlock;
class URewardScrollboxItemWidget;
class UCanvasPanel;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UUnlockMenuBaseWidget : public UMenuBaseWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URewardScrollboxMedalWidget* ScrollboxMedalWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URewardScrollboxItemWidget* ScrollboxItemWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* FeatureTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCanvasPanel* FeaturePanelWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* TitleTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* ButtonTextWidget;
    
public:
    UUnlockMenuBaseWidget();
};

