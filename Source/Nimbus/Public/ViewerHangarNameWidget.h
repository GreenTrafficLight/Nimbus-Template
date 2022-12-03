#pragma once
#include "CoreMinimal.h"
#include "CommonHangarNameWidget.h"
#include "ViewerHangarNameWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UViewerHangarNameWidget : public UCommonHangarNameWidget {
    GENERATED_BODY()
public:
    UViewerHangarNameWidget();
};

