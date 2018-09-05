#pragma once
#include "IProcessor.h"
#include <iostream>

class Processors :
	public IProcessor
{


public:
	void dubleCheck();
	Processors();
	~Processors();
};

