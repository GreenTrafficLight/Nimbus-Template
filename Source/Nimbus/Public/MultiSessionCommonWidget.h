#pragma once
#include "CoreMinimal.h"
#include "UIBaseWidget.h"
#include "DialogData.h"
#include "MultiSessionCommonWidget.generated.h"

class UMultiDetailedPlayerListWidget;
class UMultiSimpleVoiceChatWidget;
class UMaterialInstance;
class UPopUpWidget;
class UTextBlock;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UMultiSessionCommonWidget : public UUIBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstance*> VoiceChatImages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinVCLightUpTime;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HostMigrationDialogAdditionalDisplayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPopUpWidget* HostMigrationPopup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* HostMigrationCountdown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* HostMigrationCountdownAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMultiSimpleVoiceChatWidget* SimpleVoiceChatPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMultiDetailedPlayerListWidget* MultiDetailedPlayerListWidget;
    
public:
    UMultiSessionCommonWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void OnDialogItemAccepted(const FDialogData& DialogData);
    
};

