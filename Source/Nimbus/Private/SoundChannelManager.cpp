#include "SoundChannelManager.h"

class AActor;
class ASoundChannelManager;

void ASoundChannelManager::PlaySoundAttached(SoundChannelType Type, const AActor* AttachActor, const FVector& RelativeLocation, FAdditionalSoundChannelParams Params) {
}

void ASoundChannelManager::PlaySoundAtLocationWithSwitch(SoundChannelType Type, const FVector& Location, FAdditionalSoundChannelParams Params, FName SwitchGroup, FName SwitchState) {
}

void ASoundChannelManager::PlaySoundAtLocation(SoundChannelType Type, const FVector& Location, FAdditionalSoundChannelParams Params) {
}

void ASoundChannelManager::OnPreRestartPhaseEvent() {
}

ASoundChannelManager* ASoundChannelManager::GetSoundChannelManager() {
    return NULL;
}

ASoundChannelManager::ASoundChannelManager() {
}

