#include "AtomComponent.h"

class USoundAtomCue;

void UAtomComponent::Stop() {
}

void UAtomComponent::SetVolume(float Volume) {
}

void UAtomComponent::SetSound(USoundAtomCue* NewSound) {
}

void UAtomComponent::SetSelectorLabel(const FString& selector, const FString& Label) {
}

void UAtomComponent::SetPitchMultiplier(float NewPitchMultiplier) {
}

void UAtomComponent::SetPitch(float Pitch) {
}

void UAtomComponent::SetNextBlockIndex(int32 BlockIndex) {
}

void UAtomComponent::SetBusSendLevelOffsetByName(const FString& BusName, float LevelOffset) {
}

void UAtomComponent::SetBusSendLevelOffset(int32 BusId, float LevelOffset) {
}

void UAtomComponent::SetBusSendLevelByName(const FString& BusName, float Level) {
}

void UAtomComponent::SetBusSendLevel(int32 BusId, float Level) {
}

void UAtomComponent::SetAisacByName(const FString& ControlName, float ControlValue) {
}

void UAtomComponent::Play(float StartTime) {
}

void UAtomComponent::Pause(bool bPause) {
}

bool UAtomComponent::IsPlaying() {
    return false;
}

bool UAtomComponent::IsPaused() {
    return false;
}

float UAtomComponent::GetTime() {
    return 0.0f;
}

EAtomComponentStatus UAtomComponent::GetStatus() {
    return EAtomComponentStatus::Stop;
}

float UAtomComponent::GetSequencePosition() {
    return 0.0f;
}

UAtomComponent::UAtomComponent() {
    this->Sound = NULL;
    this->bAutoDestroy = false;
    this->bPersistAcrossLevelTransition = false;
    this->bStopWhenOwnerDestroyed = true;
    this->bIsUISound = false;
    this->DefaultVolume = 1.00f;
    this->bEnableMultipleSoundPlayback = false;
    this->DefaultSoundObject = NULL;
    this->DefaultBlockIndex = 0;
    this->bOverrideAttenuation = false;
    this->AttenuationSettings = NULL;
}

