#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "NimbusMapChangeTransitionCache.h"
#include "NimbusMapChangeTransitionLoader.generated.h"

class UNimbusGameInstance;

UCLASS(Blueprintable)
class UNimbusMapChangeTransitionLoader : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNimbusGameInstance* GameInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FNimbusMapChangeTransitionCache Cache;
    
public:
    UNimbusMapChangeTransitionLoader();
};

