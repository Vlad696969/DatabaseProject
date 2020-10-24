#include <stdio.h>
#include <stdio.h>
#include <iostream>
#include <fstream>

class WriteStream
{
	int file;
    char* buffer;
    FILE* fileptr;

public:
	void create(char* path);
	void writeln1(char* line);
    void writeln2(char* line);
    void writeln3(char* line);

    bool open(char* filepath);
	void close();

    ~WriteStream();
};

