#pragma once
#include <stdio.h>
#include <iostream>
#include <fstream>

class ReadStream
{
private:
	int file;
    char* buffer;
	FILE* fileptr;
	int size;

public:
	void readln();
    void readln2();
    void readln3();
	void seek(int pos);

	void close();
    bool open(const char* filepath);
	~ReadStream();
};

