#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "NimbusMapChangeLongevityCache.h"
#include "NimbusMapChangeRequestInfo.h"
#include "NimbusMapChangeManager.generated.h"

class UNimbusCachedWorldContainer;
class UNimbusMapChangeTravelLoader;
class UNimbusGameInstance;
class UMapChangeTransitionDelayObject;
class UNimbusMapChangeTransitionLoader;
class UWorld;

UCLASS(Blueprintable)
class NIMBUS_API UNimbusMapChangeManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNimbusGameInstance* GameInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNimbusMapChangeTransitionLoader* TransitionLoader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNimbusMapChangeTravelLoader* TravelLoader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMapChangeTransitionDelayObject* DefaultTransitionDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FNimbusMapChangeLongevityCache LongevityCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FNimbusMapChangeRequestInfo CurrentRequestInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FNimbusMapChangeRequestInfo PendingRequestInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNimbusCachedWorldContainer* LeakedCleanupWorldContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNimbusCachedWorldContainer* CurrentCachedWorldContainer;
    
public:
    UNimbusMapChangeManager();
private:
    UFUNCTION(BlueprintCallable)
    void OnWorldCleanupHandler(UWorld* World, bool bSessionEnded, bool bCleanupResources);
    
    UFUNCTION(BlueprintCallable)
    void OnPostWorldCleanupHandler(UWorld* World, bool bSessionEnded, bool bCleanupResources);
    
};

