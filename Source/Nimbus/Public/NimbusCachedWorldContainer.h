#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "NimbusCachedWorldContainer.generated.h"

class UWorld;

UCLASS(Blueprintable)
class UNimbusCachedWorldContainer : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UWorld*> CachedWorlds;
    
public:
    UNimbusCachedWorldContainer();
private:
    UFUNCTION(BlueprintCallable)
    void OnPostWorldCleanupHandler(UWorld* World, bool bSessionEnded, bool bCleanupResources);
    
    UFUNCTION(BlueprintCallable)
    void OnPostGarbageCollectHandler();
    
};

