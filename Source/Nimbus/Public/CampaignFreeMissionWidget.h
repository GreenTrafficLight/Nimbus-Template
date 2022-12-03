#pragma once
#include "CoreMinimal.h"
#include "MenuBaseWidget.h"
#include "FreeMissionSelectInfo.h"
#include "CampaignFreeMissionWidget.generated.h"

class UFreeMissionSelectInfoDataAsset;
class UTexture2D;
class UUserWidget;
class UTextBlock;
class UCanvasPanel;
class UImage;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UCampaignFreeMissionWidget : public UMenuBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFreeMissionSelectInfoDataAsset* SelectInfoData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUserWidget* UmgPlayGoWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, UTextBlock*> UmgTextBlocks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCanvasPanel* UmgMapPanel;
    
    UPROPERTY(EditAnywhere, Transient)
    FFreeMissionSelectInfo MissionInfo[20];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* UmgMapCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCanvasPanel* UmgLineCanvas;
    
    UPROPERTY(EditAnywhere, Instanced, Transient)
    UImage* UmgLineL[3];
    
    UPROPERTY(EditAnywhere, Instanced, Transient)
    UImage* UmgLineR[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* UmgThumbnailImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* UmgThumbnailImageTranstion;
    
    UPROPERTY(EditAnywhere, Transient)
    UTexture2D* ThumbnailTexture[20];
    
public:
    UCampaignFreeMissionWidget();
};

