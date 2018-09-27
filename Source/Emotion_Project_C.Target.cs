// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class Emotion_Project_CTarget : TargetRules
{
	public Emotion_Project_CTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.Add("Emotion_Project_C");
	}
}