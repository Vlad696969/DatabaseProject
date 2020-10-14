#include "WriteStream.h"
#include "StreamException.h"

void WriteStream::writeln1(char* line) {}

void WriteStream::writeln2(char* line) {
    if (!streamCheck()) throw new StreamException();

    while (fgets(buffer, 128, stdin)) {
        fputs(buffer, fileptr);
    }
}

void WriteStream::writeln3(char* line) {}

bool WriteStream::open(char* filepath) {
    fileptr = fopen(filepath,"w");
    file = fileno(fileptr);
    if (file == -1) {
        perror("Unable to open the file: %s\n", errno);
        return 1;
    }

    return 0;
}

void WriteStream::close() {
    fileptr = nullptr;
    file = -1;
}

WriteStream::~WriteStream(){
    delete[] buffer;
    close(file);
    fclose(fileptr);
}