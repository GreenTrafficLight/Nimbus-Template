#include "Widget3D.h"
#include "Components/WidgetComponent.h"

AWidget3D::AWidget3D() {
    this->Widget2D = CreateDefaultSubobject<UWidgetComponent>(TEXT("Widget"));
}

