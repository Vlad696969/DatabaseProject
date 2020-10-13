#include "ReadStream.h"
#pragma once
#include <stdio.h>
#include<io.h>
#include <fcntl.h>
#include <iostream>

ReadStream::void CustomOpen(char* filename){
    file = open(filename,O_RDONLY);
    if (file < 0) {
        perror("Unable to open file");
    }
}

ReadStream::void readln(){
    char* c = NULL;
    while (read(file,c,1) != '\n'){}
}

ReadStream::void readln2() {
    char buffer[128];
    while ( fgets(buffer, 128, fileptr) != NULL ) {
        cout << buffer << endl;
    }
    fclose(fp);
}

ReadStream::void readln3(){
    char* c = NULL;
    int i=0;
    while (read(file,c,1) != '\n'){
        if(i < size){
            char buffer[i]=c;
        }
        else{
            i=0
        }
    }
}

ReadStream::void seek(int pos){}

ReadStream::bool end_of_stream(){}

ReadStream::void customOpen2(char* filepath) {
    fileptr = open(filepath,"r");
    if (file == NULL) {
        perror("Unable to open the file.%s\n", filepath);
    }
}
ReadStream::~ReadStream(){
    delete[] buffer;
}
