#include "NimbusMapChangeManager.h"

class UWorld;

void UNimbusMapChangeManager::OnWorldCleanupHandler(UWorld* World, bool bSessionEnded, bool bCleanupResources) {
}

void UNimbusMapChangeManager::OnPostWorldCleanupHandler(UWorld* World, bool bSessionEnded, bool bCleanupResources) {
}

UNimbusMapChangeManager::UNimbusMapChangeManager() {
    this->GameInstance = NULL;
    this->TransitionLoader = NULL;
    this->TravelLoader = NULL;
    this->DefaultTransitionDelay = NULL;
    this->LeakedCleanupWorldContainer = NULL;
    this->CurrentCachedWorldContainer = NULL;
}

