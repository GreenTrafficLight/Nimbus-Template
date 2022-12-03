#pragma once
#include "CoreMinimal.h"
#include "Engine/TextureRenderTarget2D.h"
#include "NimbusTextureRenderTargetVR.generated.h"

UCLASS(Blueprintable)
class NIMBUS_API UNimbusTextureRenderTargetVR : public UTextureRenderTarget2D {
    GENERATED_BODY()
public:
    UNimbusTextureRenderTargetVR();
};

