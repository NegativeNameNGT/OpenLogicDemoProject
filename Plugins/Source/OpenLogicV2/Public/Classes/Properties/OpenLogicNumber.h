// Copyright 2024 - NegativeNameSeller

#pragma once

#include "CoreMinimal.h"
#include "Tasks/OpenLogicProperty.h"
#include "Widgets/Input/SSpinBox.h"
#include "OpenLogicNumber.generated.h"

UCLASS(Abstract)
class OPENLOGICV2_API UOpenLogicNumber : public UOpenLogicProperty
{
	GENERATED_BODY()

protected:
	// Generic method to create a default input widget for a numeric type.
	template<typename NumericType>
	TSharedRef<SWidget> CreateSpinBox(TSharedRef<FOpenLogicDefaultValueHandle> DefaultValueHandle, const FOpenLogicPinAttributes PinAttributes) const;
};
