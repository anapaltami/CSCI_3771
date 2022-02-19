#include <cstdio>
#include "functions.h"
#define THEIGHT 22
#define TWIDTH 40

int main (int argc, char** argv) {
	int height, width;	// declare height, width, angle
	height = THEIGHT;
	width = TWIDTH;
	int scale = 10;	// cast scale to int
	int** array = new int*[height];	// allocate array of pointers
	*array = new int[width*height];	// allocate flat array
	// set pointers to the start of each row
	for (int i = 1; i < height; i++) {
		array[i] = array[i-1] + width;
	}
	cannonball(array, scale);
	printArray(array, height, width);
	delete [] *array;		// delete flat array
	delete [] array;		// delete array of pointers
	array = nullptr;		// set array to nullptr
}
