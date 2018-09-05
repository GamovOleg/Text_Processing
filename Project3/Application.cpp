#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
#include "FileRW.h"


using namespace std;

int main()
{
	FileRW fileRW;
	SetConsoleTextAttribute(::GetStdHandle(STD_OUTPUT_HANDLE), 15);

	system("pause");
};