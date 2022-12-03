#include "LocalizationManager.h"

void ULocalizationManager::SetVoiceCulture(const FString& Name) {
}

void ULocalizationManager::SetSubtitleCulture(const FString& Name) {
}

void ULocalizationManager::SetIsDebugOutputEnabled(bool Value) {
}

void ULocalizationManager::SetCulture(const FString& Name) {
}

FString ULocalizationManager::LocalizeStringParams(const FString& Key, const TArray<FString>& Params) {
    return TEXT("");
}

FString ULocalizationManager::LocalizeString(const FString& Key, bool bErrorCheck, const FString& DummyPrefix) {
    return TEXT("");
}

bool ULocalizationManager::HasString(const FString& Key) {
    return false;
}

FString ULocalizationManager::GetVoiceCulture() {
    return TEXT("");
}

FString ULocalizationManager::GetSubtitleCulture() {
    return TEXT("");
}

bool ULocalizationManager::GetIsDebugOutputEnabled() {
    return false;
}

FString ULocalizationManager::GetCulture() {
    return TEXT("");
}

ULocalizationManager::ULocalizationManager() {
}

