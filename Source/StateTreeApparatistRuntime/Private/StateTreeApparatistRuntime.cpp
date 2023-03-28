/*
 * ░▒▓ STATE TREE APPARATIST ▓▒░
 * 
 * File: StateTreeApparatist.cpp
 * Created: 2023-03-28 12:03:47
 * Author: Vladislav Dmitrievich Turbanov (vladislav@turbanov.ru)
 * ───────────────────────────────────────────────────────────────────
 * 
 * Community forums: https://talk.turbanov.ru
 * 
 * Copyright 2019 - 2022, SP Vladislav Dmitrievich Turbanov
 * Made in Russia, Moscow City, Chekhov City ♡
 */

#include "StateTreeApparatistRuntime.h"

#include "Modules/ModuleManager.h"


#define LOCTEXT_NAMESPACE "FStateTreeApparatistRuntimeModule"

DEFINE_LOG_CATEGORY(LogStateTreeApparatist);

void FStateTreeApparatistRuntimeModule::StartupModule()
{
}

void FStateTreeApparatistRuntimeModule::ShutdownModule()
{
}

IMPLEMENT_MODULE(FStateTreeApparatistRuntimeModule, StateTreeApparatistRuntime)

#undef LOCTEXT_NAMESPACE
