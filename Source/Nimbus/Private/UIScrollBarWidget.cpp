#include "UIScrollBarWidget.h"

UUIScrollBarWidget::UUIScrollBarWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->UmgScrollBarTrack = NULL;
    this->UmgBackground = NULL;
    this->UmgTranstion = NULL;
}

