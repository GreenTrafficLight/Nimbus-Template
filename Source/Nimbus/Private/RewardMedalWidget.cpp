#include "RewardMedalWidget.h"

URewardMedalWidget::URewardMedalWidget() {
    this->MinTimeLeftToShowNextButtonSeconds = 0.00f;
    this->DynamicGlowMaterialTemplateRef = NULL;
    this->UsmMaterialToApply = NULL;
    this->bAllAsyncLoadedTextureApplied = false;
}

