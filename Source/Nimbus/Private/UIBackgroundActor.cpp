#include "UIBackgroundActor.h"
#include "ManaComponent.h"

AUIBackgroundActor::AUIBackgroundActor() {
    this->ManaComponent = CreateDefaultSubobject<UManaComponent>(TEXT("ManaComponent"));
}

