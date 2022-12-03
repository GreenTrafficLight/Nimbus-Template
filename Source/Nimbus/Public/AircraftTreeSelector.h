#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AircraftTreeSelector.generated.h"

class UPanelWidget;
class UImage;

UCLASS(Blueprintable)
class NIMBUS_API UAircraftTreeSelector : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPanelWidget* Widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* ItemNode;
    
    UAircraftTreeSelector();
};

