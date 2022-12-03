#pragma once
#include "CoreMinimal.h"
#include "CommonHangarBaseMenuWidget.h"
#include "CommonHangarWeaponWidget.generated.h"

class UHangarStatus;
class UWeaponConceptWidget;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UCommonHangarWeaponWidget : public UCommonHangarBaseMenuWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHangarStatus* HangarStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWeaponConceptWidget* WeaponConcept;
    
public:
    UCommonHangarWeaponWidget();
};

