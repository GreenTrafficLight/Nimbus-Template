#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "MultiMissionMenuBaseWidget.h"
#include "UObject/NoExportTypes.h"
#include "MultiPauseWidget.generated.h"

class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UMultiPauseWidget : public UMultiMissionMenuBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor HUDColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor HUDGlowColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> EmblemListClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowAllRows;
    
public:
    UMultiPauseWidget();
};

