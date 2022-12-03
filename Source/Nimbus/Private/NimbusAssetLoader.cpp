#include "NimbusAssetLoader.h"

class UWorld;

void UNimbusAssetLoader::OnPostWorldCleanupHandler(UWorld* World, bool bSessionEnded, bool bCleanupResources) {
}

void UNimbusAssetLoader::OnPostGarbageCollectHandler() {
}

UNimbusAssetLoader::UNimbusAssetLoader() {
    this->TextureManager = NULL;
    this->GameInstance = NULL;
}

