#include "ReadStream.h"
#pragma once
#include <stdio.h>
#include<io.h>
#include <fcntl.h>
#include <iostream>


void ReadStream::readln() {
    if (!checkStream) throw new StreamException()

    char* c = NULL;
    while (read(file,c,1) != '\n'){}
}

void ReadStream::readln2() {
    if (!checkStream) throw new StreamException()

    while ( fgets(buffer, 128, fileptr) != NULL ) {
        std::cout << buffer << std::endl;
    }
}

void ReadStream::readln3(){
    if (!checkStream) throw new StreamException()

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
    fileptr = nullptr;
    file = -1;
}

bool ReadStream::open(char* filepath) {
    fileptr = fopen(filepath,"r");
    file = fileno(fileptr);
    if (file == -1) {
        perror("Unable to open the file: %s\n", errno);
        return 1;
    }

    return 0;
}

int ReadStream::streamCheck() {
    return file+1; // file = -1 si erreur
}

ReadStream::~ReadStream(){
    delete[] buffer;
    close(file);
    close(size);
    fclose(fileptr);
}
