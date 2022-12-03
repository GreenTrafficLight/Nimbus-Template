#include "UI3DWidgetActor.h"
#include "Components/WidgetComponent.h"

UWidgetComponent* AUI3DWidgetActor::GetWidgetComponent() {
    return NULL;
}

AUI3DWidgetActor::AUI3DWidgetActor() {
    this->bUpdateTransformByCamera = true;
    this->WidgetComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("WidgetComponent"));
}

