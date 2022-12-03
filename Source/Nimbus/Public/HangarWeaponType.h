#pragma once
#include "CoreMinimal.h"
#include "HangarInfoBase.h"
#include "HangarWeaponType.generated.h"

class UTextBlock;

UCLASS(Blueprintable)
class UHangarWeaponType : public UHangarInfoBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* WeaponTypeLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* WeaponTypeText;
    
public:
    UHangarWeaponType();
};

