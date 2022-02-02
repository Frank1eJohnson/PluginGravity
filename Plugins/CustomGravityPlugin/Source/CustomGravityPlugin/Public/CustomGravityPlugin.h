// Copyright 2019 Zhongqi Shan (Sabrave). All Rights Reserved.
//******************* http://ue4resources.com/ *********************//


#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FCustomGravityPluginModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
