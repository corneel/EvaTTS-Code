// Copyright 2018 Augmented Enterprise, Inc. All Rights Reserved.

#pragma once

#include "Modules/ModuleManager.h"

class FEvaTTSPluginModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};