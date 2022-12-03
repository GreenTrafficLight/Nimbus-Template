#pragma once
#include "CoreMinimal.h"
#include "MenuBaseWidget.h"
#include "UObject/NoExportTypes.h"
#include "ViewerGridMenuBaseWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UViewerGridMenuBaseWidget : public UMenuBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D SelectorTranslation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D SelectorOffset;
    
public:
    UViewerGridMenuBaseWidget();
};

