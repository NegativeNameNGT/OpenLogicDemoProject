// Copyright 2024 - NegativeNameSeller

#include "Classes/Properties/OpenLogicNumber.h"

template <typename NumericType>
TSharedRef<SWidget> UOpenLogicNumber::CreateSpinBox(TSharedRef<FOpenLogicDefaultValueHandle> DefaultValueHandle, const FOpenLogicPinAttributes PinAttributes) const
{
	// Retrieve the initial value
	NumericType Value = DefaultValueHandle->GetDefaultValue<NumericType>();
	
	TSharedRef<SSpinBox<NumericType>> SpinBox = SNew(SSpinBox<NumericType>)
		.Value(Value)
		.Font(FCoreStyle::GetDefaultFontStyle("Regular", 8))
		.OnValueChanged_Lambda([DefaultValueHandle, this](NumericType NewValue) 
		{
			DefaultValueHandle->SetDefaultValue(NewValue);
		});

	if (PinAttributes.ClampMax > PinAttributes.ClampMin)
	{
		// Min/max values
		SpinBox->SetMinValue(PinAttributes.ClampMin);
		SpinBox->SetMaxValue(PinAttributes.ClampMax);

		// Slider min/max values
		SpinBox->SetMinSliderValue(PinAttributes.ClampMin);
		SpinBox->SetMaxSliderValue(PinAttributes.ClampMax);
	}
	
	return SpinBox;
}