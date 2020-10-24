#pragma once
#include "ReadStream.h"

#include <fcntl.h>      /* Needed only for _O_RDWR definition */
#include <io.h>
#include <stdlib.h>
#include <stdio.h>
#include <share.h>
#include <iostream>
#include <share.h>
#include <string>

char ReadStream::readln() {
    char c[1];
    while (fread(c, 1, 1, fileptr) == 1) {
        if (c[0] == '\n') { 
            break;
        }
        return c[0];
    }
  return 
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
    char c[1];
    int i = 0;
    int a;
    while (true) {
        a = fread(c, 1, 1, fileptr) == 1;
        if (a != 1) {
            for (int j = 0; j < i;j++) { std::cout << buffer[j]; }
            break;
        }
        buffer[i] = c[0];
        if (i == sizeof(buffer)) {
            std::cout << buffer;
            i = -1;
        }
        if (c[0] == '\n') {
            for (int j = 0; j <= i;j++) {std::cout << buffer[j];}
            break;
        }
        i++;
    }
    /*
    for (int i=0;  buffer[i-1] != '\n'; i++) {
        fread(buffer, 1, 1, fileptr);
        if (i == sizeof(buffer)) {
            std::cout << "AAAAAAAAAAAA" << std::endl;
            i = 0;
            for (int j=0; j < sizeof(buffer); j++) { std::cout << buffer[j]; }
        }
    }*/
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
