#include "BackgroundWidget.h"

UBackgroundWidget::UBackgroundWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->bLoopMovie = false;
    this->DelayDuration = 0.00f;
    this->FadeDuration = 0.00f;
    this->CurrUIManager = NULL;
    this->UmgMovieImage = NULL;
    this->ManaTexture = NULL;
}

