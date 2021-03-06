#pragma once
#include <cstdio>
#include <iostream>
#include <fstream>

#define SIZE 8

class ReadStream
{
private:
    char buffer[SIZE];
	FILE* fileptr;


public:
	int readln();
    int readln2();
    int readln3();
	void seek(int pos);
    void close();
    void rewind();

	~ReadStream();
    explicit ReadStream(const char filepath[]);
};

