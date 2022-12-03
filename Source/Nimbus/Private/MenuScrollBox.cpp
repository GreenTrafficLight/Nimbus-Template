#include "MenuScrollBox.h"

class UScrollBox;
class UImage;
class UTextBlock;
class UWidget;

void UMenuScrollBox::SetMenuScrollBar(UImage* InScrollBar, UImage* InScrollBarBackground) {
}

void UMenuScrollBox::SetMenuBox(UTextBlock* InText, UScrollBox* InScrollBox) {
}

void UMenuScrollBox::RemoveChildAt(int32 Index) {
}

UWidget* UMenuScrollBox::GetChildAt(int32 Index) const {
    return NULL;
}

void UMenuScrollBox::ClearContent() {
}

void UMenuScrollBox::AddChild(UWidget* InWidget) {
}

UMenuScrollBox::UMenuScrollBox() {
    this->ScrollSpeed = 10.00f;
}

