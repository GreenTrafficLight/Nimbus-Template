#include "TrueSkySequenceActor.h"

class APointLight;

void ATrueSkySequenceActor::VolumeQueryResult_Implementation(int32 CallerId, float Density) {
}

void ATrueSkySequenceActor::SetTime(float Value) {
}

void ATrueSkySequenceActor::SetTickTime(float Value) {
}

void ATrueSkySequenceActor::SetSunRotation(FRotator R) {
}

void ATrueSkySequenceActor::SetShadowBase(float Base) {
}

void ATrueSkySequenceActor::SetPointLightSource(int32 ID, FLinearColor lightColour, float intensity, FVector Pos, float minRadius, float MaxRadius) {
}

void ATrueSkySequenceActor::SetPointLight(APointLight* Source) {
}

void ATrueSkySequenceActor::SetMoonRotation(FRotator R) {
}

void ATrueSkySequenceActor::SetKeyframeInt(int32 KeyframeUid, const FString& Name, int32 Value) {
}

void ATrueSkySequenceActor::SetKeyframeFloat(int32 KeyframeUid, const FString& Name, float Value) {
}

void ATrueSkySequenceActor::SetInt(const FString& Name, int32 Value) {
}

void ATrueSkySequenceActor::SetFloat(const FString& Name, float Value) {
}

void ATrueSkySequenceActor::SetBool(const FString& Name, bool Value) {
}

float ATrueSkySequenceActor::GetTime2() {
    return 0.0f;
}

float ATrueSkySequenceActor::GetTime() {
    return 0.0f;
}

float ATrueSkySequenceActor::GetTickTime() {
    return 0.0f;
}

FString ATrueSkySequenceActor::GetText(const FString& Name) {
    return TEXT("");
}

FRotator ATrueSkySequenceActor::GetSunRotation() {
    return FRotator{};
}

FRotator ATrueSkySequenceActor::GetSunOrMoonRotation() {
    return FRotator{};
}

float ATrueSkySequenceActor::GetSunIntensity() {
    return 0.0f;
}

FLinearColor ATrueSkySequenceActor::GetSunColor() {
    return FLinearColor{};
}

int32 ATrueSkySequenceActor::GetSkyKeyframeByIndex(int32 Index) {
    return 0;
}

float ATrueSkySequenceActor::GetShadowBase() {
    return 0.0f;
}

FString ATrueSkySequenceActor::GetProfilingText(int32 cpu_level, int32 gpu_level) {
    return TEXT("");
}

int32 ATrueSkySequenceActor::GetPreviousSkyKeyframeBeforeTime(float T) {
    return 0;
}

int32 ATrueSkySequenceActor::GetPreviousCloudKeyframeBeforeTime(int32 Layer, float T) {
    return 0;
}

int32 ATrueSkySequenceActor::GetNextSkyKeyframeAfterTime(float T) {
    return 0;
}

int32 ATrueSkySequenceActor::GetNextModifiableSkyKeyframe() {
    return 0;
}

int32 ATrueSkySequenceActor::GetNextModifiableCloudKeyframe(int32 Layer) {
    return 0;
}

int32 ATrueSkySequenceActor::GetNextCloudKeyframeAfterTime(int32 Layer, float T) {
    return 0;
}

FRotator ATrueSkySequenceActor::GetMoonRotation() {
    return FRotator{};
}

float ATrueSkySequenceActor::GetMoonIntensity() {
    return 0.0f;
}

FLinearColor ATrueSkySequenceActor::GetMoonColor() {
    return FLinearColor{};
}

int32 ATrueSkySequenceActor::GetKeyframeInt(int32 KeyframeUid, const FString& Name) {
    return 0;
}

float ATrueSkySequenceActor::GetKeyframeFloat(int32 KeyframeUid, const FString& Name) {
    return 0.0f;
}

int32 ATrueSkySequenceActor::GetInt(const FString& Name) {
    return 0;
}

float ATrueSkySequenceActor::GetFloat(const FString& Name) {
    return 0.0f;
}

int32 ATrueSkySequenceActor::GetCloudKeyframeByIndex(int32 Layer, int32 Index) {
    return 0;
}

bool ATrueSkySequenceActor::GetBool(const FString& Name) {
    return false;
}

float ATrueSkySequenceActor::CloudPointTest(int32 QueryID, FVector Pos) {
    return 0.0f;
}

float ATrueSkySequenceActor::CloudLineTest(int32 QueryID, FVector StartPos, FVector EndPos) {
    return 0.0f;
}

ATrueSkySequenceActor::ATrueSkySequenceActor() {
    this->ActiveSequence = NULL;
    this->MoonTexture = NULL;
    this->CosmicBackgroundTexture = NULL;
    this->SkylightCubemapRT = NULL;
    this->InscatterRT = NULL;
    this->LossRT = NULL;
    this->cloudVisibilityRT = NULL;
    this->RenderMode = EQSimulRenderMode::Default;
    this->DownscaleFactor = 4.00f;
    this->SVSampling = false;
    this->Brightness = 1.00f;
    this->SimpleCloudShadowing = 0.50f;
    this->SimpleCloudShadowSharpness = 0.01f;
    this->SimpleCloudShadowRange = 100.00f;
    this->SimpleCloudShadowBase = 0.00f;
    this->VrMultiResRadius = 0.60f;
    this->VrMultiResBlend = 0.10f;
    this->VrMultiResOffset = 0.50f;
    this->RaytraceSteps = 200;
    this->MetresPerUnit = 0.01f;
    this->Visible = false;
}

