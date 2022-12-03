#include "NimbusFadeManager.h"

class UWorld;

void UNimbusFadeManager::OnPreLoadMap(const FString& MapName) {
}

void UNimbusFadeManager::OnPostLoadMap(UWorld* LoadedWorld) {
}

void UNimbusFadeManager::OnLoadingScreenShowHandler() {
}

void UNimbusFadeManager::OnLoadingScreenHideHandler() {
}

void UNimbusFadeManager::OnFadeOutHandler(float Duration) {
}

void UNimbusFadeManager::OnFadeInHandler(float Duration) {
}

void UNimbusFadeManager::OnFadedOutHandler() {
}

void UNimbusFadeManager::OnFadedInHandler() {
}

UNimbusFadeManager::UNimbusFadeManager() {
    this->FadeWidget = NULL;
    this->FadeWidgetObject = NULL;
    this->GameInstance = NULL;
    this->MapChangeManager = NULL;
    this->LoadingScreenManager = NULL;
}

