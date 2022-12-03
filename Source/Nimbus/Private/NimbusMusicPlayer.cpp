#include "NimbusMusicPlayer.h"

void UNimbusMusicPlayer::Stop() {
}

bool UNimbusMusicPlayer::Play(const FString& in_EventName) {
    return false;
}

bool UNimbusMusicPlayer::Pause(bool NewPause) {
    return false;
}

bool UNimbusMusicPlayer::IsPlaying() {
    return false;
}

bool UNimbusMusicPlayer::IsPause() {
    return false;
}

bool UNimbusMusicPlayer::IsEndPlay() {
    return false;
}

int32 UNimbusMusicPlayer::GetPlayPosition() {
    return 0;
}

int32 UNimbusMusicPlayer::GetDuration() {
    return 0;
}

void UNimbusMusicPlayer::GetAudioSpectrum(TArray<float>& arry) {
}

UNimbusMusicPlayer::UNimbusMusicPlayer() {
}

