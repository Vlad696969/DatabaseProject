#pragma once
#include <stdio.h>

class ReadStream
{
private:
	int file;
    char* buffer = new char[128];
	FILE* fileptr = nullptr;
	int size = 0; //TODO : size = 0 ?

public:
	void readln();
    void readln2();
    void readln3();
	void seek(int pos);
	void close();
    bool open(const char* filepath);
	~ReadStream();
};

