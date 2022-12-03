#pragma once
#include "CoreMinimal.h"
#include "HugePilotDataInstance.h"
#include "ViewerGridMenuBaseWidget.h"
#include "PilotDataViewerParameter.h"
#include "ViewerBasePilotDataWidget.generated.h"

class UImage;
class UMaterialInterface;
class UPilotDataWidget;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UViewerBasePilotDataWidget : public UViewerGridMenuBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* PilotDataMaterialRef;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHugePilotDataInstance HugePilotData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPilotDataWidget*> ThumbnailPilotData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UImage*> AircraftIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UImage*> AircraftGrayed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UImage*> AircraftFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPilotDataViewerParameter> PilotDataViewerParameters;
    
public:
    UViewerBasePilotDataWidget();
};

