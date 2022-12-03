#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "NimbusSubLevelManager.generated.h"

class UNimbusCachedWorldContainer;
class UNimbusGameInstance;

UCLASS(Blueprintable)
class NIMBUS_API UNimbusSubLevelManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNimbusGameInstance* GameInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNimbusCachedWorldContainer* CachedWorldContainer;
    
public:
    UNimbusSubLevelManager();
protected:
    UFUNCTION(BlueprintCallable)
    void OnLoadedSubLevel();
    
};

