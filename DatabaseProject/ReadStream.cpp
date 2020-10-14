#include "ReadStream.h"
#pragma once
#include <stdio.h>
#include<io.h>
#include <fcntl.h>
#include <iostream>


void ReadStream::readln(){
    char* c = NULL;
    while (read(file,c,1) != '\n'){
        std::cout << c;
    }
    std::cout << std::endl;
    
}

void ReadStream::readln2() {
    char buffer[128];
    while ( fgets(buffer, sizeof(buffer), fileptr) != NULL ) {
        size_t len = strlen(buffer);
        std::cout << buffer;
        //check to see if we have reached the end of the line 
        if (buffer[len-1] == '\n')
        {
            break; //Stop reading if we have reache the end of the line
        }
    }
    std::cout << std::endl;
}

void ReadStream::readln3(){
    char* c = NULL;
    int i=0;
    while (read(file,c,1) != '\n'){
        if(i < size){
            buffer[i]=*c;
        }
        else{
            i = 0;
        }
    }
}

void ReadStream::seek(int pos){}

bool ReadStream::end_of_stream(){}

void ReadStream::open(char* filepath) {
    fileptr = fopen(filepath,"r");
    if (file == NULL) {
        perror("Unable to open the file.\n");
    }
    file = fileno(fileptr);
}

ReadStream::~ReadStream(){
    delete[] buffer;
    fclose(fileptr);
}
