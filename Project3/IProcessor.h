#pragma once

#include "Factory.h"

class IProcessor
{
public:
	static IProcessor *chooseArg(char choice);
	virtual void processor() = 0;

};