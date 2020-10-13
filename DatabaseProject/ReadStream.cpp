#include "ReadStream.h"
#pragma once
#include <stdio.h>
#include<io.h>
#include <fcntl.h>
#include <iostream>

class ReadStream
{
	int file;
    int size = 100;

public:
	void CustomOpen(char* filename){
		
		file = open(filename,O_RDONLY);
		if (file < 0) {
			perror("Unable to open file");
		}	
	}
	void readln(){
		char* c = NULL;
		while (read(file,c,1) != '\n'){
			
		}

	}
    void readln2(){
        char* c = NULL;
        char* buffer = new char[size];
        int i=0;
        while (read(file,c,1) != '\n'){
            if(i < size){
                buffer[i]=*c;
            }
            else{
                i=0
            }
			i++;
        }
        delete[] buffer;
    }
	void seek(int pos){}
	bool end_of_stream(){}
};