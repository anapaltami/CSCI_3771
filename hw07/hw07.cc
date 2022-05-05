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
	Vector sum = v1+v2;
	std::cout<<"Vector sum: "<<sum<<"\n";	// (2.2, 4.4, 6.6)
	
	// add a vector "in place" with the += operator
	// make the class printable by printing its components
	v1+=v2;
	std::cout<<"Vector sum inline: "<<v1<<"\n"; // (2.2, 4.4, 6.6)

	// Subtract two vectors by subtracting their components
	Vector sub = v1-v2;
	std::cout<<"Vector difference: "<<sub<<"\n"; // (1.1, 2.2, 3.3)
	
	// multiply a vector by a double (xa, ya, za)
	Vector mul = v2*3.0;
	std::cout<<"Product of 3.0: "<<mul<<"\n"; // (3.3, 6.6, 9.9)
	
	// multiple two vectors by multiplying their components and summing them
	double vv = v1*v2;
	std::cout<<"Product of vector: "<<vv<<"\n"; // 33.88
}
