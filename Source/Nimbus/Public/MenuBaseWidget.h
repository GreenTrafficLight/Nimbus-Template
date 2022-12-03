#pragma once
#include "CoreMinimal.h"
#include "UIBaseWidget.h"
#include "MenuBaseWidgetUmgItem.h"
#include "MenuBaseWidgetTabItem.h"
#include "MenuBaseWidgetItem.h"
#include "DialogData.h"
#include "MenuBaseWidget.generated.h"

class UUIScrollBarWidget;
class UUserWidget;
class ALobbyGameMode;
class UTextBlock;
class UImage;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UMenuBaseWidget : public UUIBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUIScrollBarWidget* UmgUIScrollBar;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ALobbyGameMode* LobbyGameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUserWidget* UmgBaseWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* UmgTitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* UmgDescriptionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* UmgButtonText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* UmgTabText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* UmgTabIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMenuBaseWidgetItem> ItemList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMenuBaseWidgetTabItem> TabList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMenuBaseWidgetUmgItem> UmgList;
    
public:
    UMenuBaseWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void SimpleDialogInputResult(const FDialogData& DialogData);
    
    UFUNCTION(BlueprintCallable)
    void SetIsEnableControl(bool bEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUnfocusedBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFocusedBP();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableControl() const;
    
};

