#include "MovieSubtitleWidget.h"




UMovieSubtitleWidget::UMovieSubtitleWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->EmblemAnimationFPS = 0.00f;
    this->PlayerController = NULL;
    this->InGameSubtitleWidget = NULL;
}

