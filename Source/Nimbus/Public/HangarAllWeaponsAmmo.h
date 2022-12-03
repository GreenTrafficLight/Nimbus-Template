#pragma once
#include "CoreMinimal.h"
#include "HangarInfoBase.h"
#include "HangarAllWeaponsAmmo.generated.h"

class UUserWidget;

UCLASS(Blueprintable)
class UHangarAllWeaponsAmmo : public UHangarInfoBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUserWidget* AircraftWidget;
    
public:
    UHangarAllWeaponsAmmo();
};

