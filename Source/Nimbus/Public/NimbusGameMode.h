#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/GameMode.h"
#include "NimbusGameMode.generated.h"

class USubtitleWidget;

UCLASS(Blueprintable, NonTransient)
class NIMBUS_API ANimbusGameMode : public AGameMode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USubtitleWidget> SubtitleWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USubtitleWidget> SubtitleWidgetVRClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USubtitleWidget* SubtitleWidget;
    
public:
    ANimbusGameMode();
};

