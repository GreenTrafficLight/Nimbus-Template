#pragma once
#include "CoreMinimal.h"
#include "VRMenuBaseWidget.h"
#include "VRMainTitleWidget.generated.h"

class UTextBlock;
class UBorder;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UVRMainTitleWidget : public UVRMenuBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FreeFlightFadeOutSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AirShowFadeOutSeconds;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* UmgTitleTextVR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UBorder*> UmgBorderNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UBorder*> UmgBorderSelected;
    
public:
    UVRMainTitleWidget();
};

