#include "FileRW.h"
#include <fstream> 
#include <iostream>
using namespace std;

void FileRW::fileRead()


{
	
	ifstream fileIn ("C:\\example.txt");

	if (!fileIn.is_open())
		cout << "No File!" << endl;
	else {
		fileIn.getline(temp, 10000);
		fileIn.close();
		cout << temp << endl;

	}
}


void FileRW::fileWright()
{
}



FileRW::FileRW()
{
}


FileRW::~FileRW()
{
}
