#include "MovieWidget.h"

UMovieWidget::UMovieWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->UIManagerActor = NULL;
    this->ManaComponent = NULL;
    this->UmgBackground = NULL;
    this->UmgMovieImage = NULL;
}

