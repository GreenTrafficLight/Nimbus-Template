#pragma once
#include "CoreMinimal.h"
#include "MenuBaseWidget.h"
#include "ExtraMissionSelectInfo.h"
#include "CampaignExtraMissionWidget.generated.h"

class UExtraMissionSelectInfoDataAsset;
class UTextBlock;
class UCanvasPanel;
class UImage;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UCampaignExtraMissionWidget : public UMenuBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UExtraMissionSelectInfoDataAsset* SelectInfoData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, UTextBlock*> UmgTextBlocks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCanvasPanel* UmgMapPanel;
    
    UPROPERTY(EditAnywhere, Transient)
    FExtraMissionSelectInfo MissionInfo[3];
    
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
    UTexture2D* ThumbnailTexture[3];
    
public:
    UCampaignExtraMissionWidget();
};

