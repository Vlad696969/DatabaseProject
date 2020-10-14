#include "ReadStream.h"
#pragma once
#include <stdio.h>
#include<io.h>
#include <fcntl.h>
#include <iostream>


void ReadStream::readln() {
    if (!checkStream) throw new StreamException()

    char* c = NULL;
    while (read(file,c,1) != '\n'){
        std::cout << c;
    }
    std::cout << std::endl;

}

void ReadStream::readln2() {
    if (!checkStream) throw new StreamException()

    while ( fgets(buffer, 128, fileptr) != NULL ) {
        std::cout << buffer
    }
    buffer = new char[128];
    std::cout << std::endl;
}
/*
 * void ReadStream::readln2() {
    char buffer[128];
    while ( fgets(buffer, sizeof(buffer), fileptr) != NULL ) {
        size_t len = strlen(buffer);
        //check to see if we have reached the end of the line
        if (buffer[len-1] == '\n')
        {
            break; //Stop reading if we have reache the end of the line
        }
        std::cout << buffer;
        //empty buffer
        buffer[0] = '\0';
    }
    std::cout << std::endl;
}
 */
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
