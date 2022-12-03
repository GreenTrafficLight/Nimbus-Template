#pragma once
#include "CoreMinimal.h"
#include "HangarInfoBase.h"
#include "HangarWeaponProperties.generated.h"

class UTextBlock;
class UWeaponConceptWidget;

UCLASS(Blueprintable)
class UHangarWeaponProperties : public UHangarInfoBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* WeaponConceptLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWeaponConceptWidget* WeaponConcept;
    
public:
    UHangarWeaponProperties();
};

