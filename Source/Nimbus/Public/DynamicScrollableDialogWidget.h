#pragma once
#include "CoreMinimal.h"
#include "ScrollableDialogWidgetBase.h"
#include "DynamicScrollableDialogWidget.generated.h"

class UVerticalBox;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UDynamicScrollableDialogWidget : public UScrollableDialogWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* ParentContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* TemplateTextblock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UTextBlock*> AddedTextblock;
    
public:
    UDynamicScrollableDialogWidget();
};

