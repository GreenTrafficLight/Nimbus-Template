#pragma once
#include "CoreMinimal.h"
#include "CommonHangarAircraftWidget.h"
#include "ViewerHangarAircraft.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UViewerHangarAircraft : public UCommonHangarAircraftWidget {
    GENERATED_BODY()
public:
    UViewerHangarAircraft();
};

