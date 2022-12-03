#pragma once
#include "CoreMinimal.h"
#include "DialogWidget.h"
#include "NormalDialogWidget.generated.h"

class UImage;
class UTextBlock;
class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UNormalDialogWidget : public UDialogWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* UmgBackgroundImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* UmgDescriptionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UTextBlock*> UmgItemTextOrg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UTextBlock*> UmgItemText;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* UmgNetworkIcon;
    
public:
    UNormalDialogWidget();
};

