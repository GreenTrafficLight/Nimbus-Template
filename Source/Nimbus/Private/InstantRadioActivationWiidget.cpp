#include "InstantRadioActivationWiidget.h"

UInstantRadioActivationWiidget::UInstantRadioActivationWiidget() : UUserWidget(FObjectInitializer::Get()) {
    this->SelectionAnimation = NULL;
    this->SendToTeamPlayerDuration = 0.50f;
    this->ControlRepeatThresholdSeconds = 0.20f;
}

