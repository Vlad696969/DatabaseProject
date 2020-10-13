#pragma once
#include <stdio.h>

class ReadStream
{
	FILE* file;
public:
	void CustomOpen(char* filename);
	void readln();
	void seek(int pos);
	bool end_of_stream();
};

