#include "Radio.h"

void ARadio::PlayMessage(const FString& MessageID) {
}

bool ARadio::IsPlaying() {
    return false;
}

FString ARadio::GetCurrentSpeaker() {
    return TEXT("");
}

FString ARadio::GetCurrentMessageID() {
    return TEXT("");
}

FString ARadio::GetCurrentMessage() {
    return TEXT("");
}

void ARadio::ClearAllMessages(bool bFireCurrentMessageEndEvent) {
}

ARadio::ARadio() {
}

