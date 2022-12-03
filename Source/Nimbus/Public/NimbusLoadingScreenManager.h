#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "NimbusLoadingScreenManager.generated.h"

class UUserWidget;

UCLASS(Blueprintable)
class NIMBUS_API UNimbusLoadingScreenManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUserWidget* LoadingScreenWidget;
    
public:
    UNimbusLoadingScreenManager();
};

