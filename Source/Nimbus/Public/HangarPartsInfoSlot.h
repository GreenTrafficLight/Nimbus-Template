#pragma once
#include "CoreMinimal.h"
#include "HangarInfoBase.h"
#include "HangarPartsInfoSlot.generated.h"

class UUserWidget;

UCLASS(Blueprintable)
class UHangarPartsInfoSlot : public UHangarInfoBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUserWidget* AircraftWidget;
    
public:
    UHangarPartsInfoSlot();
};

