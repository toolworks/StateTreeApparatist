/*
 * ░▒▓ APPARATIST ▓▒░
 * 
 * File: StateTreeApparatistRuntime.Build.cs
 * Created: 2023-03-28 11:43:57
 * Author: Vladislav Dmitrievich Turbanov (vladislav@turbanov.ru)
 * ───────────────────────────────────────────────────────────────────
 * 
 * Community forums: https://talk.turbanov.ru
 * 
 * Copyright 2023, SP Vladislav Dmitrievich Turbanov
 * Made in Russia, Moscow City, Chekhov City ♡
 */

using UnrealBuildTool;

public class StateTreeApparatistRuntime : ModuleRules
{
    public StateTreeApparatistRuntime(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "ApparatusRuntime",
            "ApparatistRuntime",
            "StateTreeModule", });
    }
}
