#pragma once
#include "CoreMinimal.h"
#include "EDialogType.h"
#include "UIBaseWidget.h"
#include "UIFrontWindowWidget.generated.h"

class UDialogWidget;
class UCanvasPanel;
class UGuideWidget;
class UUserWidget;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UUIFrontWindowWidget : public UUIBaseWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCanvasPanel* WindowRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TMap<EDialogType, UDialogWidget*> DialogWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UGuideWidget* GuideWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUserWidget* UmgLoadIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUserWidget* UmgSaveIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* UmgButtonText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UDialogWidget* CurrentDialog;
    
public:
    UUIFrontWindowWidget();
};

