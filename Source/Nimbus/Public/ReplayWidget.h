#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "MenuBaseWidget.h"
#include "ReplayWidget.generated.h"

class ANimbusReplayPawn;
class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UReplayWidget : public UMenuBaseWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ANimbusReplayPawn* ReplayPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> SkipButtonWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* SkipButton;
    
public:
    UReplayWidget();
};

