#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "NimbusTextureManagerTextureState.h"
#include "NimbusTextureManagerBundleAssetInfo.h"
#include "NimbusTextureManager.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class NIMBUS_API UNimbusTextureManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UClass*, FNimbusTextureManagerBundleAssetInfo> HangarPlayerTextures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UClass*, FNimbusTextureManagerBundleAssetInfo> MissionPlayerTextures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UClass*, FNimbusTextureManagerBundleAssetInfo> MissionAIPlaneTextures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UTexture2D*, FNimbusTextureManagerTextureState> TextureStates;
    
public:
    UNimbusTextureManager();
};

