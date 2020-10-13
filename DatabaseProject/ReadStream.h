#pragma once
#include <stdio.h>

class ReadStream
{
private:
	int file;
    char* buffer = new char[128];

public:
	void CustomOpen(char* filename);
	void readln();
    void readln2();
    void readln3();
	void seek(int pos);
	bool end_of_stream();
    void customOpen2(char* filepath);
	~ReadStream();
};

