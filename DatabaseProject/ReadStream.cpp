#include "ReadStream.h"

void ReadStream::readln() {
    char c[1];
    while (fread(c, 1, 1, fileptr) == 1) {
        if (c[0] == '\n') {
            break;
        }
        std::cout << c[0];
    }
    
}

void ReadStream::readln2() {
    memset(buffer, 0, SIZE);

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
    fclose(fileptr);
}

ReadStream::~ReadStream(){}

ReadStream::ReadStream(const char filepath[]) {
    fileptr = fopen(filepath, "r");
    if (fileptr == nullptr) {
        //Exception
    }
}
