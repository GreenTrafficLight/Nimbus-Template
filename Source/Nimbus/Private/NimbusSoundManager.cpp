#include "NimbusSoundManager.h"

class AActor;
class UAkAudioBank;
class UAkAudioEvent;
class UObject;

void UNimbusSoundManager::UnloadBank(UAkAudioBank* Bank, const FString& BankName) {
}

void UNimbusSoundManager::StopAll() {
}

void UNimbusSoundManager::StopActor(AActor* Actor) {
}

void UNimbusSoundManager::SetSwitch(FName SwitchGroup, FName SwitchState, AActor* Actor) {
}

void UNimbusSoundManager::SetState(FName StateGroup, FName State) {
}

void UNimbusSoundManager::SetRTPCValue(FName RTPC, float Value, int32 InterpolationTimeMs, AActor* Actor) {
}

void UNimbusSoundManager::SetOutputMode(ENimbusSoundOutputMode OutputMode) {
}

void UNimbusSoundManager::SetOcclusionRefreshInterval(float RefreshInterval, AActor* Actor) {
}

int32 UNimbusSoundManager::PostEventAtLocation(UAkAudioEvent* akevent, FVector Location, FRotator Orientation, const FString& EventName, UObject* WorldContextObject, ENimbusSoundType SoundType) {
    return 0;
}

int32 UNimbusSoundManager::PostEvent(UAkAudioEvent* akevent, AActor* Actor, bool bStopWhenAttachedToDestroyed, const FString& EventName, ENimbusSoundType SoundType) {
    return 0;
}

void UNimbusSoundManager::LoadInitBank() {
}

void UNimbusSoundManager::LoadBanks(const TArray<UAkAudioBank*>& SoundBanks, bool SynchronizeSoundBanks) {
}

void UNimbusSoundManager::LoadBank(UAkAudioBank* Bank, const FString& BankName) {
}

bool UNimbusSoundManager::LoadAllFilePackages() {
    return false;
}

ENimbusSoundOutputMode UNimbusSoundManager::GetOutputMode() {
    return ENimbusSoundOutputMode::NONE;
}

void UNimbusSoundManager::ClearBanks() {
}

UNimbusSoundManager::UNimbusSoundManager() {
}

