#include "TrueSkyWrapper.h"

class UObject;

void UTrueSkyWrapper::SetTrueSkyVisible(bool bVisible, UObject* WorldContextObject) {
}

void UTrueSkyWrapper::SetTime(float Value) {
}

void UTrueSkyWrapper::SetShadowBase(float ShadowBaseUU) {
}

float UTrueSkyWrapper::SandPointTest(int32 QueryID, FVector Pos) {
    return 0.0f;
}

float UTrueSkyWrapper::SandLineTest(int32 QueryID, FVector StartPos, FVector EndPos) {
    return 0.0f;
}

FRotator UTrueSkyWrapper::GetSunRotation() {
    return FRotator{};
}

FRotator UTrueSkyWrapper::GetSunOrMoonRotation() {
    return FRotator{};
}

FLinearColor UTrueSkyWrapper::GetSunColor() {
    return FLinearColor{};
}

float UTrueSkyWrapper::GetShadowBase() {
    return 0.0f;
}

int32 UTrueSkyWrapper::GetNextModifiableCloudKeyframe(int32 Layer) {
    return 0;
}

FRotator UTrueSkyWrapper::GetMoonRotation() {
    return FRotator{};
}

float UTrueSkyWrapper::GetKeyframeFloat(int32 KeyframeUid, const FString& Name) {
    return 0.0f;
}

float UTrueSkyWrapper::GetCloudMinAltitude() {
    return 0.0f;
}

float UTrueSkyWrapper::GetCloudMaxAltitude() {
    return 0.0f;
}

float UTrueSkyWrapper::CloudPointTest(int32 QueryID, FVector Pos) {
    return 0.0f;
}

float UTrueSkyWrapper::CloudLineTest(int32 QueryID, FVector StartPos, FVector EndPos) {
    return 0.0f;
}

UTrueSkyWrapper::UTrueSkyWrapper() {
}

