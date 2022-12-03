#pragma once
#include "CoreMinimal.h"
#include "UIBaseWidget.h"
#include "VRMenuForegroundWidget.generated.h"

class UWidgetAnimation;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UVRMenuForegroundWidget : public UUIBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* UmgStartAnimation;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* LockedIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* UnlockedIcon;
    
public:
    UVRMenuForegroundWidget();
};

