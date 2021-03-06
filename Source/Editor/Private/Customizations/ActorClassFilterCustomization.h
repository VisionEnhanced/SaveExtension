// Copyright 2015-2019 Piperift. All Rights Reserved.
#pragma once

#include "ClassFilterCustomization.h"


class IPropertyHandle;

class FActorClassFilterCustomization : public FClassFilterCustomization
{
public:

	/**
	* Creates a new instance.
	*
	* @return A new struct customization for Factions.
	*/
	static TSharedRef<IPropertyTypeCustomization> MakeInstance()
	{
		return MakeShared<FActorClassFilterCustomization>();
	}

protected:

	virtual TSharedPtr<IPropertyHandle> GetFilterHandle(TSharedRef<IPropertyHandle> StructPropertyHandle) override;
};

