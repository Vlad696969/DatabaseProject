#pragma once
#include <stdio.h>

class WriteStream
{
	int file;
    char* buffer = new char[128];
    FILE* fileptr = nullptr;

public:
	void create(char* path);
	void writeln(char* line);
    void writeln2(char* line);
    void writeln3(char* line);

    bool open(char* filepath);
	void close();

    ~WriteStream();
};

