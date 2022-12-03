#pragma once
#include "CoreMinimal.h"
#include "CommonHangarWeaponWidget.h"
#include "ViewerHangarWeapon.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UViewerHangarWeapon : public UCommonHangarWeaponWidget {
    GENERATED_BODY()
public:
    UViewerHangarWeapon();
};

