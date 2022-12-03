#pragma once
#include "CoreMinimal.h"
#include "HangarInfoBase.h"
#include "HangarMultiNickname.generated.h"

class UTextBlock;

UCLASS(Blueprintable)
class UHangarMultiNickname : public UHangarInfoBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* NicknameLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* NicknameText;
    
public:
    UHangarMultiNickname();
};

