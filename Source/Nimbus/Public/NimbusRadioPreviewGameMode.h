#pragma once
#include "CoreMinimal.h"
#include "NimbusGameMode.h"
#include "NimbusRadioPreviewGameMode.generated.h"

class UNimbusCheatManager;

UCLASS(Blueprintable, NonTransient)
class NIMBUS_API ANimbusRadioPreviewGameMode : public ANimbusGameMode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNimbusCheatManager* NimbusCheatManager;
    
public:
    ANimbusRadioPreviewGameMode();
};

