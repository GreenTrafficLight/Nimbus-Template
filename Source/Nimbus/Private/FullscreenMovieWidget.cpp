#include "FullscreenMovieWidget.h"

UFullscreenMovieWidget::UFullscreenMovieWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->UIManagerActor = NULL;
    this->UmgBackground = NULL;
    this->UmgMovieImage = NULL;
    this->UmgMovieSubtitle = NULL;
    this->UmgLoadIcon = NULL;
}

