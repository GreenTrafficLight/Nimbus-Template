#include "ManaComponent.h"

class UManaTexture;
class UManaMovie;

bool UManaComponent::ToIndex(int32 Index) {
    return false;
}

void UManaComponent::StopAndWaitCompletion() {
}

void UManaComponent::Stop() {
}

void UManaComponent::SetVolume(float Volume) {
}

void UManaComponent::SetTexture(UManaTexture* Texture) {
}

void UManaComponent::SetFile(const FString& MovieFilePath) {
}

void UManaComponent::SetCachedData(const TArray<uint8>& DataArray) {
}

void UManaComponent::SeekToPosition(int32 FrameNumber) {
}

void UManaComponent::ResetCachedData() {
}

bool UManaComponent::Previous() {
    return false;
}

void UManaComponent::PreparePlaylistIndex(int32 Index) {
}

void UManaComponent::Prepare() {
}

void UManaComponent::Play() {
}

void UManaComponent::Pause(bool bPause) {
}

bool UManaComponent::Next() {
    return false;
}

bool UManaComponent::IsReady() const {
    return false;
}

bool UManaComponent::IsPreparing() const {
    return false;
}

bool UManaComponent::IsPlaying() const {
    return false;
}

bool UManaComponent::IsPaused() const {
    return false;
}

bool UManaComponent::IsLooping() const {
    return false;
}

float UManaComponent::GetVolume() {
    return 0.0f;
}

float UManaComponent::GetTime() {
    return 0.0f;
}

UManaTexture* UManaComponent::GetTexture() {
    return NULL;
}

EManaComponentStatus UManaComponent::GetStatus() {
    return EManaComponentStatus::Stop;
}

UManaMovie* UManaComponent::GetSource() {
    return NULL;
}

int32 UManaComponent::GetFrameNumber() {
    return 0;
}

void UManaComponent::EnableSubtitles(bool bEnable) {
}

void UManaComponent::EnableSeamless(bool bEnable) {
}

void UManaComponent::ChangeSubtitlesChannel(int32 Channel) {
}

UManaComponent::UManaComponent() {
    this->Movie = NULL;
    this->bLoop = false;
    this->bSubtitlesEnabled = false;
    this->SubtitlesChannel = 0;
    this->SubtitlesEncoding = EManaSubtitlesEncoding::Default;
    this->EndFrameAction = EManaFrameAction::Default;
    this->Playlist = NULL;
    this->PlaylistIndex = 0;
}

