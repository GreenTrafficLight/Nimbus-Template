#include "VRSelectorUnit.h"

UVRSelectorUnit::UVRSelectorUnit() : UUserWidget(FObjectInitializer::Get()) {
    this->DelaySecondsBase = 1.00f;
    this->DelaySecondsStep = 0.10f;
    this->CursorAnimSeconds = 0.70f;
    this->CursorAnimCounts = 2;
}

