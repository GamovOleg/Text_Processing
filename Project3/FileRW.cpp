#include "FileRW.h"
#include <fstream> 
#include <iostream>
using namespace std;

void FileRW::fileRead()
{
	ifstream fileIn ("example.txt");

	while (true)
	{
		char v;
		fileIn >> v;
		if (!fileIn.eof())
			cout << v << endl;
		else
			break;
	}
}

void FileRW::fileWright()
{
	ofstream fileOut ("example_out.txt");

	while (true)
	{
		char c;
		fileOut << c << endl;

	}

}

FileRW::FileRW()
{
}


FileRW::~FileRW()
{
}
