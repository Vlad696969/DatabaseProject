data : main.o ReadStream.o WriteStream.o
	g++ -o data main.o ReadStream.o WriteStream.o
main.o: main.cpp ReadStream.h WriteStream.h
	g++ -Wall -c main.cpp
ReadStream.o: ReadStream.cpp ReadStream.h
	g++ -Wall -c ReadStream.cpp
WriteStream.o: WriteStream.cpp WriteStream.h
	g++ -Wall -c WriteStream.cpp

clean :
	rm -f *~ *\*.o
mrproper : clean 
	rm -f main