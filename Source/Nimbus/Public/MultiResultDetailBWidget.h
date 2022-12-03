#pragma once
#include "CoreMinimal.h"
#include "MultiMissionMenuBaseWidget.h"
#include "MultiResultDetailBWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UMultiResultDetailBWidget : public UMultiMissionMenuBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowAllPlayers;
    
public:
    UMultiResultDetailBWidget();
};

