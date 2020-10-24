#include "ReadStream.h"

<<<<<<< HEAD
#include <fcntl.h>      /* Needed only for _O_RDWR definition */
#include <io.h>
#include <stdlib.h>
#include <stdio.h>
#include <share.h>
#include <iostream>
#include <share.h>
#include <string>

int ReadStream::readln() {
    char c[1];
    int lenght = 0;
    while (fread(c, 1, 1, fileptr) == 1) {
        if (c[0] == '\n') {
            return lenght;
        }
        lenght++;
    }
    return -1;
}

int ReadStream::readln2() {
    memset(buffer, 0, SIZE);
    int lenght = 0;
    while ( fgets(buffer, sizeof(buffer), fileptr) != NULL ) {
        size_t len = strlen(buffer);
        std::cout << buffer;
        lenght += len;
        //check to see if we have reached the end of the line
        if (buffer[len-1] == '\n'){
            return len; //Stop reading if we have reached the end of the line
        }
        
    }
    return -1;
}

int ReadStream::readln3(){
    char c[1];
    int i = 0;
    int a;
    int lenght
    while (true) {
        a = fread(c, 1, 1, fileptr) == 1;
        if (a != 1) {
            if (i = 0) {return -1;}
            return lenght+i
        }
        buffer[i] = c[0];
        if (i == sizeof(buffer)) {
            lenght += sizeof(buffer);
            i = -1;
        }
        if (c[0] == '\n') {
            for (int j = 0; j <= i;j++) {std::cout << buffer[j];}
            return lenght + i;
        }
        i++;
    }
}

void ReadStream::seek(int pos){}

void ReadStream::close(){
    fclose(fileptr);
}

ReadStream::~ReadStream(){}

ReadStream::ReadStream(const char filepath[]) {
    fileptr = fopen(filepath, "r");
    if (fileptr == nullptr) {
        //Exception
    }
}
