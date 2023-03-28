/*
 * ░▒▓ APPARATIST ▓▒░
 * 
 * File: StateTreeApparatist.h
 * Created: 2023-03-28 12:00:58
 * Author: Vladislav Dmitrievich Turbanov (vladislav@turbanov.ru)
 * ───────────────────────────────────────────────────────────────────
 * 
 * Community forums: https://talk.turbanov.ru
 * 
 * Copyright 2023, SP Vladislav Dmitrievich Turbanov
 * Made in Russia, Moscow City, Chekhov City ♡
 */

#pragma once

#include "CoreMinimal.h"
#include "Engine/NetConnection.h"
#include "Modules/ModuleManager.h"
#include "HAL/UnrealMemory.h"


/**
 * The main StateTree Apparatist runtime module.
 */
class FStateTreeApparatistModule : public IModuleInterface
{
  public:

#pragma region IModuleInterface
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
#pragma endregion IModuleInterface
};


STATETREEAPPARATISTRUNTIME_API DECLARE_LOG_CATEGORY_EXTERN(LogStateTreeApparatist, Log, All);
