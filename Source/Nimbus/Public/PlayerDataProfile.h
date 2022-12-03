#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PlayerDataProfile.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class NIMBUS_API UPlayerDataProfile : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* VisualTexture;
    
public:
    UPlayerDataProfile();
};

