#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HUD3DUIManager.generated.h"

class ATexture3DUIActor;

UCLASS(Blueprintable)
class NIMBUS_API UHUD3DUIManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ATexture3DUIActor*> TextureActors;
    
public:
    UHUD3DUIManager();
};

