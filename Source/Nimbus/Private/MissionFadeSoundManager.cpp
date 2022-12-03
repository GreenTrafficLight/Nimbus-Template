#include "MissionFadeSoundManager.h"

void UMissionFadeSoundManager::OnPreUnpauseBusHandler(ENimbusSoundType BusType) {
}

void UMissionFadeSoundManager::OnPreStopBusHandler(ENimbusSoundType BusType) {
}

void UMissionFadeSoundManager::OnPrePauseBusHandler(ENimbusSoundType BusType) {
}

void UMissionFadeSoundManager::OnPostStopBusHandler(ENimbusSoundType BusType) {
}

void UMissionFadeSoundManager::OnFadeOutHandler(float Duration) {
}

void UMissionFadeSoundManager::OnFadeInHandler(float Duration) {
}

void UMissionFadeSoundManager::OnFadedOutHandler() {
}

void UMissionFadeSoundManager::OnFadedInHandler() {
}

UMissionFadeSoundManager::UMissionFadeSoundManager() {
    this->FadeManager = NULL;
}

