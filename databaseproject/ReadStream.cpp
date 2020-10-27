#include "ReadStream.h"
#include "exception"

ReadStream::ReadStream(const char filepath[]) {

    fileptr = fopen(filepath, "r");
    if (fileptr == nullptr) {
        throw std::exception();
    }
}

int ReadStream::readln() {
    char c[2];
    int length = 0;

    while (fread(c, 1, 1, fileptr) == 1) {

        std::cout << c;
        if (c[0] == '\n') {
            return length;
        }
        length++;
    }
    return -1;
}

int ReadStream::readln2() {
    memset(buffer, 0, SIZE);
    int length = 0;
    while ( fgets(buffer, sizeof(buffer), fileptr) != nullptr ) {
        size_t len = strlen(buffer);
        std::cout << buffer;
        length += len;
        //check to see if we have reached the end of the line
        if (buffer[len-1] == '\n'){

            return len; //Stop reading if we have reached the end of the line
        }
        
    }
    std::cout << std::endl;
    return -1;
}

int ReadStream::readln3(){
    // memset(buffer, 0, SIZE);
    char c[2];
    int i = 0;
    int a;
    int length=0;
    while (true) {
        a = (fread(c, 1, 1, fileptr) == 1);
        if (a != 1) {
            if (i == 0) {
                return -1;
            }
            return length + i;
        }
        buffer[i] = c[0];
        if (i == sizeof(buffer)) {
            length += sizeof(buffer);
            i = -1;
        }
        if (c[0] == '\n') {
            for (int j = 0; j <= i;j++) {std::cout << buffer[j];}
            return length + i;
        }
        i++;
    }
}

void ReadStream::close(){
    fclose(fileptr);
}

void ReadStream::seek(int pos){}

void ReadStream::rewind() {
    std::rewind(fileptr);
}

ReadStream::~ReadStream() {
    fclose(fileptr);
}
