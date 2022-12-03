#pragma once
#include "CoreMinimal.h"
#include "Engine/Texture.h"
#include "Engine/Texture.h"
#include "ManaVideoTrackInfo.h"
#include "UObject/NoExportTypes.h"
#include "ManaEventPointInfo.h"
#include "UObject/NoExportTypes.h"
#include "ManaTexture.generated.h"

class UManaSource;
class UManaComponentTexture;

UCLASS(Blueprintable, MinimalAPI)
class UManaTexture : public UTexture {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UManaSource* MovieSource;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MovieFilePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FManaVideoTrackInfo> VideoTrackInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FManaEventPointInfo> EventPointInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumSubtitleChannels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRenderToTexture: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetGamma;
    
    UPROPERTY(AdvancedDisplay, AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHDR: 1;
    
    UPROPERTY(AdvancedDisplay, AssetRegistrySearchable, EditAnywhere)
    TEnumAsByte<TextureAddress> AddressX;
    
    UPROPERTY(AdvancedDisplay, AssetRegistrySearchable, EditAnywhere)
    TEnumAsByte<TextureAddress> AddressY;
    
    UPROPERTY(AdvancedDisplay, AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ClearColor;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EPixelFormat> OverrideFormat;
    
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UManaComponentTexture*> ComponentTextures;
    
public:
    UManaTexture();
    UFUNCTION(BlueprintCallable)
    void SetMovieSource(UManaSource* InSource);
    
};

