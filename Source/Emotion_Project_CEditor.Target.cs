// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class Emotion_Project_CEditorTarget : TargetRules
{
	public Emotion_Project_CEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "Emotion_Project_C" } );
	}
}
