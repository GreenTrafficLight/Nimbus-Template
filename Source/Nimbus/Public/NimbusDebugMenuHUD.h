#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NimbusDebugMenuHUD.generated.h"

class UFont;
class UDebugMenuWidget;

UCLASS(Blueprintable)
class ANimbusDebugMenuHUD : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFont* FontObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UDebugMenuWidget*> DebugMenuStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UDebugMenuWidget*> DebugMenu;
    
public:
    ANimbusDebugMenuHUD();
};

