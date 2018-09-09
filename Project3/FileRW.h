#pragma once
class FileRW
{
public:
	char buff[10000];

	void reader();
	void writer();

	FileRW();
	~FileRW();
};

