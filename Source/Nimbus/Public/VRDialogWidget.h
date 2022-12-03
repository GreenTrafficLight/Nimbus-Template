#pragma once
#include "CoreMinimal.h"
#include "DialogWidget.h"
#include "VRDialogWidget.generated.h"

class UTextBlock;
class UUserWidget;
class UCanvasPanel;
class UBorder;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UVRDialogWidget : public UDialogWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UTextBlock*> UmgItemText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* UmgDescriptionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* UmgLoadIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* UmgSaveIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* DialogPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UBorder*> UmgBorderNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UBorder*> UmgBorderSelected;
    
public:
    UVRDialogWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayFrameOutAnimBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayFrameInAnimBP();
    
    UFUNCTION(BlueprintCallable)
    void OnFrameOutAnimationEndBP();
    
};

