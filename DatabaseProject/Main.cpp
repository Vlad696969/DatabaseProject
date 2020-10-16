#include<iostream>
#include "ReadStream.h"
int main() {
	std::cout << "Hello world !" << std::endl;
	ReadStream readStream = ReadStream();
	readStream.open("test.txt");
	readStream.readln2();
	readStream.close();
}