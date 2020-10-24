
#include "ReadStream.h"
#include "WriteStream.h"

int main(int argc, char** argv) {
    ReadStream rs = ReadStream("test.txt");

    std::cout << " Readln" << std::endl;
    rs.readln();
    std::cout << " Readln3" << std::endl;*/
    rs.readln3();
    rs.readln3();
    rs.close();

}




