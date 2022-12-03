#pragma once
#include "CoreMinimal.h"
#include "ViewerGridMenuBaseWidget.h"
#include "HugeMedalInstance.h"
#include "MedalViewerParameter.h"
#include "ViewerBaseMedalWidget.generated.h"

class UImage;
class UMedalWidget;
class UMaterialInterface;
class UPanelWidget;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UViewerBaseMedalWidget : public UViewerGridMenuBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* MedalMaterialRef;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHugeMedalInstance HugeMedal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMedalWidget*> ThumbnailMedals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMedalViewerParameter> MedalViewerParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPanelWidget* CampaignIconPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPanelWidget* MultiIconPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPanelWidget* VRIconPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UImage*> MedalIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UImage*> MedalGray;
    
public:
    UViewerBaseMedalWidget();
};

