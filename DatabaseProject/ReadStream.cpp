#include "ReadStream.h"
#pragma once
#include <stdio.h>
#include<io.h>
#include <fcntl.h>
#include <iostream>

class ReadStream
{
	int file;
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
	void seek(int pos){}
	bool end_of_stream(){}
};