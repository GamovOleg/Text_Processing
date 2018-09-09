#pragma once
#include "IProcessor.h"
#include <iostream>

class Factory
{

public:
	char n;
	static IProcessor* chooseArg();

};
class processorA : public IProcessor
{
	Factory* factory;
	void processor()
	{
		static char buff[10000];
		int i = 0;
		while (!infile.eof()) {
			infile.getline(buff[i], sizeof(buff));
			outfile << buff[i];
			++i;
		}

	}
};
class processorB : public IProcessor
{
	Factory* factory;
	void processor()
	{

	}
};
class processorC : public IProcessor
{
	Factory* factory;
	void processor()
	{

	}
};