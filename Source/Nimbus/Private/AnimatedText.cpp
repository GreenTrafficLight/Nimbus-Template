#include "AnimatedText.h"

FAnimatedText::FAnimatedText() {
    this->bEnabled = false;
    this->bAnimateVisibleOnly = false;
    this->SecondsDelayBeforeAnimate = 0.00f;
    this->bEnableFadeAnimation = false;
    this->SecondsIntervalBtweenCharacters = 0.00f;
    this->bEnableCursorAnimation = false;
    this->CursorAnimSeconds = 0.00f;
    this->CursorAnimCounts = 0;
    this->FadeInSeconds = 0.00f;
}

