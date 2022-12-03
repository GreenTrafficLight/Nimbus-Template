#pragma once
#include "CoreMinimal.h"
#include "EGraphicsMiscSettings.generated.h"

UENUM(BlueprintType)
enum class EGraphicsMiscSettings : uint8 {
    NimbusGlowColorSetByWidget,
    PostProcessNimbusUseAlphaBlend,
    ShadowDistanceScale,
    PS4VROverlayAdditiveBlend,
    NimbusGlowCombineHUD,
    MotionBlurAmount,
    ScreenPercentage,
    PostProcessNimbusUseExtraLayer,
    Count,
};

