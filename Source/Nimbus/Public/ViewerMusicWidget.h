#pragma once
#include "CoreMinimal.h"
#include "MenuBaseWidget.h"
#include "ViewerMusicWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UViewerMusicWidget : public UMenuBaseWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* DotClass;
    
public:
    UViewerMusicWidget();
};

