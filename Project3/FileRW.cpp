#include "FileRW.h"
#include <iostream>
#include <fstream>

using namespace std;

void FileRW::reader()
{
	infile.open("example.txt");
	while (!infile.is_open()) {
		cerr << "File not found!" << endl;
	}
}

void FileRW::writer()
{
	ofstream outfile;
	outfile.open("example_out.txt");
	outfile.close();
}

FileRW::FileRW()
{
}


FileRW::~FileRW()
{
}
