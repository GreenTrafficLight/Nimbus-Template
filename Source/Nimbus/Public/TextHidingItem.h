#pragma once
#include "CoreMinimal.h"
#include "TextHidingItem.generated.h"

class UTextBlock;
class UImage;
class UOverlay;
class UHorizontalBox;
class UVerticalBox;
class UUserWidget;

USTRUCT(BlueprintType)
struct FTextHidingItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* TextBlock;
    
    UPROPERTY(EditAnywhere, Instanced, Transient)
    UImage* Image[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHorizontalBox* HorizontalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UOverlay* Overlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVerticalBox* MultiLineRootBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUserWidget* RootWidget;
    
    NIMBUS_API FTextHidingItem();
};

