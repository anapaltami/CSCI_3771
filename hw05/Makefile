GXX = g++
CFLAGS = -O2

all: hw05

functions.o: functions.cc functions.h
	g++ -c -Wall -Werror functions.cc

cannonball.o: cannonball.cc functions.h
	g++ -c -Wall -Werror cannonball.cc

hw05.o: hw05.cc functions.h
	g++ -c -Wall -Werror hw05.cc
	
hw05: hw05.o functions.o cannonball.o
	g++ -o hw05 hw05.o functions.o cannonball.o

clean:
	rm -f *.o
