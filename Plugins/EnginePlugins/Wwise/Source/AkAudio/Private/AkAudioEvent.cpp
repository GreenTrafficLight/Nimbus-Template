#include "AkAudioEvent.h"

UAkAudioEvent::UAkAudioEvent() {
    this->RequiredBank = NULL;
    this->MaxAttenuationRadius = 0.00f;
    this->IsInfinite = false;
    this->MinimumDuration = 0.00f;
    this->MaximumDuration = 0.00f;
}

