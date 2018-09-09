#include <iostream>
#include "FileRW.h"
#include "IProcessor.h"
#include "Factory.h"
#include <vector>

using namespace std;

int main()
{
	vector<IProcessor*> arguments;
	char choice;
	FileRW frw;
	frw.reader();
	system("pause");
	while (true)
	{
		cout << "Choose an Argument: A, B or C";
		cin >> choice;
		arguments.push_back(IProcessor::chooseArg(choice));
	}

	frw.writer();
	system("pause");
}