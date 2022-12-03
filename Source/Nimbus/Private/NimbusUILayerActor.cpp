#include "NimbusUILayerActor.h"
#include "Components/WidgetComponent.h"

ANimbusUILayerActor::ANimbusUILayerActor() {
    this->WidgetComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("WidgetComponent"));
}

