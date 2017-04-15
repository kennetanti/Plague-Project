// Fill out your copyright notice in the Description page of Project Settings.

#include "CombatSystem.h"
#include "CustomBpNode.h"

INT32 UCustomBpNode::OneLeftShift(INT32 flag)
{
	return 1 << flag;
}

void UCustomBpNode::GetActionMappingsKey(const  FName _ActionName, bool &_Success, TArray<FKey> &_Keys)
{
	UInputSettings* Settings = const_cast<UInputSettings*>(GetDefault<UInputSettings>());

	_Success = false;
	for (FInputActionKeyMapping& Each : Settings->ActionMappings)
	{
		if (Each.ActionName == _ActionName)
		{
			_Success = true;
			_Keys.Add(Each.Key);
		}
	}
}


