#include "AkGameplayStatics.h"

class UAkAudioBank;
class AActor;
class UObject;
class UAkAuxBus;
class UAkAudioEvent;
class UAkComponent;
class USceneComponent;

void UAkGameplayStatics::UseReverbVolumes(bool inUseReverbVolumes, AActor* Actor) {
}

void UAkGameplayStatics::UseEarlyReflections(AActor* Actor, UAkAuxBus* AuxBus, bool Left, bool Right, bool Floor, bool Ceiling, bool Back, bool Front, bool SpotReflectors, const FString& AuxBusName) {
}

void UAkGameplayStatics::UnloadBankByName(const FString& BankName) {
}

void UAkGameplayStatics::UnloadBank(UAkAudioBank* Bank, const FString& BankName) {
}

void UAkGameplayStatics::StopProfilerCapture() {
}

void UAkGameplayStatics::StopOutputCapture() {
}

void UAkGameplayStatics::StopAllAmbientSounds(UObject* WorldContextObject) {
}

void UAkGameplayStatics::StopAll() {
}

void UAkGameplayStatics::StopActor(AActor* Actor) {
}

void UAkGameplayStatics::StartProfilerCapture(const FString& Filename) {
}

void UAkGameplayStatics::StartOutputCapture(const FString& Filename) {
}

void UAkGameplayStatics::StartAllAmbientSounds(UObject* WorldContextObject) {
}

UAkComponent* UAkGameplayStatics::SpawnAkComponentAtLocation(UObject* WorldContextObject, UAkAudioEvent* akevent, UAkAuxBus* EarlyReflectionsBus, FVector Location, FRotator Orientation, bool AutoPost, const FString& EventName, const FString& EarlyReflectionsBusName, bool AutoDestroy) {
    return NULL;
}

void UAkGameplayStatics::SetSwitch(FName SwitchGroup, FName SwitchState, AActor* Actor) {
}

void UAkGameplayStatics::SetState(FName StateGroup, FName State) {
}

void UAkGameplayStatics::SetRTPCValue(FName RTPC, float Value, int32 InterpolationTimeMs, AActor* Actor) {
}

void UAkGameplayStatics::SetPanningRule(PanningRule PanRule) {
}

void UAkGameplayStatics::SetOutputBusVolume(float BusVolume, AActor* Actor) {
}

void UAkGameplayStatics::SetOcclusionScalingFactor(float ScalingFactor) {
}

void UAkGameplayStatics::SetOcclusionRefreshInterval(float RefreshInterval, AActor* Actor) {
}

void UAkGameplayStatics::SetBusConfig(const FString& BusName, AkChannelConfiguration ChannelConfiguration) {
}

void UAkGameplayStatics::PostTrigger(FName Trigger, AActor* Actor) {
}

void UAkGameplayStatics::PostEventByName(const FString& EventName, AActor* Actor, bool bStopWhenAttachedToDestroyed) {
}

int32 UAkGameplayStatics::PostEventAttached(UAkAudioEvent* akevent, AActor* Actor, FName AttachPointName, bool bStopWhenAttachedToDestroyed, const FString& EventName) {
    return 0;
}

void UAkGameplayStatics::PostEventAtLocationByName(const FString& EventName, FVector Location, FRotator Orientation, UObject* WorldContextObject) {
}

int32 UAkGameplayStatics::PostEventAtLocation(UAkAudioEvent* akevent, FVector Location, FRotator Orientation, const FString& EventName, UObject* WorldContextObject) {
    return 0;
}

int32 UAkGameplayStatics::PostEvent(UAkAudioEvent* akevent, AActor* Actor, bool bStopWhenAttachedToDestroyed, const FString& EventName) {
    return 0;
}

void UAkGameplayStatics::LoadInitBank() {
}

void UAkGameplayStatics::LoadBanks(const TArray<UAkAudioBank*>& SoundBanks, bool SynchronizeSoundBanks) {
}

void UAkGameplayStatics::LoadBankByName(const FString& BankName) {
}

void UAkGameplayStatics::LoadBank(UAkAudioBank* Bank, const FString& BankName) {
}

bool UAkGameplayStatics::IsGame(UObject* WorldContextObject) {
    return false;
}

bool UAkGameplayStatics::IsEditor() {
    return false;
}

float UAkGameplayStatics::GetOcclusionScalingFactor() {
    return 0.0f;
}

void UAkGameplayStatics::GetAudioSpectrum(TArray<float>& arry) {
}

UAkComponent* UAkGameplayStatics::GetAkComponent(USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, TEnumAsByte<EAttachLocation::Type> LocationType) {
    return NULL;
}

void UAkGameplayStatics::ClearBanks() {
}

void UAkGameplayStatics::AddOutputCaptureMarker(const FString& MarkerText) {
}

UAkGameplayStatics::UAkGameplayStatics() {
}

