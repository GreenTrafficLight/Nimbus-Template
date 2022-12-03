#pragma once
#include "CoreMinimal.h"
#include "MenuBaseWidget.h"
#include "MissionBaseWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UMissionBaseWidget : public UMenuBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> CheckPointList;
    
    UMissionBaseWidget();
};

