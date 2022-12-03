#include "SoundChannelActor.h"

FAdditionalSoundChannelParams ASoundChannelActor::MakeAdditionalSoundParams(float InCloudDensity) {
    return FAdditionalSoundChannelParams{};
}

bool ASoundChannelActor::GetIsPlaying() const {
    return false;
}

ASoundChannelActor::ASoundChannelActor() {
    this->AttachActor = NULL;
}

