#include "SystemObjectSE.h"

void ASystemObjectSE::StopAmbientSound() {
}

void ASystemObjectSE::SetVolume(float InVolume) {
}

void ASystemObjectSE::PlayAmbientSound() {
}

ASystemObjectSE::ASystemObjectSE() {
    this->SoundEventToPlay = NULL;
    this->SoundEventToStop = NULL;
    this->bAutoPlay = true;
}

