#pragma once
#include "CoreMinimal.h"
#include "CommonHangarBaseMenuWidget.h"
#include "UObject/NoExportTypes.h"
#include "CommonHangarEmblemWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UCommonHangarEmblemWidget : public UCommonHangarBaseMenuWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D GridItemSpacing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D GridItemOffset;
    
public:
    UCommonHangarEmblemWidget();
};

