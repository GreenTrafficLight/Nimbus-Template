#pragma once
#include "CoreMinimal.h"
#include "ImageHidingItem.generated.h"

class UImage;
class UOverlay;
class UHorizontalBox;

USTRUCT(BlueprintType)
struct FImageHidingItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* OriginalImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* OverlayImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHorizontalBox* HorizontalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UOverlay* Overlay;
    
    NIMBUS_API FImageHidingItem();
};

