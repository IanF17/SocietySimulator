#include "MyObject.h"

UMyObject* UMyObject::Instance = nullptr;

UMyObject* UMyObject::GetInstance()
{
    if (!Instance)
    {
        Instance = NewObject<UMyObject>();
        Instance->AddToRoot(); // ��ֹ��������
    }
    return Instance;
}

UMyObject::UMyObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
    // ��ʼ��ȫ�ֱ���
    GlobalValue = 0;
}
