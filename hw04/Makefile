GXX = g++

all: hw04

hw04.o: hw04.cc
	$(GXX) -c -Wall -Werror hw04.cc

hw04: hw04.o
	$(GXX) -o hw04 hw04.o

clean:
	rm -f *.o
