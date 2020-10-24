#pragma once
#include "ReadStream.h"

#include <fcntl.h>      /* Needed only for _O_RDWR definition */
#include <io.h>
#include <stdlib.h>
#include <stdio.h>
#include <share.h>
#include <iostream>
#include <share.h>


void ReadStream::readln() {
    char c[2];
    fread(c, 1, 1, fileptr);
    std::cout << c[0] << std::endl;
    
}

void ReadStream::readln2() {
    char buffer[128];
    while ( fgets(buffer, sizeof(buffer), fileptr) != NULL ) {
        size_t len = strlen(buffer);
        std::cout << buffer;
        //check to see if we have reached the end of the line
        if (buffer[len-1] == '\n')
        {
            break; //Stop reading if we have reached the end of the line
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

void ReadStream::close(){
    _close(file);
}

bool ReadStream::open(const char* filepath) {
    fileptr = fopen(filepath, "r");
    return 0;
}

ReadStream::~ReadStream(){
    
}
