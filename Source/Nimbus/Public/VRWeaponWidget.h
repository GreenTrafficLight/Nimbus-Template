#pragma once
#include "CoreMinimal.h"
#include "VRMenuBaseWidget.h"
#include "VRWeaponWidget.generated.h"

class UVRSelectorUnit;
class UImage;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UVRWeaponWidget : public UVRMenuBaseWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UImage*> UmgSpecGraphBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVRSelectorUnit* SelectorUnitWidget;
    
public:
    UVRWeaponWidget();
};

