#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AircraftTreeAnimationBase.generated.h"

class UCommonAircraftTreeWidget;

UCLASS(Blueprintable)
class NIMBUS_API UAircraftTreeAnimationBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCommonAircraftTreeWidget* Menu;
    
public:
    UAircraftTreeAnimationBase();
};

