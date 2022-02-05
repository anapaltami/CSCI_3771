GXX = g++
CFLAGS = -O2

all: hw02

aOfX.o: aOfX.cc aOfX.h
	g++ -c -Wall -Werror aOfX.cc

aOfY.o: aOfY.cc aOfY.h
	g++ -c -Wall -Werror aOfY.cc

drag.o: drag.cc drag.h
	g++ -c -Wall -Werror drag.cc

dTravel.o: dTravel.cc dTravel.h
	g++ -c -Wall -Werror dTravel.cc

velocity.o: velocity.cc velocity.h
	g++ -c -Wall -Werror velocity.cc

vOfN.o: vOfN.cc vOfN.h
	g++ -c -Wall -Werror vOfN.cc

hw02.o: hw02.cc aOfX.h aOfY.h drag.h dTravel.h velocity.h vOfN.h
	g++ -c -Wall -Werror hw02.cc

hw02: hw02.o aOfX.o aOfY.o drag.o dTravel.o velocity.o vOfN.o
	g++ -o hw02 hw02.o aOfX.o aOfY.o drag.o dTravel.o velocity.o vOfN.o

clean:
	rm -f *.o
