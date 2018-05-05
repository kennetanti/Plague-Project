// Fill out your copyright notice in the Description page of Project Settings.

#include "TestSingleton.h"

static UTestSingleton *s_instance = NULL;

UTestSingleton* UTestSingleton::GetInstance()
{
	if (!s_instance)
	{
		s_instance = NewObject<UTestSingleton>();
		s_instance->AddToRoot();
	}
	return s_instance;
}

UTestSingleton* UTestSingleton::Instance()
{
	if (!s_instance)
	{
		s_instance = NewObject<UTestSingleton>();
		s_instance->AddToRoot();
	}
	return s_instance;
}


