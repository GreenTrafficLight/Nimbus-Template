#pragma once
#include "CoreMinimal.h"
#include "NimbusAssetLoaderRequestLoadInfo.h"
#include "UObject/Object.h"
#include "NimbusAssetLoader.generated.h"

class UWorld;
class UNimbusTextureManager;
class UNimbusBundleDataAsset;
class UNimbusGameInstance;

UCLASS(Blueprintable)
class NIMBUS_API UNimbusAssetLoader : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNimbusTextureManager* TextureManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNimbusGameInstance* GameInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, UObject*> HangarObjectCache;
    
    UPROPERTY(EditAnywhere, Transient)
    TMap<UNimbusBundleDataAsset*, uint8> ResidentAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FNimbusAssetLoaderRequestLoadInfo> RequestLoadInfoBuffer;
    
public:
    UNimbusAssetLoader();
protected:
    UFUNCTION(BlueprintCallable)
    void OnPostWorldCleanupHandler(UWorld* World, bool bSessionEnded, bool bCleanupResources);
    
    UFUNCTION(BlueprintCallable)
    void OnPostGarbageCollectHandler();
    
};

