// Copyright 2024 - NegativeNameSeller

#pragma once

#include "CoreMinimal.h"
#include "Tasks/OpenLogicTask.h"
#include "Task_ForLoop.generated.h"

UCLASS()
class OPENLOGICNODES_API UTask_ForLoop : public UOpenLogicTask
{
	GENERATED_BODY()
public:
	UTask_ForLoop(const FObjectInitializer& ObjectInitializer);

	virtual void OnTaskActivated_Implementation(UObject* Context, FName PinName) override;
};