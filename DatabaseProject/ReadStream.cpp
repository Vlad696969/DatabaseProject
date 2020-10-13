#include "ReadStream.h"
#pragma once
#include <stdio.h>
#include<io.h>
#include <fcntl.h>
#include <iostream>


void ReadStream::readln(){
    char* c = NULL;
    while (read(file,c,1) != '\n'){}
}

void ReadStream::readln2() {
    char buffer[128];
    while ( fgets(buffer, 128, fileptr) != NULL ) {
        std::cout << buffer << std::endl;
    }
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
    file = fileno(fileptr);
    if (file == NULL) {
        perror("Unable to open the file.\n");
    }
}

ReadStream::~ReadStream(){
    delete[] buffer;
    close(file);
    fclose(fileptr);
}
