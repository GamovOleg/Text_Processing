#include "Factory.h"
#include "IProcessor.h"

IProcessor *IProcessor::chooseArg(char choice)
{
	if (choice == 'A')
		return new processorA;
	else if (choice == 'B')
		return new processorB;
	else
		return new processorC;
}

IProcessor * Factory::chooseArg()
{
	return nullptr;
}