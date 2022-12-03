#include "CloudPlacementTexture.h"

void UCloudPlacementTexture::SetBoxExtent(FVector InBoxExtent, bool bUpdateOverlaps) {
}

FVector UCloudPlacementTexture::GetUnscaledBoxExtent() const {
    return FVector{};
}

FVector UCloudPlacementTexture::GetScaledBoxExtent() const {
    return FVector{};
}

UCloudPlacementTexture::UCloudPlacementTexture() {
    this->CloudMapTexture = NULL;
}

