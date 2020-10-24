#include <fcntl.h>      /* Needed only for _O_RDWR definition */
#include <io.h>
#include <stdlib.h>
#include <stdio.h>
#include <share.h>
#include "ReadStream.h"


int main(void)
{
    
    ReadStream readstream = ReadStream();
    readstream.open("test.txt");
    readstream.readln();
    readstream.close();
}