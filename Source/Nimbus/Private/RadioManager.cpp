#include "RadioManager.h"

class AGameObject;

void ARadioManager::SetSilentGroupEnabled_S(int32 SilentGroupIndex, bool bIsEnabled) {
}

void ARadioManager::SetRadioTypeEnabled_S(ERadioType RadioType, bool bEnabled) {
}

void ARadioManager::SetRadioTypeEnabled(ERadioType RadioType, bool bEnabled) {
}

void ARadioManager::SetRadioSkipEnabled_S(bool bEnabled) {
}

void ARadioManager::SetPlayByPlayRadioGroupIDPostfixes_S(const TArray<FRadioGroupIDPostfix>& InRadioGroupIDPostfixes) {
}

void ARadioManager::SetPlayByPlayAllowRadius_S(float RadiusInMeters) {
}

void ARadioManager::SetForceOfflineEnabled_S(bool bEnabled) {
}

void ARadioManager::SetEnemyTensionEnabled_S(ERadioTension Tension, bool bIsEnabled) {
}

void ARadioManager::SetAllyTensionEnabled_S(ERadioTension Tension, bool bIsEnabled) {
}

void ARadioManager::ResetPlayCount_S(const FString& RadioGroupID) {
}

void ARadioManager::ResetPlayByPlayRadioGroupIDPostfixes_S() {
}

bool ARadioManager::RequestPlayRadioWithKeySpeaker_S(const FString& RadioGroupID, int32& RequestID, bool Condition, const AGameObject* KeySpeaker) {
	return false;
}

bool ARadioManager::RequestPlayRadioWithKeySpeaker(const FString& RadioGroupID, int32& RequestID, bool Condition, const AGameObject* KeySpeaker) {
	return false;
}

bool ARadioManager::RequestPlayRadio_S(const FString& RadioGroupID, int32& RequestID, bool Condition, const FString& KeySpeakerID) {
	return false;
}

bool ARadioManager::RequestPlayRadio(const FString& RadioGroupID, int32& RequestID, bool Condition, const FString& KeySpeakerID) {
	return false;
}

void ARadioManager::ReplaceRadioSpeakerName_S(const FString& SpeakerID, const FString& ReplaceSpeakerID) {
}

void ARadioManager::ReplaceEnvseID_S(const FString& EnvseID, const FString& ReplaceEnvseID) {
}

void ARadioManager::RemoveRadioRequest_S(const FString& RadioGroupID) {
}

void ARadioManager::RemoveRadioRequest(const FString& RadioGroupID) {
}

void ARadioManager::RemoveAllRadioRequestAndRemainingRadio_S() {
}

void ARadioManager::RemoveAllRadioRequest_S() {
}

void ARadioManager::RemoveAllRadioRequest() {
}

void ARadioManager::PushRequeueingWait_S(const FString& RadioGroupID, float Time, bool bShrink) {
}

void ARadioManager::OnPreStopBusEvent(ENimbusSoundType BusType) {
}

void ARadioManager::OnPreStartMiniGamePhaseEvent(bool bIsRetry) {
}

void ARadioManager::OnPreRestartPhaseEvent() {
}

void ARadioManager::OnPhaseEndEvent() {
}

void ARadioManager::OnIGCEnableEvent(bool bEnabled) {
}

bool ARadioManager::IsRadioSkipEnabled_S() {
	return false;
}

bool ARadioManager::IsChannelPlaying_S(ERadioManagerChannel Channel) {
	return false;
}

bool ARadioManager::IsChannelPlaying(ERadioManagerChannel Channel) const {
	return false;
}

bool ARadioManager::IsChannelEnabled_S(ERadioManagerChannel Channel) {
	return false;
}

bool ARadioManager::IsChannelEnabled(ERadioManagerChannel Channel) const {
	return false;
}

TArray<FString> ARadioManager::GetRadioGroupIDs() const {
	return TArray<FString>();
}

void ARadioManager::EnableAllRadio_S() {
}

void ARadioManager::EnableAllRadio() {
}

void ARadioManager::DisableRadioAfterRequest_S(int32 RequestID) {
}

void ARadioManager::DisableRadioAfterRequest(int32 RequestID) {
}

void ARadioManager::ClearReplacedRadioSpeakerNames_S() {
}

void ARadioManager::ClearReplacedRadioSpeakerName_S(const FString& SpeakerID) {
}

void ARadioManager::ClearAllReplacedEnvseID_S() {
}

void ARadioManager::AddPlayByPlayRadioGroupIDPostfix_S(const FString& KeySpeakerID, const FString& RadioGroupIDPostfix) {
}

ARadioManager::ARadioManager() {
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	SetRootComponent(RootComponent);
	this->RadioSpeakerTable = NULL;
	this->OverrideRadioSpeakerTable = NULL;
	this->AutomaticSpeakerIDTable = NULL;
	this->RadioChannels[0] = NULL;
	this->RadioChannels[1] = NULL;
	this->bShowRequestFailedReason = false;
	this->bHideSubtitleOnVR = false;
	this->SearchEnemyRadius = 80000.00f;
	this->AllowRangeRadius = 80000.00f;
}

