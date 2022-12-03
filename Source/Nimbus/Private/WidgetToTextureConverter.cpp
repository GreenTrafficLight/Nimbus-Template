#include "WidgetToTextureConverter.h"

UWidgetToTextureConverter::UWidgetToTextureConverter() {
    this->Widget = NULL;
    this->RenderTarget = NULL;
    this->RefreshFPS = 0.00f;
    this->DownSampleRT = NULL;
    this->BlurXRT = NULL;
    this->BlurYRT = NULL;
    this->RenderTargetWithGlow = NULL;
}

