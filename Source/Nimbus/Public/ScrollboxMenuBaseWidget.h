#pragma once
#include "CoreMinimal.h"
#include "MenuBaseWidget.h"
#include "ScrollboxMenuBaseWidget.generated.h"

class UCanvasPanel;
class UImage;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UScrollboxMenuBaseWidget : public UMenuBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IncrFocusableItemStep;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCanvasPanel* UmgScrollBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* UmgScrollBarImage;
    
public:
    UScrollboxMenuBaseWidget();
};

