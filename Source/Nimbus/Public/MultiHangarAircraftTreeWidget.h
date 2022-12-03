#pragma once
#include "CoreMinimal.h"
#include "CommonAircraftTreeWidget.h"
#include "MultiHangarAircraftTreeWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UMultiHangarAircraftTreeWidget : public UCommonAircraftTreeWidget {
    GENERATED_BODY()
public:
    UMultiHangarAircraftTreeWidget();
};

