GXX = g++
CFLAGS = -O2

all: hw07

Vector.o: Vector.cc Vector.h
	g++ -c -Wall -Werror Vector.cc
	
hw07.o: hw07.cc Vector.h
	g++ -c -Wall -Werror hw07.cc
	
hw07: hw07.o Vector.o
	g++ -o hw07 hw07.o Vector.o

clean:
	rm -f *.o
