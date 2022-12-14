#pragma once
#include "CoreMinimal.h"
#include "Engine/Texture.h"
#include "UObject/NoExportTypes.h"
#include "EManaComponentTextureType.h"
#include "Engine/Texture.h"
#include "ManaComponentTexture.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UManaComponentTexture : public UTexture {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SizeX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SizeY;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EPixelFormat> Format;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EManaComponentTextureType ComponentType;
    
    UPROPERTY(AdvancedDisplay, AssetRegistrySearchable, EditAnywhere)
    TEnumAsByte<TextureAddress> AddressX;
    
    UPROPERTY(AdvancedDisplay, AssetRegistrySearchable, EditAnywhere)
    TEnumAsByte<TextureAddress> AddressY;
    
    UManaComponentTexture();
};

