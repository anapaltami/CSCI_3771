GXX = g++
CFLAGS = -O2

all: hw08

Vector.o: Vector.cc Vector.h
	g++ -c -Wall -Werror Vector.cc

hw08.o: hw08.cc Vector.h
	g++ -c -Wall -Werror hw08.cc

hw08: hw08.o Vector.o
	g++ -o hw08 hw08.o Vector.o

clean:
	rm -f *.o
