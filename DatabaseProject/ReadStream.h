#pragma once
#include <stdio.h>

class ReadStream
{
	int file;
public:
	void CustomOpen(char* filename);
	void readln();
	void seek(int pos);
	bool end_of_stream();
};

