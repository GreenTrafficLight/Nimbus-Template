#pragma once
#include "CoreMinimal.h"
#include "HangarInfoBase.h"
#include "HangarPartsInfoGauge.generated.h"

class UUserWidget;
class UImage;

UCLASS(Blueprintable)
class UHangarPartsInfoGauge : public UHangarInfoBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUserWidget* AircraftWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UImage*> PartsGaugeBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UImage*> PartsGaugeArms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UImage*> PartsGaugeMisc;
    
public:
    UHangarPartsInfoGauge();
};

