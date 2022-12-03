#pragma once
#include "CoreMinimal.h"
#include "AircraftTreeNodeWidget.h"
#include "AircraftTreeNodeBase.generated.h"

UCLASS(Blueprintable)
class NIMBUS_API UAircraftTreeNodeBase : public UAircraftTreeNodeWidget {
    GENERATED_BODY()
public:
    UAircraftTreeNodeBase();
};

