#pragma once
#include "CoreMinimal.h"
#include "NimbusUserWidget.h"
#include "UObject/NoExportTypes.h"
#include "PitchMeterWidget.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UPitchMeterWidget : public UNimbusUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PitchMeterAngleInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* PitchMeterPositiveTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* PitchMeterHalfPositiveTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* PitchMeterNegativeTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* PitchMeterHalfNegativeTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* PitchMeterNeutralTexture;
    
public:
    UPitchMeterWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CurrentHUDAlertColorUpdated(const FLinearColor& NewColor, bool bIsDefaultColor);
    
};

