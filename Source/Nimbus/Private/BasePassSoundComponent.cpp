#include "BasePassSoundComponent.h"

void UBasePassSoundComponent::OnReplayCameraChanged(uint8 Type) {
}

void UBasePassSoundComponent::OnCameraViewChanged(ECameraType Type) {
}

UBasePassSoundComponent::UBasePassSoundComponent() {
    this->OwnerGameObject = NULL;
    this->OwnerAIGameObject = NULL;
    this->Owner = NULL;
}

