#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MyObject.generated.h"

UCLASS()
class YOURPROJECT_API UMyObject : public UObject
{
    GENERATED_BODY()

public:
    // ��ȡ����ʵ���ľ�̬����
    static UMyObject* GetInstance();

    // ȷ�����ᱻ���ƻ�ֱ�ӹ���
    UMyObject(const FObjectInitializer& ObjectInitializer);

protected:
    // ����ʵ��
    static UMyObject* Instance;

public:
    // ʾ��ȫ�ֱ���
    UPROPERTY(BlueprintReadWrite, Category = "Global Variables")
    int32 GlobalValue;
};
