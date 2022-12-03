#pragma once
#include "CoreMinimal.h"
#include "MenuBaseWidget.h"
#include "MultiMissionMenuBaseWidget.generated.h"

class ATeamDeathMatchGameMode;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UMultiMissionMenuBaseWidget : public UMenuBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PauseBackgroundOpacity;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATeamDeathMatchGameMode* GameMode;
    
public:
    UMultiMissionMenuBaseWidget();
};

