#pragma once
#include <stdio.h>
#include <iostream>
#include <fstream>

#define SIZE 8

class ReadStream
{
private:
    char buffer[SIZE];
	FILE* fileptr;


public:
	void readln();
    void readln2();
    void readln3();
	void seek(int pos);

	void close();
	~ReadStream();
    ReadStream(const char filepath[]);
};

