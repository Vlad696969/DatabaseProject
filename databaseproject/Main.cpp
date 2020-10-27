
#include "ReadStream.h"
#include "WriteStream.h"

void lenght(char* filename){
    ReadStream rs = ReadStream(filename);
    //readln
    int sum = 0;
    int lenght;
    while (true) {
        lenght = rs.readln();
        if (lenght == -1) { break; }
        sum += lenght;
    }
    rs.close();
    std::cout << sum << std::endl;
    //readln2
    rs.rewind();
//    rs = ReadStream(filename);
    sum = 0;
    while(true){
        lenght = rs.readln2();
        if (lenght == -1){break;}
        sum += lenght;
    }
    rs.close();
    std::cout << sum << std::endl;
    //readln3
    rs.rewind();
//    rs = ReadStream(filename);
    sum = 0;
    while (true) {
        lenght = rs.readln3();
        if (lenght == -1) { break; }
        sum += lenght;
    }
    rs.close();
    std::cout << sum << std::endl;
}
int main(int argc, char** argv) {
    try {
        ReadStream rs = ReadStream("test.txt");

        std::cout << "=== Readln1 ===" << std::endl;
        rs.readln();
        std::cout << "=== Readln2 ===" << std::endl;
        rs.readln2();
        std::cout << "=== Readln3 ===" << std::endl;
        rs.readln3();

        rs.close();
    } catch (std::exception e) {
        std::cout << "Exception\n";
    }


}




