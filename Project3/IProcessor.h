#pragma once
#include <iostream>

class IProcessor
{
	public:
	virtual ~IProcessor (){}

	virtual void processingData();
 
};