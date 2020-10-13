#pragma once
#include <stdio.h>

class WriteStream
{
	int file;
public:
	void create(char* path);
	void writeln(char* line);
	void closeStream();
};

