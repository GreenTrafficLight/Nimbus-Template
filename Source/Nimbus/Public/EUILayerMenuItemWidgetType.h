#pragma once
#include "CoreMinimal.h"
#include "EUILayerMenuItemWidgetType.generated.h"

UENUM(BlueprintType)
enum class EUILayerMenuItemWidgetType : uint8 {
    None,
    TextBlock,
    Image,
    TextBlockDecorate,
};

