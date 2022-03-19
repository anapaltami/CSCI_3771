#include <cstdio>
#include <iostream>
#include "Vector.h"

int main (int argc, char** argv) {
	Vector vector1(0.0, 0.0, 0.0);	// declare vector 1
	Vector vector2(0.0, 0.0, 0.0);	// declare vector 2
	Vector& v1 = vector1;	// create reference for vector 1
	Vector& v2 = vector2;	// create reference for vector 2
	v1.set(1.1, 2.2, 3.3);	// set v1
	v2.set(1.1, 2.2, 3.3);	// set v2
	
	// add two vectors by adding their components
	printf("%.2f\n", v1.add(v2));	// should print 13.20
	
	// add a vector "in place" with the += operator
	// make the class printable by printing its components
	v1+=v2;
	std::cout<<v1;
	
	// multiply a vector by a double (xa, ya, za)
	printf("%.2f\n", v1.multiply(3.0));	// should print 19.80
	
	// multiple two vectors by multiplying their components and summing them
	printf("%.2f\n", v1.mulVector(v2));	// should print 50.82
}
