#include "RadioChannelActor.h"
#include "AkComponent.h"

ARadioChannelActor::ARadioChannelActor() {
    this->AudioComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AudioComponent"));
}

