GXX = g++
CFLAGS = -O2

all: hw09

FileStreamBuf.o: FileStreamBuf.cc FileStreamBuf.h
	g++ -c -Wall -Werror FileStreamBuf.cc

hw09.o: hw09.cc FileStreamBuf.h
	g++ -c -Wall -Werror hw09.cc

hw09: hw09.o FileStreamBuf.o
	g++ -o hw09 hw09.o FileStreamBuf.o

clean:
	rm -f *.o